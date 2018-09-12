cmake_minimum_required(VERSION 3.7)

project(chess_knight)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ChessKnigth.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
