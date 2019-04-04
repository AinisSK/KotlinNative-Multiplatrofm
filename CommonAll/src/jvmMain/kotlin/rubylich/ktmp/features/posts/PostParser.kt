package rubylich.ktmp.features.posts
import kotlinx.serialization.ImplicitReflectionSerializer

//import com.google.firbase.firestore.DocumentSnapshot
import kotlinx.serialization.Mapper
import rubylich.ktmp.Post
import rubylich.ktmp.base.IBaseParser

actual class PostParser actual constructor() : IBaseParser<Post> {

    override fun serialize(t: Post): Map<String, Any> {
        return mapOf("id" to t.id, "content" to t.content)
    }

    lateinit var postParser: PostParser

    override fun parse(any: Any): Post {
        return postParser.parse(any)
    }
}

//@UseExperimental(ImplicitReflectionSerializer::class)
//inline fun <reified T: Any> DocumentSnapshot.parse(): T = Mapper.unmap(this.data!!)