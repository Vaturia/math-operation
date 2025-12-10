cmake_minimum_required(VERSION 3.31.6)

project (math_library)

set(SOURCE_LIB src/math_library.cpp)
add_library(math_library ${SOURCE_LIB})

target_include_directories(math_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}}include)