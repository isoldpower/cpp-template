cmake_minimum_required(VERSION 3.16..3.24)
project (cpp_structure
        VERSION 0.1.0
        DESCRIPTION "C++ template project structure"
        LANGUAGES CXX)

if (NOT CMAKE_BUILD_TYPE)
    set (CMAKE_BUILD_TYPE Release CACHE STRING "Type of the build" FORCE)
endif()
message(STATUS "CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")

add_library(cxx_setup INTERFACE cpp_structure/tools)

target_compile_options(cxx_setup
        INTERFACE -Wall -Wpedantic -Wextra)
target_compile_features(cxx_setup
        INTERFACE cxx_std_17)
target_include_directories(cxx_setup
        INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(${PROJECT_NAME})
add_subdirectory(executables)