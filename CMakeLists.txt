cmake_minimum_required(VERSION 3.5.0)
project(string_manipulation)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${PROJECT_SOURCE_DIR})
add_executable(main.out src/main.cpp src/command/commands.cpp)


message("PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
message("====================")