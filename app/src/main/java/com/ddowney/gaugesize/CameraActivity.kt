package com.ddowney.gaugesize

/**
 * Created by ddowney on 16/7/17.
 */

import android.app.Activity
import android.os.Bundle

class CameraActivity : Activity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        if (null == savedInstanceState) {
            fragmentManager.beginTransaction()
                    .replace(R.id.container, Cam2BasicFragment.newInstance())
                    .commit()
        }
    }
}