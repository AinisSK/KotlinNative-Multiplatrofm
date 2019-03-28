package by.cedon.skabs.multiplatform.ui

import android.os.Bundle
import android.support.v4.app.Fragment
import android.util.Log
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Toast
import by.cedon.skabs.multiplatform.R
import by.cedon.skabs.multiplatform.dependencies
import by.cedon.skabs.presentation.MainView
import kotlinx.android.synthetic.main.fragment_main.*

class MainFragment : Fragment(), MainView {

    private val presenter by lazy { dependencies(context!!).createMainPresenter() }

    override fun onCreateView(inflater: LayoutInflater, container: ViewGroup?, savedInstanceState: Bundle?) =
            layoutInflater.inflate(R.layout.fragment_main, container, false)

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        presenter.bind(this)

        proceed_btn.setOnClickListener {
            textView.text = "..."
            presenter.doJob()
        }
    }

    override fun onDestroy() {
        super.onDestroy()
        presenter.unbind()
    }

    override fun showError(error: Throwable) {
        Log.d("error", error.localizedMessage, error)
        Toast.makeText(context, error.localizedMessage, Toast.LENGTH_SHORT).show()
    }

    override fun onServerResponse(success: Boolean) {
        val text = if (success) "server processing" else "Server is busy, do locally"
        textView.text = text
    }

}