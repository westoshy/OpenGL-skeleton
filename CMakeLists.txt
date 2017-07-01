cmake_minimum_required(VERSION 3.7)
project(OpenGL)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(OpenGL ${SOURCE_FILES})
target_link_libraries(OpenGL "-framework GLUT")
target_link_libraries(OpenGL "-framework OpenGL")