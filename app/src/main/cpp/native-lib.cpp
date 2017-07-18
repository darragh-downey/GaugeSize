#include <jni.h>

#include "extclass.h"
#include "detect_reference_obj.h"

extern "C" {
JNIEXPORT jstring JNICALL
        Java_com_ddowney_gaugesize_MainActivity_stringFromJNI(JNIEnv *env,
                                                              jobject /* this */);

JNIEXPORT jint JNICALL
        Java_com_ddowney_gaugesize_MainActivity_intFromJNI(JNIEnv *env,
                                                           jobject /* this */);

JNIEXPORT jstring JNICALL
        Java_com_ddowney_gaugesize_MainActivity_stringFromOtherCall(JNIEnv *env,
                                                                    jobject /* this */);
};

JNIEXPORT jstring JNICALL
Java_com_ddowney_gaugesize_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "This string came from C++";
    return env->NewStringUTF(hello.c_str());
}

JNIEXPORT jint JNICALL
Java_com_ddowney_gaugesize_MainActivity_intFromJNI(
        JNIEnv *env,
        jobject /* this */){
    return 13;
}

JNIEXPORT jstring JNICALL
Java_com_ddowney_gaugesize_MainActivity_stringFromOtherCall(
        JNIEnv *env,
        jobject /* this */) {
    return env->NewStringUTF(extclass::extstring().c_str());
}

JNIEXPORT void JNICALL
Java_com_ddowney_gaugesize_Cam2BasicFragment_processImage(
        JNIEnv *env,
        jobject /* this */){
    const detect_reference_obj &d = detect_reference_obj();
    //return d.detect();
}