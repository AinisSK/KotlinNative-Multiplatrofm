external fun require(module: String): dynamic

val common = require("common-all")

fun main(args: Array<String>) {
    println("Hello JavaScript!")

    val express = require("express")
    val app = express()

    common.rubylich.ktmp.testMethod("Hi from kotlinJs")

    app.get("/") { _, res ->
        res.type("text/plain")
        res.send("I am a beautiful butterfly.")
    }

    app.listen(3000) {
        println("Listening on port 3000")
    }
}

