package rubylich.ktmp.base

import com.firebase.FIRApp
import com.firebase.firestore.FIRCollectionReference
import com.firebase.firestore.FIRDocumentSnapshot
import com.firebase.firestore.FIRFirestore
import platform.Foundation.NSError
import rubylich.ktmp.Post
import rubylich.ktmp.features.posts.PostParser
import rubylich.ktmp.util.awaitCallback
import rubylich.ktmp.util.toSuspendFunction
import kotlin.native.concurrent.freeze

actual abstract class BaseRepo<T : Any> actual constructor(
        ref: String,
        val parser: IBaseParser<T>
) : IBaseRepo<T> {

    init {
        //FIRApp.configure()
    }

//    private val collection: FIRCollectionReference by lazy {
//        println("[iOS][BaseRepo::collection]: ref:$ref")
//        FIRFirestore.firestore().collectionWithPath(ref)
//    }
    private val collection = FIRFirestore.firestore().collectionWithPath(ref)

    actual override suspend fun getAll(): List<T> {
        return awaitCallback { cont ->
            collection.getDocumentsWithCompletion { document, error ->
                if (error != null) {
                    cont.onError(Exception(error.localizedDescription))
                } else {
                    cont.onComplete(document!!.documents.filterNotNull().map(parser::parse))
                }
            }
        }
    }

    actual override suspend fun get(id: String): T {
        println("[iOS][BaseRepo::get]: id:$id")
        return awaitCallback { cont ->
            println("[iOS][BaseRepo::get]: inside awaitCallback")
            val completion = { document: FIRDocumentSnapshot?, error: NSError? ->
                println("[iOS][BaseRepo::get]: inside callback")
                if (error != null) {
                    println("[iOS][BaseRepo::get]: inside callback error")
                    cont.onError(Exception(error.localizedDescription))
                } else {
                    println("[iOS][BaseRepo::get]: inside callback no error")
                    cont.onComplete(parser.parse(document!!.data()!!))
                }
            }
            println("[iOS][BaseRepo::get]: completion:$completion")
            collection.documentWithPath(id).getDocumentWithCompletion(completion)
        }
    }

    actual override suspend fun set(id: String, t: T) {
        println("[iOS][BaseRepo::set]: id:$id, t:$t")
        return awaitCallback { cont ->
            println("[iOS][BaseRepo::set]: inside awaitCallback")
            println("[iOS][BaseRepo::set]: collection:$collection")
            val completion = { error: NSError? ->
                if (error != null) {
                    println("[iOS][BaseRepo::set]: FAIL!: ${error.localizedDescription}")
                    cont.onError(Exception(error.localizedDescription))
                } else {
                    println("[iOS][BaseRepo::set]: OK!")
                    cont.onComplete(Unit)
                }
            }
            println("[iOS][BaseRepo::set]: completion:$completion")
            collection.documentWithPath(id).setData(parser.serialize(t) as Map<Any?, *>, completion)
        }
    }

    actual override suspend fun delete(id: String) {
        return awaitCallback { cont ->
            collection.documentWithPath(id).deleteDocumentWithCompletion { error ->
                if (error != null) {
                    cont.onError(Exception(error.localizedDescription))
                } else {
                    cont.onComplete(Unit)
                }
            }
        }
    }

    actual override suspend fun update(id: String, field: String, value: Any) {
        return awaitCallback { cont ->
            collection.documentWithPath(id).updateData(mapOf(field to value)) { error ->
                if (error != null) {
                    cont.onError(Exception(error.localizedDescription))
                } else {
                    cont.onComplete(Unit)
                }
            }
        }
    }
}

actual open class PostRepo: BaseRepo<Post>("post", PostParser())