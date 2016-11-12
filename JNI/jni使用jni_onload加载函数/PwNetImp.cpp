#include"./net/netsocketfactory.h"
#include"jni.h"
int registerNatives(JNIEnv * env);
JNIEXPORT jint JNI_OnLoad(JavaVM* vm,void *reserved){//成功一定要返回JNI_VERSION_1_4不然就会出问题，错误返回JNI_ERR
    LOGE("JNI_OnLoad__");
    JNIEnv * env=NULL;
    jint result =-1;
    if(vm->GetEnv((void**)(&env),JNI_VERSION_1_4)!=JNI_OK){
        return JNI_ERR;
    }
    return registerNatives(env);
}


jboolean buildUdpServer(JNIEnv* env,jclass clazz){
    LOGE("buildUdpServer.....");
}
jboolean buildUdpClient(JNIEnv* env,jclass clazz){
    LOGE("buildUdpClient.....");
}
jboolean sendtoserver(JNIEnv* env,jclass clazz,jstring str){
    const char* strUtf= env->GetStringUTFChars(str,NULL);
    LOGE("buildUdpClient.....%s",strUtf);
}

static JNINativeMethod methods[]={
    {"buildUdpServer","()Z",(void*)buildUdpServer},
    {"buildUdpClient","()Z",(void*)buildUdpClient},
    {"sendto","(Ljava/lang/String;)Z",(void*)sendtoserver}
};
int registerNatives(JNIEnv * env){
    LOGE("registerNatives");
    const char* classname="com/lssnetserver/NetNativeInterface";
    jclass clazz = env->FindClass(classname);
    if(clazz==NULL){
        LOGE("class:%s not found",classname);
        return JNI_ERR;
    }
    int regRes=env->RegisterNatives(clazz,methods,sizeof(methods)/sizeof(methods[0]));//成功的时候这个函数返回0
    LOGE("registerNatives over");
    if(regRes != 0){
         LOGE("registerNatives over 2");
        return JNI_ERR;
    }
    LOGE("registerNatives over 1");
    return JNI_VERSION_1_4;
}
