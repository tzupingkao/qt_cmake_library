cmake_minimum_required(VERSION 3.5)

project(TestSharedLib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 头文件路径
set(INC_DIR /Users/tzuping/project/MySharedLib/MySharedLib)
# 库文件路径
set(LIB_DIR /Users/tzuping/project/MySharedLib/build-MySharedLib-Qt_6_3_2_for_macOS-Debug)

include_directories(${INC_DIR})
link_directories(${LIB_DIR})
link_libraries(MySharedLib)

add_executable(TestSharedLib main.cpp)

target_link_libraries(TestSharedLib MySharedLib)

install(TARGETS TestSharedLib
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
