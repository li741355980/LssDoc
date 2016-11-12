LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_CPPFLAGS +=-frtti -std=c++11
LOCAL_LDLIBS := -llog 

LOCAL_MODULE := jnihelper
LOCAL_SRC_FILES := ../JniField.cpp\
	../JniMethod.cpp\
	../JniObject.cpp\
	../utils/jniutils.cpp\
	../JniHelper.cpp

LOCAL_EXPORT_C_INCLUDES += $(LOCAL_PATH)/..

include $(BUILD_STATIC_LIBRARY)
$(call import-module,android/support)