package rubylich.ktmp

import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.Job
import kotlinx.coroutines.launch
import rubylich.ktmp.base.PostRepo
import kotlin.coroutines.CoroutineContext

fun callDoCalc() {
    Api().doCalc("FDLKBDLFKM")
}

class Api : CoroutineScope {

    private var job: Job = Job()

    override val coroutineContext: CoroutineContext
        get() = Dispatchers.Main + job


    fun doCalc(log: String) {
        println(log)

        val repoPost = PostRepo()

        var post = Post("zhopa_id_1", "content1")
        println("2")
        launch {
            println("3")
            repoPost.set(post.id, post)
            println("4")
            val p = repoPost.get("zhopa_id_1")
            println("5")
            if (p != null && p.id == post.id) {
                post = Post("zhopa_id_222", "content22")
                repoPost.set(post.id, post)
            }
        }
    }
}