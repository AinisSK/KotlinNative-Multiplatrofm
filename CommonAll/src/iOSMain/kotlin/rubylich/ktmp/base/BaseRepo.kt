package rubylich.ktmp.base

import com.firebase.FIRApp
import com.firebase.firestore.FIRCollectionReference
import com.firebase.firestore.FIRFirestore
import rubylich.ktmp.Post
import rubylich.ktmp.features.posts.PostParser
import rubylich.ktmp.util.awaitCallback
import rubylich.ktmp.util.toSuspendFunction

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
            collection.documentWithPath(id).getDocumentWithCompletion { document, error ->
                if (error != null) {
                    cont.onError(Exception(error.localizedDescription))
                } else {
                    cont.onComplete(parser.parse(document!!.data()!!))
                }
            }
        }
    }

    actual override suspend fun set(id: String, t: T) {
        println("[iOS][BaseRepo::set]: id:$id, t:$t")
        return awaitCallback { cont ->
            println("[iOS][BaseRepo::set]: inside awaitCallback")
            println("[iOS][BaseRepo::set]: collection:$collection")
            collection.documentWithPath(id).setData(parser.serialize(t) as Map<Any?, *>) { error ->
                if (error != null) {
                    println("[iOS][BaseRepo::set]: FAIL!: ${error.localizedDescription}")
                    cont.onError(Exception(error.localizedDescription))
                } else {
                    println("[iOS][BaseRepo::set]: OK!")
                    cont.onComplete(Unit)
                }
            }
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