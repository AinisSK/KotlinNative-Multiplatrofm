package by.cedon.skabs.multiplatform.base

import by.cedon.skabs.multiplatform.posts.PostParser
import by.cedon.skabs.multiplatform.posts.model.Post
import by.cedon.skabs.multiplatform.util.awaitCallback
import com.firebase.firestore.FIRDocumentSnapshot
import com.firebase.firestore.FIRFirestore
import com.firebase.firestore.FIRQuerySnapshot
import platform.Foundation.NSError

actual abstract class BaseRepo<T : Any> actual constructor(
        ref: String,
        val parser: IBaseParser<T>
) : IBaseRepo<T> {

    private val collection = FIRFirestore.firestore().collectionWithPath(ref)

    actual override suspend fun getAll(): List<T> {
        val log = "[iOS][BaseRepo::getAll]:"
        println(log)
        return awaitCallback { cont ->
            println("$log inside awaitCallback")
            var completion = { document: FIRQuerySnapshot?, error: NSError? ->
                println("$log inside callback")
                if (error != null) {
                    println("$log inside callback error")
                    cont.onError(Exception(error.localizedDescription))
                } else {
                    println("$log inside callback no error")
                    cont.onComplete(document!!.documents.mapNotNull { (it as FIRDocumentSnapshot).data() }.map(parser::parse))
                }
            }
            println("$log completion:$completion")
            collection.getDocumentsWithCompletion(completion)
        }
    }

    actual override suspend fun get(id: String): T {
        val log = "[iOS][BaseRepo::get]:"
        println("$log id:$id")
        return awaitCallback { cont ->
            println("$log inside awaitCallback")
            val completion = { document: FIRDocumentSnapshot?, error: NSError? ->
                println("$log inside callback")
                if (error != null) {
                    println("$log inside callback error")
                    cont.onError(Exception(error.localizedDescription))
                } else {
                    println("$log inside callback no error")
                    cont.onComplete(parser.parse(document!!.data()!!))
                }
            }
            println("$log completion:$completion")
            collection.documentWithPath(id).getDocumentWithCompletion(completion)
        }
    }

    actual override suspend fun set(id: String, t: T) {
        val log = "[iOS][BaseRepo::set]:"
        println("$log id:$id, t:$t")
        return awaitCallback { cont ->
            println("$log inside awaitCallback")
            println("$log collection:$collection")
            val completion = { error: NSError? ->
                if (error != null) {
                    println("$log FAIL!: ${error.localizedDescription}")
                    cont.onError(Exception(error.localizedDescription))
                } else {
                    println("$log OK!")
                    cont.onComplete(Unit)
                }
            }
            println("$log completion:$completion")
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

actual open class PostRepo : BaseRepo<Post>("post", PostParser())