//
// Created by kostia on 19.07.19.
//
#include "Main.h"
#include "iostream"

JNIEXPORT void JNICALL Java_Main_saySomething(JNIEnv *, jclass) {
    std::cout << "AA" << std::endl;
}