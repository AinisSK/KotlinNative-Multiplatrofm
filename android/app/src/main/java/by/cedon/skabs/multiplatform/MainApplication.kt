package by.cedon.skabs.multiplatform

import android.app.Application
import android.content.Context
import android.support.multidex.MultiDex

class MainApplication : Application() {

    val dependencyManager: DependencyManager by lazy { DependencyManager(this) }

    override fun onCreate() {
        super.onCreate()

        Thread.setDefaultUncaughtExceptionHandler { _, throwable ->
            println(throwable)
            throwable.printStackTrace()
            throwable?.cause?.printStackTrace()
        }
    }

    override fun attachBaseContext(base: Context?) {
        super.attachBaseContext(base)
        MultiDex.install(this)
    }

}