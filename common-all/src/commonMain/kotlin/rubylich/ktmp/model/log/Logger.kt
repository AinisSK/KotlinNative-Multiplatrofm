package by.cedon.skabs.multiplatform.model.log

interface PlatformLogger {

    fun logException(tag: String, text: String, exception: Throwable?) {

    }

    fun log(tag: String, text: String) {

    }
}