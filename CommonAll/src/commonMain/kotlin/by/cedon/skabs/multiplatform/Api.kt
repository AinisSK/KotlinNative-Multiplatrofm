package by.cedon.skabs.multiplatform

import by.cedon.skabs.multiplatform.base.PostRepo
import by.cedon.skabs.multiplatform.posts.model.Post
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.Job
import kotlinx.coroutines.launch
import kotlin.coroutines.CoroutineContext
import kotlin.js.JsName

class Api {

    @JsName("doCalc")
    suspend fun doCalc(log: String) {
        println(log)

        val marker = "[Api][doCalc]:"

        val repoPost = PostRepo()

        println("$marker Create bunch 1-10")

        for (i in 1..10) {
            val id = "id-$i"
            repoPost.set(id, Post(id, "$log-$i"))
        }

        println("$marker Get All!")

        val all = repoPost.getAll()
        all.forEach {
            println(it)
        }

        println("$marker Create bunch 10-20")

        for (i in 10..20) {
            val id = "id-$i"
            repoPost.set(id, Post(id, "$log-$i"))
        }

        println("$marker All Done!")
    }
}

class ApiCoroutine : CoroutineScope {

    private var job: Job = Job()

    override val coroutineContext: CoroutineContext
        get() = Dispatchers.Main + job

    fun doCalc(log: String) {

        launch {
            Api().doCalc(log)
        }
    }
}