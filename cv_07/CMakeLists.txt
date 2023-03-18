# CMakeList.txt : CMake project for cv_7, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("cv_7")

# Add source to this project's executable.
add_executable (cv_7 "cv_7.cpp" "cv_7.h" "Body2d.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cv_7 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
