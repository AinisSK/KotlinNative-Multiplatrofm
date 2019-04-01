package rubylich.ktmp.features.posts

import rubylich.ktmp.Post
import rubylich.ktmp.base.BaseRepo
import rubylich.ktmp.base.IBaseParser
import rubylich.ktmp.base.IBaseRepo

/**
 * Created by Alexander Zhigulich on 4/1/19.
 */
const val REF_POSTS = "posts"

interface IPostBaseRepo : IBaseRepo<Post>

class PostsRepo : BaseRepo<Post>(REF_POSTS, PostParser()), IPostBaseRepo

expect class PostParser() : IBaseParser<Post>