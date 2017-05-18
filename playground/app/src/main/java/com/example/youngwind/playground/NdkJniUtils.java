package com.example.youngwind.playground;

import android.provider.Settings;

/**
 * Created by youngwind on 2017/5/18.
 */

public class NdkJniUtils {
    public  native String generateKey(String name);  // 声明 native 方法

    static {
        System.loadLibrary("JniLibName");
    }
}
