cmake_minimum_required(VERSION 3.12)
set( CMAKE_EXPORT_COMPILE_COMMANDS ON )

project(raytracer VERSION 1.0 DESCRIPTION "Just another C++ raytracer." LANGUAGES CXX)

add_library(vec3lib STATIC src/vec3.cpp include/vec3/vec3.hpp)
target_include_directories(vec3lib PUBLIC include/vec3)
target_compile_features(vec3lib PUBLIC cxx_std_11)

add_library(colorlib STATIC src/color.cpp include/color/color.hpp)
target_include_directories(colorlib PUBLIC include/color include/vec3)
target_compile_features(colorlib PUBLIC cxx_std_11)

add_library(raylib STATIC src/ray.cpp include/ray/ray.hpp)
target_include_directories(raylib PUBLIC include/ray include/vec3)
target_compile_features(raylib PUBLIC cxx_std_11)

add_executable(raytracer apps/raytracer.cpp)
target_link_libraries(raytracer PUBLIC vec3lib colorlib raylib)
