package by.cedon.skabs.multiplatform.model.storage

interface Settings {
    fun putBoolean(key: String, value: Boolean)
    fun getBoolean(key: String, defaultValue: Boolean): Boolean
    fun putString(key: String, value: String)
    fun getString(key: String, defaultValue: String = ""): String
}