cmake_minimum_required(VERSION 3.28.3)
project(Paradox VERSION 1.0 LANGUAGES CXX) 
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

 
file(GLOB COURSE_SOURCES "src/courses/*.cpp")
add_executable(Paradox src/main.cpp src/utils.cpp ${COURSE_SOURCES})
target_include_directories(Paradox PRIVATE include)