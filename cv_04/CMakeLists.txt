# CMakeList.txt : CMake project for cv_4, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("cv_4")

# Add source to this project's executable.
add_executable (cv_4 "cv_4.cpp" "cv_4.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cv_4 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
