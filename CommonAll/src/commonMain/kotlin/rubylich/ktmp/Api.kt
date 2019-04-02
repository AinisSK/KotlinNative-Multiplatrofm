package rubylich.ktmp

import rubylich.ktmp.base.PostRepo

suspend fun callDoCalc() {
    Api().doCalc("FDLKBDLFKM")
}

class Api {

    suspend fun doCalc(log: String) {
        println(log)

        val repoPost = PostRepo()

        println("1")

        val post = Post("zhopa_id_1", "content1")
        println("2")

        println("3")
        repoPost.set(post.id, post)
        println("4")
        val p = repoPost.get("zhopa_id_1")
        if (p != null && p.id == post.id) {
            val post2 = Post("zhopa_id_222", "content22")
            repoPost.set(post2.id, post2)
        }
    }
}