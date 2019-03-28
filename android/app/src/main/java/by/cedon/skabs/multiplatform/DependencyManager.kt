package by.cedon.skabs.multiplatform

import android.app.Application
import android.content.Context
import android.util.Log
import by.cedon.skabs.multiplatform.model.MainModel
import by.cedon.skabs.multiplatform.model.MainModelImpl
import by.cedon.skabs.multiplatform.model.log.PlatformLogger
import by.cedon.skabs.multiplatform.presentation.MainPresenter
import kotlinx.coroutines.Dispatchers

class DependencyManager(private val application: Application) {

    private val mainModel: MainModel by lazy {
        MainModelImpl(logger)
    }

    private val coroutineContext by lazy { Dispatchers.Main }

    private val logger: PlatformLogger by lazy {
        object : PlatformLogger {
            override fun logException(tag: String, text: String, exception: Throwable?) {
                Log.e(tag, text, exception)
            }

            override fun log(tag: String, text: String) {
                Log.d(tag, text)
            }
        }
    }

    fun createMainPresenter() = MainPresenter(coroutineContext, mainModel)
}

fun dependencies(context: Context): DependencyManager {
    val app = context.applicationContext
    val kotlinConfApplication = app as MainApplication
    return kotlinConfApplication.dependencyManager
}