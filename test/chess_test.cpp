#include <catch.hpp>
#include "ChessKnigth.h"
using namespace chess;

TEST_CASE( "Check minimum required moves" ){
  int x(0);
  int y(0);
  
  const vector<vector<int>> c = {
      {0, 0, 0},
      {0, 0, 1},
      {1, 0, 0},
      {0, 0, 0}
  };

  REQUIRE( ChessKnigth().MinReqMove(c, x, y) == 7 );
}