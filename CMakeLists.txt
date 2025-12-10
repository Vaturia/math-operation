cmake_minimum_required(VERSION 3.25.1)

project (math_library)

set(SOURCE_LIB src/math_library.cpp)
add_library(math_library ${SOURCE_LIB})

target_include_directories(math_library PUBLIC include)