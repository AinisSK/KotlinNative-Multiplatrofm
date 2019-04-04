package rubylich.ktmp.base

import kotlinx.coroutines.await
import rubylich.ktmp.Post
import rubylich.ktmp.features.posts.DocumentSnapshot
import rubylich.ktmp.features.posts.PostParser
import kotlin.js.Promise

external fun require(module: String): dynamic

actual abstract class BaseRepo<T : Any> actual constructor(
        ref: String,
        private val parser: IBaseParser<T>
) : IBaseRepo<T> {

    var firebaseAdmin = require("firebase-admin")
    var db = firebaseAdmin.firestore()

    private val collection = db.collection(ref)

    actual override suspend fun get(id: String): T {
        val doc = (loadDoc(id) as Promise<DocumentSnapshot>)
        val documentSnapshot = doc.await()
        if (documentSnapshot != null && documentSnapshot.exists) {
            println("found")
            return parser.parse(documentSnapshot.data())
        } else {
            println("NOT found")
            return Post() as T
        }
    }

    private fun loadDoc(id: String): Any {
        val p = Promise<DocumentSnapshot> { resolve, reject ->
            resolve(collection.doc(id).get())
        }
        return p
    }

    actual override suspend fun set(id: String, t: T) {
        val upload = uploadDoc(id, t) as Promise<*>
        upload.await()
    }

    private fun uploadDoc(id: String, t: T): Any {
        val map = JsMapper.map(Post.serializer(), t as Post).toJs()
        val p = Promise<DocumentSnapshot> { resolve, reject ->
            resolve(collection.doc(id).set(map))
        }
        return p
    }

    actual override suspend fun delete(id: String) {
        collection.doc(id).delete().await()
    }

    actual override suspend fun update(id: String, field: String, value: Any) {
        collection.doc(id).update(field, value).await()
    }

    actual override suspend fun getAll(): List<T> {
        return collection.get().await().docs.map { result -> parser.parse(result) }
    }
}

actual open class PostRepo : BaseRepo<Post>("post", PostParser())

