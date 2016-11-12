#ifndef JNIHELPER_H
#define JNIHELPER_H
#include<jni.h>
#include<string>
typedef struct JniMethodInfo_
{
    JNIEnv *    env;
    jclass      classID;
    jmethodID   methodID;
} JniMethodInfo;

class JniHelper
{
public:
    static void setJavaVM(JavaVM *javaVM);
    static JavaVM* getJavaVM();
    static JNIEnv* getEnv();

    static bool setClassLoaderFrom(jobject contextInstance);
    static bool getStaticMethodInfo(JniMethodInfo &methodinfo,
                                    const char *className,
                                    const char *methodName,
                                    const char *paramCode);
    static bool getMethodInfo(JniMethodInfo &methodinfo,
                              const char *className,
                              const char *methodName,
                              const char *paramCode);
    static bool getMethodInfo(JniMethodInfo &methodinfo,
                              jobject jobj,
                              const char *methodName,
                              const char *paramCode);
    static bool getMethodInfoDefault(JniMethodInfo &methodinfo,
                              const char *className,
                              const char *methodName,
                              const char *paramCode);
    static jclass findClass(const char *className);
    static std::string jstring2string(jstring str);
    static jmethodID loadclassMethod_methodID;
    static jobject classloader;
private:
    static bool getMethodInfo_DefaultClassLoader(JniMethodInfo &methodinfo,
                                                 const char *className,
                                                 const char *methodName,
                                                 const char *paramCode);

    static JNIEnv* cacheEnv(JavaVM* jvm);


    static JavaVM* _psJavaVM;
};

#endif // JNIHELPER_H

