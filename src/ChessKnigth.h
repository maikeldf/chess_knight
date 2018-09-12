#ifndef CHESSKNIGTH_H  
#define CHESSKNIGTH_H

#include <vector>

using namespace std;

namespace chess
{
  class ChessKnigth
  {
    public:
      ChessKnigth();
      ~ChessKnigth();

      int MinReqMove(
        const vector<vector<int>> &v, int &x, int &y);

    private:    
      bool IsValidPos(const vector<vector<int>> &v,
                     int x, int y, int x_, int y_);

      bool Move(const vector<vector<int>> &v,
                 int &x, int &y, int &count, int x_, int y_);
  };
};

#endif // CHESSKNIGTH_H