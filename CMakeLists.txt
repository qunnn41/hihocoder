cmake_minimum_required(VERSION 3.3)
project(cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES 01_a+b.cpp 02_clear_char.cpp 03_make_up_submit.cpp 04_replace_string.cpp 05_lost_in_the_city.cpp 06_2_29.cpp 07_longest_plalindrome.cpp 08_magic_box.cpp 09_bipartite_graph_judgement.cpp sort.cpp IQContest.cpp test.cpp bst_travel.cpp "Farthest point.cpp" "Total Highway Distance.cpp" )
add_executable(cpp ${SOURCE_FILES})