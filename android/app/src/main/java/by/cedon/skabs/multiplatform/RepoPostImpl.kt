package by.cedon.skabs.multiplatform

import com.google.firebase.firestore.FirebaseFirestore
import rubylich.ktmp.Post
import rubylich.ktmp.base.PostRepo
import rubylich.ktmp.lib.await

/**
 * Created by Alexander Zhigulich on 3/29/19.
 */

class RepoPostImpl : PostRepo() {

    val collection = FirebaseFirestore.getInstance().collection(ref)

    override suspend fun get(id: String): Post {
        val documentSnapshot = collection
                .document(id)
                .get()
                .await()

        return documentSnapshot.toObject(Post::class.java)!!
    }

    override suspend fun set(id: String, t: Post) {
        collection
                .document(id)
                .set(t)
                .await()
    }

    override suspend fun delete(id: String) {
        collection
                .document(id)
                .delete()
                .await()
    }

    override suspend fun update(id: String, field: String, value: Any) {
        collection
                .document(id)
                .update(field, value)
                .await()
    }

    override suspend fun getAll(): List<Post> =
            collection.get().await().documents.mapNotNull { it.toObject(Post::class.java) }
}