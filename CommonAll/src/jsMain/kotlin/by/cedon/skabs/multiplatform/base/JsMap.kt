package by.cedon.skabs.multiplatform.base

class JsMap<V> {
    @JsName("map")
    private val map: dynamic = js("({})")

    operator fun get(key: String): V = map[key] as V

    operator fun set(key: String, value: V?) {
        map[key] = value
    }

    @Suppress("UNUSED_PARAMETER", "UnsafeCastFromDynamic")
    fun contains(key: String): Boolean = js("key in this.map")

    fun toJs(): dynamic = map
}