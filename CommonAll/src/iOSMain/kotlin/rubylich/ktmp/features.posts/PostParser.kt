package rubylich.ktmp.features.posts

import com.firebase.firestore.FIRDocumentSnapshot
import kotlinx.serialization.ImplicitReflectionSerializer
import kotlinx.serialization.Mapper
import kotlinx.serialization.Mapper.Companion.unmap
import rubylich.ktmp.Post
import rubylich.ktmp.base.IBaseParser

/**
 * Created by Alexander Zhigulich on 4/1/19.
 */

actual class PostParser actual constructor() : IBaseParser<Post> {

    override fun serialize(t: Post): Map<String, Any> {
        return mapOf("id" to t.id, "content" to t.content)
    }

    override fun parse(any: Any): Post {
        val data = any as Map<String, Any?>
        println("data:$data")
        return Post().apply {
            id = data["id"] as String
            content = data["content"] as String
        }
    }
}

@UseExperimental(ImplicitReflectionSerializer::class)
inline fun <reified T: Any> FIRDocumentSnapshot.parse(): T = unmap(this.data() as Map<String, Any>)