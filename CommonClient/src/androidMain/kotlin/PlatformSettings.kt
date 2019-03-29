package by.cedon.skabs.multiplatform.storage

import android.content.Context
import android.preference.PreferenceManager
import by.cedon.skabs.multiplatform.model.storage.Settings

class PlatformSettings constructor(context: Context) : Settings {

    private val sharedPreferences = PreferenceManager.getDefaultSharedPreferences(context)

    override fun putBoolean(key: String, value: Boolean) {
        sharedPreferences.edit().putBoolean(key, value).apply()
    }

    override fun getBoolean(key: String, defaultValue: Boolean): Boolean =
        sharedPreferences.getBoolean(key, defaultValue)

    override fun putString(key: String, value: String) {
        sharedPreferences.edit().putString(key, value).apply()
    }

    override fun getString(key: String, defaultValue: String): String =
        sharedPreferences.getString(key, defaultValue)
}