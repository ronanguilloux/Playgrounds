package com.example.helloandroid;

import android.app.Activity;
import android.os.Bundle;
//import android.widget.TextView; // +1 TxtView, the manual way

public class HelloAndroidActivity extends Activity {
    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        
        // Create an error and see the exception behavior
//        Object o = null;
//        o.toString();
        
        setContentView(R.layout.main);
        
//        // +1 TxtView, the manual way :
//        TextView tv = new TextView(this);
//        tv.setText("Hello, Android!");
//        setContentView(tv);
    }
}