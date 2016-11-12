#ifndef __JNIUTILS__
#define __JNIUTILS__
#include<android/log.h>
#include"../JniGlobalDef.h"
#define LOG_TAG "JniHelper"
#define LOGE(...) ((void)__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, ##__VA_ARGS__))
#define LOGD(...)
#define LOGI(...)
void transJavaClassToJniClass(const char* src, char* to);
#endif