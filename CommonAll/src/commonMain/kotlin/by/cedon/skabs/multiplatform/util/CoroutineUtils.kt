package by.cedon.skabs.multiplatform.util

import kotlinx.coroutines.suspendCancellableCoroutine
import kotlin.coroutines.resume
import kotlin.coroutines.resumeWithException

interface Callback<T> {
    fun onComplete(result: T)
    fun onError(e: Exception)
}

suspend inline fun <T> awaitCallback(crossinline block: (Callback<T>) -> Unit): T {
    return suspendCancellableCoroutine { cont ->
        block(object : Callback<T> {
            override fun onComplete(result: T) = cont.resume(result)
            override fun onError(e: Exception) = cont.resumeWithException(e)
        })
    }
}

fun <A, T> toSuspendFunction(fn: (A, Callback<T>) -> Unit): suspend (A) -> T = { a: A ->
    awaitCallback { fn(a, it) }
}

fun <A, B, T> toSuspendFunction(fn: (A, B, Callback<T>) -> Unit): suspend (A, B) -> T = { a: A, b: B ->
    awaitCallback { fn(a, b, it) }
}