cmake_minimum_required(VERSION 3.7)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

add_subdirectory(catch)
add_subdirectory(src)
add_subdirectory(test)