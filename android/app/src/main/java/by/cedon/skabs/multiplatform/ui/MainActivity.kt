package by.cedon.skabs.multiplatform.ui

import android.os.Bundle
import android.support.v7.app.AppCompatActivity
import by.cedon.skabs.multiplatform.R

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        supportFragmentManager
                .beginTransaction()
                .add(R.id.fragment_container, MainFragment(), "MainFragment")
                .commit()
    }
}
