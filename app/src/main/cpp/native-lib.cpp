#include <jni.h>

#include "extclass.h"
#include "detect_reference_obj.h"

extern "C" {

JNIEXPORT void JNICALL
        Java_com_ddowney_gaugesize_Cam2BasicFragment_processImage(JNIEnv *env, jobject);
};

JNIEXPORT void JNICALL
Java_com_ddowney_gaugesize_Cam2BasicFragment_processImage(
        JNIEnv *env,
        jobject /* this */){
    const detect_reference_obj &d = detect_reference_obj();
    //return d.detect();
}