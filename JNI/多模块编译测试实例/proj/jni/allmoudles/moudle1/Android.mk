LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

MY_CPP_LIST := $(wildcard $(LOCAL_PATH)/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/1/*.cpp)
MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/1/2/*.cpp)
LOCAL_SRC_FILES := $(MY_CPP_LIST:$(LOCAL_PATH)/%=%)
	
#LOCAL_C_INCLUDES := $(LOCAL_PATH)/

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/
LOCAL_MODULE := moudle1
include $(BUILD_STATIC_LIBRARY)