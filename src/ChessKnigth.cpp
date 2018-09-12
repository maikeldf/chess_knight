#include "ChessKnigth.h"

using namespace std;

namespace chess
{
  constexpr int off_sz = 8;
  constexpr int found_x = 3;
  constexpr int found_y = 2;

  static const int offsets[][2] = {
      {1, -2},
      {2, -1},
      {1, 2},
      {2, 1},
      {-1, 2},
      {-2, 1},
      {-1, -2},
      {-2, -1}
  };

  ChessKnigth::ChessKnigth()
  {
  }

  ChessKnigth::~ChessKnigth()
  {
  }

  bool ChessKnigth::IsValidPos(const vector<vector<int>> &v,
                 int x, int y, int x_, int y_) 
  {
    if (x < 0 || x > (v.size() - 1)) {
      return false;
    }

    if (y < 0 || y > (v[v.size() - 1].size() - 1)) {
      return false;
    }

    if (v[x][y] != 0) {
      return false;
    }

    if ((x == x_ && y == y_) && ( x!=0 || y!=0 ))
        return false;

    if((x == 0 && y == 0) && (x_ != 0 || y_ !=0))
        return false;

    return true;
  }

  bool ChessKnigth::Move(const vector<vector<int>> &v,
             int &x, int &y, int &count, int x_, int y_) 
  {
    if (x == found_x && y == found_y)
      return false;

    if (!IsValidPos(v, x, y, x_, y_))
      return false;

    for (int i = 0; i < 8; i++) {
      if (IsValidPos(v, x + offsets[i][0],
                    y + offsets[i][1], x_, y_)) {
        count++;
        x_ = x;
        y_ = y;
        x = x + offsets[i][0];
        y = y + offsets[i][1];
        if (!Move(v, x, y, count, x_, y_))
          return false;
      }
    }
    return true;
  }

  int ChessKnigth::MinReqMove(const vector<vector<int>> &v, int &x, int &y) 
  {
    int count(0);
    Move(v, x, y, count, x, y);
    return count;
  }
}
