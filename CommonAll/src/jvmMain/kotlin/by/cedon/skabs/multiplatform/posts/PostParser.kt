package by.cedon.skabs.multiplatform.posts

import by.cedon.skabs.multiplatform.base.IBaseParser
import by.cedon.skabs.multiplatform.posts.model.Post

actual class PostParser actual constructor() : IBaseParser<Post> {

    override fun serialize(t: Post): Map<String, Any> {
        return mapOf("id" to t.id, "content" to t.content)
    }

    lateinit var postParser: PostParser

    override fun parse(any: Any): Post {
        return postParser.parse(any)
    }
}