package rubylich.ktmp

import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.Job
import kotlinx.coroutines.launch
import rubylich.ktmp.base.PostRepo
import kotlin.coroutines.CoroutineContext

fun callDoCalc() {

    ApiCoroutine().doCalc("FDLKBDLFKM")
}

class Api {

    suspend fun doCalc(log: String) {
        println(log)

        val repoPost = PostRepo()

        println("1")
        var post = Post("zhopa_id_1", "content1")
        repoPost.set(post.id, post)
        println("2")
        post = Post("zhopa_id_333", "content1")
        repoPost.set(post.id, post)
        println("3")
        val p = repoPost.get("zhopa_id_1")
        if (p != null && p.id == post.id) {
            println("4")
            post = Post("zhopa_id_222", "content22")
            repoPost.set(post.id, post)
        }
    }
}

class ApiCoroutine: CoroutineScope {

    private var job: Job = Job()

    override val coroutineContext: CoroutineContext
        get() = Dispatchers.Main + job

    fun doCalc(log: String) {

        launch {
            Api().doCalc(log)
        }
    }
}