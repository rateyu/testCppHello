// The functions contained in this file are pretty dummy
// and are included only as a placeholder. Nevertheless,
// they *will* get included in the shared library if you
// don't remove them :)
//
// Obviously, you 'll have to write yourself the super-duper
// functions to include in the resulting library...
// Also, it's not necessary to write every function in this file.
// Feel free to add more files in this project. They will be
// included in the resulting library.

// A function adding two integers and returning the result

#include "jni_HelloJni.h"

//#define
//http://blog.sina.com.cn/s/blog_602f87700100kujh.html
//右击项目，选Build Options. Compiler Settings->#defines.可以写入，例如：LINUX_BCM. 相当于-DLINUX_BCM.
//或者在Other Options中写入：例如：-fpic -shared， -EL（little endien）等。

int i = 0;

JNIEXPORT jint JNICALL Java_jni_HelloJni_get(JNIEnv *env, jclass jc)
{
return i;
}

JNIEXPORT void JNICALL Java_jni_HelloJni_set(JNIEnv *env, jclass jc, jint j)
{
i = j;
}

