package by.cedon.skabs.multiplatform

import android.app.Application
import android.content.Context
import android.support.multidex.MultiDex
import org.kodein.di.Kodein
import org.kodein.di.generic.bind
import org.kodein.di.generic.provider
import rubylich.ktmp.Injector
import rubylich.ktmp.base.PostRepo

class MainApplication : Application() {

    val dependencyManager: DependencyManager by lazy { DependencyManager(this) }

    override fun onCreate() {
        super.onCreate()

        val kodein = Kodein {
            bind<PostRepo>() with provider { RepoPostImpl() }
        }

        Injector.appComponet = kodein

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