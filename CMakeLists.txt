cmake_minimum_required(VERSION 3.3)
project(cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES 01_a+b.cpp 02_clear_char.cpp 03_make_up_submit.cpp 04_replace_string.cpp 05_lost_in_the_city.cpp)
add_executable(cpp ${SOURCE_FILES})