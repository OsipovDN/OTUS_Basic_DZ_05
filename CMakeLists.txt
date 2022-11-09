cmake_minimum_required(VERSION 3.5)

project(statistics)

add_executable(statistics
    src/main.cpp
    src/Max.cpp
    src/Min.cpp
    src/Mean.cpp
    src/Std.cpp
    src/Pct90.cpp
    )

target_include_directories(statistics PRIVATE include)


if (CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR
    CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(statistics PRIVATE 
        -g
        -Wall
        -Wextra
        -Werror
        -pedantic
    )
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(statistics PRIVATE
        /EHsc
        /W4
        /WX
    )
endif()


