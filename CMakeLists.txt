cmake_minimum_required(VERSION 3.30.3 FATAL_ERROR)

project(DivineEngine)

add_executable(DivineEngine src/main.cpp)

add_subdirectory(external/glfw)
target_link_libraries(DivineEngine glfw)

find_package(OpenGL REQUIRED)
target_link_libraries(DivineEngine OpenGL::GL)
