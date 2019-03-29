package by.cedon.skabs.multiplatform.model

import by.cedon.skabs.multiplatform.model.log.PlatformLogger
import by.cedon.skabs.multiplatform.model.network.ServerApi
import by.cedon.skabs.multiplatform.model.MainModel

class MainModelImpl(logger: PlatformLogger) : MainModel {

    private val api = ServerApi(logger)

    override suspend fun doJob(): Boolean {
        return api.doJob()
    }
}