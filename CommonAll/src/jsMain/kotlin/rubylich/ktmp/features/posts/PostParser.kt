package rubylich.ktmp.features.posts

import kotlinx.serialization.Serializable
import rubylich.ktmp.Post
import rubylich.ktmp.base.IBaseParser
import rubylich.ktmp.base.JsMap
import rubylich.ktmp.base.JsMapper

actual class PostParser actual constructor() : IBaseParser<Post> {

    override fun serialize(t: Post): Map<String, Any> {
        return mapOf("id" to t.id, "content" to t.content)
    }

    //    @ImplicitReflectionSerializer
    override fun parse(any: Any): Post {
        val map = JsMapper.map(Post.serializer(), any.asDynamic()) as JsMap<Any?>
        return JsMapper.unmap(Post.serializer(), map)
    }
}

external open class DocumentSnapshot {
    open fun data(): DocumentData = definedExternally
    open val exists: Boolean = definedExternally
}

@Serializable
external open class DocumentData

//do to firebase functions deployment bug
//Error: Error occurred while parsing your function triggers. Please ensure that index.js only exports cloud functions.
//@UseExperimental(ImplicitReflectionSerializer::class)
//inline fun <reified T : Any> DocumentSnapshot.parse(): T = DynamicObjectParser().parse(this.data().asDynamic())