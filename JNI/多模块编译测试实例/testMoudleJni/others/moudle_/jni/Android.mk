LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := moudle_
LOCAL_SRC_FILES := ../moudle_.cpp

LOCAL_EXPORT_C_INCLUDES:=$(LOCAL_PATH)/..
include $(BUILD_STATIC_LIBRARY)
$(call import-module,android/support)