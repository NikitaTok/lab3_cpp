cmake_minimum_required(VERSION 3.10)

project(derivative_test)

set(CMAKE_CXX_STANDARD 17)

# Включите Catch2
find_package(Catch2 REQUIRED)

add_executable(derivative_test derivative.cpp)
target_link_libraries(derivative_test Catch2::Catch2)
