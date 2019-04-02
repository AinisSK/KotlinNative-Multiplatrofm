package rubylich.ktmp.base

import kotlinx.coroutines.*
import rubylich.ktmp.Post
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
//    private val collection = Firestore().collection(ref)

    actual override suspend fun get(id: String): T {
        val documentSnapshot = collection.doc(id).get().await
        return documentSnapshot
    }

    actual override suspend fun set(id: String, t: T) {
        val map = JsMapper.map(Post.serializer(), t as Post).toJs()
        collection.doc(id).set(map)
    }

    actual override suspend fun delete(id: String) {
        collection.doc(id).delete()
    }

    actual override suspend fun update(id: String, field: String, value: Any) {
        collection.doc(id).update(field, value)
    }

    actual override suspend fun getAll(): List<T> {
        return collection.get().docs.map { result -> parser.parse(result) }
    }
}

actual open class PostRepo : BaseRepo<Post>("post", PostParser())

