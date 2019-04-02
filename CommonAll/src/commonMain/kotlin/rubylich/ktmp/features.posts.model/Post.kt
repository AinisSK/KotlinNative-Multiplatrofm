package rubylich.ktmp

/**
 * Created by Alexander Zhigulich on 3/29/19.
 */

import kotlinx.serialization.Serializable

@Serializable
data class Post(var id: String = "", var content: String = "")