cmake_minimum_required(VERSION 3.14)

project(MySharedLib LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_library(MySharedLib SHARED
  mysharedlib.cpp
  mysharedlib.h
)

target_compile_definitions(MySharedLib PRIVATE MYSHAREDLIB_LIBRARY)
