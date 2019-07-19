cmake_minimum_required(VERSION 3.14)
project(CppLib C CXX)

set(CMAKE_CXX_STANDARD 17)

add_library(CppLib SHARED
        jawt_md.h
        jni_md.h
        jni.h
        jni_md.h
        jvmti.h
        jawt.h
        Main.h Main.cpp)