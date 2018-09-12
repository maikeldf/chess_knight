cmake_minimum_required(VERSION 3.7)

include_directories(
  ${CATCH_INCLUDE_DIR}
)

set(
  CHESS_TEST chess_test.cpp
)

set(
  SRC

  ${CMAKE_CURRENT_SOURCE_DIR}/../src/ChessKnigth.cpp
)

add_executable(
  chess_test
  main.cpp
  ${SRC}
  ${CHESS_TEST}
)

add_dependencies(chess_test catch)

enable_testing()