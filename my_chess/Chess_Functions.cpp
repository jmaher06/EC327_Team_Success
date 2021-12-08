#include "Chess_Functions.h"
#include "Piece.h"
#include <iostream>
using namespace std;

//Creates pointers to pieces and stores them in white and black arrays
void InitializeBoard()
{
    Piece* white_rook_1 = new Piece(true,'R',1,1);
    Piece* white_rook_2 = new Piece(true,'R',8,1);
    Piece* white_knight_1 = new Piece(true,'N',2,1);
    Piece* white_knight_2 = new Piece(true,'N',7,1);
    Piece* white_bishop_1 = new Piece(true,'B',3,1);
    Piece* white_bishop_2 = new Piece(true,'B',6,1);
    Piece* white_queen = new Piece(true,'Q',4,1);
    Piece* white_king = new Piece(true,'K',5,1);
    Piece* white_pawn_1 = new Piece(true,'P',1,2);
    Piece* white_pawn_2 = new Piece(true,'P',2,2);
    Piece* white_pawn_3 = new Piece(true,'P',3,2);
    Piece* white_pawn_4 = new Piece(true,'P',4,2);
    Piece* white_pawn_5 = new Piece(true,'P',5,2);
    Piece* white_pawn_6 = new Piece(true,'P',6,2);
    Piece* white_pawn_7 = new Piece(true,'P',7,2);
    Piece* white_pawn_8 = new Piece(true,'P',8,2);

    Piece* black_rook_1 = new Piece(true,'r',1,1);
    Piece* black_rook_2 = new Piece(true,'r',8,1);
    Piece* black_knight_1 = new Piece(true,'n',2,1);
    Piece* black_knight_2 = new Piece(true,'n',7,1);
    Piece* black_bishop_1 = new Piece(true,'b',3,1);
    Piece* black_bishop_2 = new Piece(true,'b',6,1);
    Piece* black_queen = new Piece(true,'q',4,1);
    Piece* black_king = new Piece(true,'k',5,1);
    Piece* black_pawn_1 = new Piece(true,'p',1,2);
    Piece* black_pawn_2 = new Piece(true,'p',2,2);
    Piece* black_pawn_3 = new Piece(true,'p',3,2);
    Piece* black_pawn_4 = new Piece(true,'p',4,2);
    Piece* black_pawn_5 = new Piece(true,'p',5,2);
    Piece* black_pawn_6 = new Piece(true,'p',6,2);
    Piece* black_pawn_7 = new Piece(true,'p',7,2);
    Piece* black_pawn_8 = new Piece(true,'p',8,2);

    Piece* white_pieces = {white_rook_1,white_rook_2,white_knight_1,white_knight_2,white_bishop_1,white_bishop_2,white_queen,white_king, white_pawn_1,white_pawn_2,white_pawn_3,white_pawn_4,white_pawn_5,white_pawn_6,white_pawn_7,white_pawn_8};

    Piece* black_pieces[16] = {black_rook_1,black_rook_2,black_knight_1,black_knight_2,black_bishop_1,black_bishop_2,black_queen,black_king, black_pawn_1,black_pawn_2,black_pawn_3,black_pawn_4,black_pawn_5,black_pawn_6,black_pawn_7,white_pawn_8};
}

//Returns a pointer to a piece at a x,y coordinate on the board
Piece* GetPieceAt(int x, int y)
{
    for(int i=0;i<16;i++)
    {
        if(white_pieces[i].x_loc == x && white_pieces[i.y_loc])
        {
            return white_pieces[i]
        }
        if(black_pieces[i].x_loc == x && black_pieces[i.y_loc])
        {
            return black_pieces[i]
    }
    return 0;
}