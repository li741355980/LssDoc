LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_LDLIBS := -llog 
LOCAL_MODULE := moudle2
LOCAL_SRC_FILES := ./moudle2/moudle2.cpp

LOCAL_WHOLE_STATIC_LIBRARIES :=moudle1 
include $(BUILD_SHARED_LIBRARY)
$(call import-add-path,$(LOCAL_PATH)/../others)
$(call import-module,android/support)
$(call import-module,moudle1)