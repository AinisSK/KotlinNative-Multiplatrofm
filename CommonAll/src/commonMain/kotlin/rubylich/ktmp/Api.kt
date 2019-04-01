package rubylich.ktmp

import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.Job
import kotlinx.coroutines.launch
import rubylich.ktmp.base.BaseRepo
import rubylich.ktmp.base.PostRepo
import kotlin.coroutines.CoroutineContext

class Api: CoroutineScope {

    private var job: Job = Job()

    override val coroutineContext: CoroutineContext
        get() = Dispatchers.Main + job


    fun doCalc(log: String) {
        println(log)

        val repoPost = PostRepo()

        val post = Post("zhopa_id_1", "content1")
        launch {
            repoPost.set(post.id, post)
        }
    }
}