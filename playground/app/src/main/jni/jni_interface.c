//
// Created by 梁少峰 on 2017/5/18.
//

#include <jni.h>
#include <string.h>
#include "com_example_youngwind_playground_NdkJniUtils.h"
#include "./local_logic_c/test.h"

JNIEXPORT jstring JNICALL Java_com_example_youngwind_playground_NdkJniUtils_generateKey
        (JNIEnv *env, jobject obj, jstring name) {

//声明局部量
    char key[129] = {0};
    memset(key, 0, sizeof(key));

    char temp[6] = {0};

//将java传入的name转换为本地utf的char*
    const char *pName = (*env)->GetStringUTFChars(env, name, NULL);

    if (NULL != pName) {
        strcpy(temp, pName);
        strcpy(key, generate(temp));

//java的name对象不需要再使用，通知虚拟机回收name
        (*env)->ReleaseStringUTFChars(env, name, pName);
    }

    return (*env)->NewStringUTF(env, key);
}