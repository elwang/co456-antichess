#pragma once

#include "board.hpp"
#define SEARCH_DEPTH 5

class Player {
public:
    Player(bool white, ChessBoard* board);
    Move makeMove();
    double evaluateBoard(ChessBoard& board);
    double negmaxAlphaBeta(ChessBoard& board, int depth, double alpha, double beta, bool quiescent);
private:
    int num_moves;
    bool white;
    ChessBoard* board;
};
