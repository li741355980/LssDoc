LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := moudle0
LOCAL_SRC_FILES := ../moudle0.cpp

LOCAL_WHOLE_STATIC_LIBRARIES := moudle_
LOCAL_EXPORT_C_INCLUDES:=$(LOCAL_PATH)/..
include $(BUILD_STATIC_LIBRARY)
$(call import-module,android/support)
$(call import-module,moudle_/jni)