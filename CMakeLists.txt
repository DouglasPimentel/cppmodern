cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(cppmodern LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# defines targets and sources
add_subdirectory(src)
