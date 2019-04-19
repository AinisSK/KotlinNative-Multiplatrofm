package by.cedon.skabs.multiplatform.presentation

import by.cedon.skabs.multiplatform.model.MainModel
import by.cedon.skabs.presentation.MainView
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import kotlin.coroutines.CoroutineContext

class MainPresenter(
    private val uiContext: CoroutineContext,
    private val mainModel: MainModel
) {

    private var view: MainView? = null

    fun bind(view: MainView){
        this.view = view
    }

    fun unbind() {
        view = null
    }

    fun doJob() {
        GlobalScope.launch(uiContext) {
            try {
                val result = mainModel.doJob()
                view?.onServerResponse(result)

            } catch (e: Exception){
                view?.showError(e)
            }
        }
    }
}