package by.cedon.skabs.multiplatform.model.network

import by.cedon.skabs.multiplatform.model.log.PlatformLogger
import io.ktor.client.HttpClient
import io.ktor.client.call.call
import io.ktor.client.features.UserAgent
import io.ktor.client.features.logging.LogLevel
import io.ktor.client.features.logging.Logger
import io.ktor.client.features.logging.Logging
import io.ktor.client.features.logging.SIMPLE
import io.ktor.http.HttpMethod
import io.ktor.http.HttpStatusCode
import io.ktor.http.takeFrom
import kotlinx.io.core.use

class ServerApi(private val logger: PlatformLogger) {

//    val endPoint = "https://cedon-prod.vapor.cloud"
        val endPoint = "10.50.34.142:3000"

    private val client = HttpClient{
        expectSuccess = false

        install(ExpectSuccess)
        install(Logging) {
            logger = Logger.SIMPLE
            level = LogLevel.ALL
        }
        install(UserAgent) {
            agent = "kotlinlibs"
        }
    }

    suspend fun doJob(): Boolean {

        logger.log("[COMMON]", "Send request to server to proceed")

        client.call {
            method = HttpMethod.Get

            url {
                takeFrom(endPoint)
            }

        }.response.use {
            return it.status.value == HttpStatusCode.OK.value
        }
    }

}