@file:Suppress("INTERFACE_WITH_SUPERCLASS", "OVERRIDING_FINAL_MEMBER", "RETURN_TYPE_MISMATCH_ON_OVERRIDE", "CONFLICTING_OVERLOADS", "EXTERNAL_DELEGATION", "NESTED_CLASS_IN_EXTERNAL_INTERFACE")

package rubylich.ktmp.lib


//suspend fun <T> Task<T>.await(): T {
//    if (isComplete) return if (isSuccessful) result!! else throw exception!!
//    return suspendCoroutine { c: Continuation<T> ->
//        addOnSuccessListener { c.resume(it) }
//        addOnFailureListener { c.resumeWithException(it) }
//    }
//}
//
//fun <T> Deferred<T>.asTask(): Task<T> {
//    val source = TaskCompletionSource<T>()
//    invokeOnCompletion {
//        try {
//            source.setResult(getCompleted())
//        } catch (e: Exception) {
//            source.setException(e)
//        }
//    }
//    return source.task
//}
//
//open class Task {
//    open fun isComplete(): Boolean = definedExternally
//
//    open fun isSuccessful(): Boolean = definedExternally
//
//    open fun isCanceled(): Boolean = definedExternally
//}
