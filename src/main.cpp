#include <iostream>
#include <vector>
#include "ChessKnigth.h"

using namespace std;
using namespace chess;

int main() {
  int x(0);
  int y(0);
  
  const vector<vector<int>> c = {
      {0, 0, 0},
      {0, 0, 1},
      {1, 0, 0},
      {0, 0, 0}
  };

  cout << "count: " << ChessKnigth().MinReqMove(c, x, y) << endl;
  return 0;
}
