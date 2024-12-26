## The Flutter tooling requires that developers have CMake 3.10 or later
## installed. You should not increase this version, as doing so will cause
## the plugin to fail to compile for some customers of the plugin.

cmake_minimum_required(VERSION 3.10)

# Define the project name and set the language to C++
project(flutter_gsl LANGUAGES C)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Debug output
message(STATUS "CMAKE_SYSTEM_NAME: ${CMAKE_SYSTEM_NAME}")
message(STATUS "CMAKE_SYSTEM_PROCESSOR: ${CMAKE_SYSTEM_PROCESSOR}")

# Specify the paths to the locally installed GSL library and include directories for each platform
if (ANDROID)
    set(GSL_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/../gsl/${ANDROID_ABI}/include)
    set(GSL_LIBRARIES ${CMAKE_SOURCE_DIR}/../gsl/${ANDROID_ABI}/lib/libgsl.so ${CMAKE_SOURCE_DIR}/../gsl/${ANDROID_ABI}/lib/libgslcblas.so)
elseif (WIN32)
    set(GSL_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/../gsl/windows/include)
    set(GSL_LIBRARIES ${CMAKE_SOURCE_DIR}/../gsl/windows/lib/gsl.lib ${CMAKE_SOURCE_DIR}/../gsl/windows/lib/gslcblas.lib)
elseif (UNIX)
    set(GSL_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../gsl/x86_64/include)
    set(GSL_LIBRARIES ${CMAKE_CURRENT_SOURCE_DIR}/../gsl/x86_64/lib/libgsl.so ${CMAKE_CURRENT_SOURCE_DIR}/../gsl/x86_64/lib/libgslcblas.so)
endif()

# Debug output
message(STATUS "GSL_INCLUDE_DIR: ${GSL_INCLUDE_DIR}")
message(STATUS "GSL_LIBRARIES: ${GSL_LIBRARIES}")

# Check if the GSL include directory exists
if(NOT EXISTS ${GSL_INCLUDE_DIR})
    message(FATAL_ERROR "GSL include directory not found: ${GSL_INCLUDE_DIR}")
endif()

# Check if the GSL libraries exist
foreach(lib ${GSL_LIBRARIES})
    if(NOT EXISTS ${lib})
        message(FATAL_ERROR "GSL library not found: ${lib}")
    endif()
endforeach()

# Add the source files
add_library(flutter_gsl SHARED
    "flutter_gsl.c"  # Change this to .cpp if it's a C++ file
)

# Include GSL directories
target_include_directories(flutter_gsl PRIVATE ${GSL_INCLUDE_DIR})

# Link the GSL libraries
target_link_libraries(flutter_gsl PRIVATE ${GSL_LIBRARIES})

set_target_properties(flutter_gsl PROPERTIES
    PUBLIC_HEADER flutter_gsl.h
    OUTPUT_NAME "flutter_gsl"
)

target_compile_definitions(flutter_gsl PUBLIC DART_SHARED_LIB)