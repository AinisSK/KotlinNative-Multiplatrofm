package rubylich.ktmp.features.posts

import com.firebase.firestore.FIRDocumentSnapshot
import kotlinx.serialization.ImplicitReflectionSerializer
import kotlinx.serialization.Mapper.Companion.unmap
import rubylich.ktmp.Post
import rubylich.ktmp.base.IBaseParser

/**
 * Created by Alexander Zhigulich on 4/1/19.
 */

actual class PostParser actual constructor() : IBaseParser<Post> {

    override fun parse(any: Any): Post {
        return (any as FIRDocumentSnapshot).parse()
    }
}

@UseExperimental(ImplicitReflectionSerializer::class)
inline fun <reified T: Any> FIRDocumentSnapshot.parse(): T = unmap(this.data() as Map<String, Any>)