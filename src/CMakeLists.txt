## The Flutter tooling requires that developers have CMake 3.10 or later
## installed. You should not increase this version, as doing so will cause
## the plugin to fail to compile for some customers of the plugin.
#cmake_minimum_required(VERSION 3.10)
#
#project(flutter_gsl_library VERSION 0.0.1 LANGUAGES C)
#
#add_library(flutter_gsl SHARED
#  "flutter_gsl.c"
#)
#
#set_target_properties(flutter_gsl PROPERTIES
#  PUBLIC_HEADER flutter_gsl.h
#  OUTPUT_NAME "flutter_gsl"
#)
#
#target_compile_definitions(flutter_gsl PUBLIC DART_SHARED_LIB)
cmake_minimum_required(VERSION 3.10)

# Define the project name
project(flutter_gsl)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Specify the paths to the locally installed GSL library and include directories for each architecture
set(GSL_INCLUDE_DIR /home/darth-kartikey/StudioProjects/flutter_gsl/gsl/${ANDROID_ABI}/include)
set(GSL_LIBRARIES /home/darth-kartikey/StudioProjects/flutter_gsl/gsl/${ANDROID_ABI}/lib/libgsl.so /home/darth-kartikey/StudioProjects/flutter_gsl/gsl/${ANDROID_ABI}/lib/libgslcblas.so)

# Add the source files
add_library(flutter_gsl SHARED "flutter_gsl.c")

# Include GSL directories
target_include_directories(flutter_gsl PRIVATE ${GSL_INCLUDE_DIR})

# Link the GSL libraries
target_link_libraries(flutter_gsl ${GSL_LIBRARIES})

set_target_properties(flutter_gsl PROPERTIES
        PUBLIC_HEADER flutter_gsl.h
        OUTPUT_NAME "flutter_gsl"
)

target_compile_definitions(flutter_gsl PUBLIC DART_SHARED_LIB)
