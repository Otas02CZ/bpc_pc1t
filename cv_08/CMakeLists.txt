﻿# CMakeList.txt : CMake project for cv_8, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("cv_8")

# Add source to this project's executable.
add_executable (cv_8 "cv_8.cpp" "cv_8.h" "koci.h" "koci.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cv_8 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
