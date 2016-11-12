LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := moudle1
LOCAL_SRC_FILES := moudle1.cpp

LOCAL_WHOLE_STATIC_LIBRARIES :=moudle0 
LOCAL_LDLIBS := -llog 
LOCAL_EXPORT_C_INCLUDES:=$(LOCAL_PATH)
include $(BUILD_STATIC_LIBRARY)

$(call import-add-path,$(LOCAL_PATH)/../moudle0)
$(call import-module,jni)
$(call import-module,android/support)