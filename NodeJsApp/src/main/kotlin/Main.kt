import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.delay
import kotlinx.coroutines.launch

external fun require(module: String): dynamic

val common = require("CommonAll")

fun main(args: Array<String>) {
    println("Hello JavaScript!")

    var firebaseAdmin = require("firebase-admin")
    var serviceAccount = require("../../serviceAccountKey.json")

    js("firebaseAdmin.initializeApp({\n" +
            "        credential: firebaseAdmin.credential.cert(serviceAccount)\n" +
            "    })")

    var db = firebaseAdmin.firestore()

    val express = require("express")
    val app = express()

    var isAvailable = true


    app.get("/") { _, res ->
        res.type("text/plain")
        res.send("I am a beautiful butterfly.")
        if (isAvailable) {
            common.rubylich.ktmp.callDoCalc()
            isAvailable = false
        }
        GlobalScope.launch {
            delay(10000)
            isAvailable = true
        }
    }

    app.listen(3000) {
        println("Listening on port 3000")
    }
}


//const server = http.createServer((req, res) => {

//    var docRef = db.collection('users').doc('alovelace');
//
//    var setAda = docRef.set({
//      first: 'Ada',
//      last: 'Lovelace',
//      born: 1815
//    });


