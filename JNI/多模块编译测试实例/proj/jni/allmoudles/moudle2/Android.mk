LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

MY_CPP_LIST := $(wildcard $(LOCAL_PATH)/*.cpp)
LOCAL_SRC_FILES := $(MY_CPP_LIST:$(LOCAL_PATH)/%=%)
	
#LOCAL_C_INCLUDES := $(LOCAL_PATH)/
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/
	
LOCAL_MODULE := moudle2
include $(BUILD_STATIC_LIBRARY)