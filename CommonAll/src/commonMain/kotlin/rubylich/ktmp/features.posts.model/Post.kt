package rubylich.ktmp

/**
 * Created by Alexander Zhigulich on 3/29/19.
 */

import kotlinx.serialization.Serializable

@Serializable
data class Post(val id: String = "", val content: String = "")