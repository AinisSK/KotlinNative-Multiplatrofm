external fun require(module:String):dynamic

fun main(args: Array<String>) {
    println("Hello JavaScript!")

    val express = require("express")
    val app = express()

    val common = require("common-all")
    val test = common.rubylich.ktmp.Test()
    test.test("Hi from kotlinJs")

    app.get("/") { _, res ->
        res.type("text/plain")
        res.send("I am a beautiful butterfly.")
    }

    app.listen(3000) {
        println("Listening on port 3000")
    }
}
