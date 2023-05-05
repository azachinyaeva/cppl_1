cmake_minimum_required (VERSION 3.8)

project ("hw_1")

add_executable (hw_1 "hw_1.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET hw_1 PROPERTY CXX_STANDARD 20)
endif()

