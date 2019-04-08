import by.cedon.skabs.multiplatform.Api
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.delay
import kotlinx.coroutines.launch

external fun require(module: String): dynamic

val common = require("CommonAll")

fun main(args: Array<String>) {
    println("Hello JavaScript!")

    val firebaseAdmin = require("firebase-admin")
    val serviceAccount = require("../../serviceAccountKey.json")

    //
    // Firebase admin initialisation
    val creds: dynamic = object {}
    creds["credential"] = firebaseAdmin.credential.cert(serviceAccount)
    firebaseAdmin.initializeApp(creds)
    //

    val api = Api()

    val express = require("express")
    val app = express()

    var isAvailable = true

    app.get("/") { _, res ->
        res.type("text/plain")
        res.send("I am a beautiful butterfly.")
        if (isAvailable) {
            isAvailable = false
        }
        GlobalScope.launch {
            api.doCalc("Executing from JS")
            delay(10000)
            isAvailable = true
        }
    }

    app.listen(3000) {
        println("Listening on port 3000")
    }
}
