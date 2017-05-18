LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := JniLibName
LOCAL_SRC_FILES := jni_interface.c
LOCAL_SRC_FILES += ./local_logic_c/test.c

include $(BUILD_SHARED_LIBRARY)