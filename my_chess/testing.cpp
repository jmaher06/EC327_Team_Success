#include "Piece.h"
#include "Board.h"
#include <iostream>
using namespace std;

int main()
{
    Board board;
    board.Initialize_Board();
    if(Piece* piece = board.GetPieceAt(1,3))
    {
    cout << piece->piece_symbol << endl;
    }
    board.Display_Board();

    if(board.IsPieceBetween(1,2,1,7)==false)
    {
        cout << "No piece between" << endl;
    }
}