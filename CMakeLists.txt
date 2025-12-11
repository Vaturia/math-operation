cmake_minimum_required(VERSION 3.25.1)

project (math_library)

set(SOURCE_LIB src/math_library.cpp)
set(HEADER_LIB
    include/math_library.h
)
add_library(math_library ${SOURCE_LIB})

target_include_directories(math_library PUBLIC include)

find_program(CLANG_FORMAT "clang-format")

if(CLANG_FORMAT)

    set(ALL_LIB_FILES
        ${SOURCE_LIB}
        ${HEADER_LIB}
    )

    add_custom_target(format-lib
        COMMAND ${CLANG_FORMAT} -i ${ALL_LIB_FILES}
        COMMENT "Formattin lib files"
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    )

    add_custom_target(check-format-lib
        COMMAND ${CLANG_FORMAT} --dry-run --Werror ${ALL_LIB_FILES}
        COMMENT "Check format"
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    )
else()
    message(WARNING "clang-format not found.")
endif()