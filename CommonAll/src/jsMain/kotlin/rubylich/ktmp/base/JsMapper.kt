package rubylich.ktmp.base

import kotlinx.serialization.*

class JsMapper : AbstractSerialFormat() {

    fun <T> map(strategy: SerializationStrategy<T>, obj: T): JsMap<Any> {
        val m = OutMapper()
        m.encode(strategy, obj)
        return m.map
    }

    fun <T> unmap(strategy: DeserializationStrategy<T>, map: JsMap<Any?>): T {
        val m = InMapper(map)
        return m.decode(strategy)
    }

    inner class OutMapper : NamedValueEncoder() {
        init {
            this.context = this@JsMapper.context
        }

        override fun beginCollection(
                desc: SerialDescriptor,
                collectionSize: Int,
                vararg typeParams: KSerializer<*>
        ): CompositeEncoder {
            encodeTaggedInt(nested("size"), collectionSize)
            return this
        }

        private var _map: JsMap<Any> = JsMap()

        val map: JsMap<Any>
            get() = _map

        override fun encodeTaggedValue(tag: String, value: Any) {
            _map[tag] = value
        }

        override fun encodeTaggedNull(tag: String) {
            _map[tag] = null
        }
    }

    inner class InMapper(val map: JsMap<Any?>) : NamedValueDecoder() {
        init {
            this.context = this@JsMapper.context
        }

        override fun decodeCollectionSize(desc: SerialDescriptor): Int {
            return decodeTaggedInt(nested("size"))
        }

        override fun decodeTaggedValue(tag: String): Any = map[tag]!!

        override fun decodeTaggedNotNullMark(tag: String): Boolean {
            return map.contains(tag) || // in case of complex object, its fields are
                    // prefixed with dot and there are no 'clean' tag with object name.
                    // Invalid tags can be handled later, in .decodeValue
                    map[tag] != null
        }
    }

    companion object {
        val default = JsMapper()

        fun <T> map(strategy: SerializationStrategy<T>, obj: T): JsMap<Any> = default.map(strategy, obj)

        fun <T> unmap(strategy: DeserializationStrategy<T>, map: JsMap<Any?>): T = default.unmap(strategy, map)

    }
}