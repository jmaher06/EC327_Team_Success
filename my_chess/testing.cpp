#include "Piece.h"
#include "Board.h"
#include <iostream>
using namespace std;

int main()
{
    Board board;
    board.Initialize_Board();
    
    board.MovePiece(2,1,3,3);
    board.Display_Board();

    board.MovePiece(3,3,2,5);
    board.Display_Board();

    board.MovePiece(2,5,4,6);
    board.Display_Board();

    board.MovePiece(4,6,6,7);
    board.Display_Board();

    board.MovePiece(8,7,8,5);
    board.Display_Board();

    return 0;
}