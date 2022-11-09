cmake_minimum_required(VERSION 3.5)

project(statistics)

add_executable(statistics
    src/main.cpp
    )

target_include_directories(statistics PRIVATE include)


if (CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR
    CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(calc PRIVATE 
        -g
        -Wall
        -Wextra
        -Werror
        -pedantic
    )
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(calc PRIVATE
        /EHsc
        /W4
        /WX
    )
endif()

add_executable(statistics statistics.cpp)
set_target_properties(statistics PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

