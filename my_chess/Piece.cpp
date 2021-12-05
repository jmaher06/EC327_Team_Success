#include <iostream>
#include "Piece.h"
using namespace std;

Piece::Piece()
{
}

//Constructor definition
Piece::Piece(bool is_white,char piece_symbol, int x_loc, int y_loc)
{
    this->is_white = is_white;
    this->piece_symbol = piece_symbol;
    this->x_loc = x_loc;
    this->y_loc = y_loc;
    this->has_moved = false;
}

