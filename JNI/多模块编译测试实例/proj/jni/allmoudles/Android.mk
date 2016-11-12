LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

#LOCAL_STATIC_LIBRARIES := moudle3 moudle1 moudle2 
#LOCAL_MODULE := moudle0
#include $(BUILD_SHARED_LIBRARY)

include $(call all-makefiles-under,$(LOCAL_PATH))
