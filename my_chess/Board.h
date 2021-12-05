#ifndef BOARD_H
#define BOARD_H
#include "Piece.h"

//Declaration of board class, which is represents the board using a 2d array of piece pointers

class Board
{
    public:

    //Default constructor
    Board();

    //Bool representing who's turn it is
    bool white_turn;

    //Sets up beginning position of game board
    void Initialize_Board();

    //Displays the current game position
    void Display_Board();

    //Gets pointer to a pieces in the position square
    //Returns a pointer to a piece at a x,y coordinate on the board
    Piece* GetPieceAt(int, int);


    //Moves piece's location
    //Returns true if the inputed move is legal
    bool MovePiece(int,int,int,int);

    //Checks if there is a piece in between origin square and destination square
    //Not including the destination square
    bool IsPieceBetween(int,int,int,int);

    //Checks if there is a piece at the location square and if it is on the same team as the Piece*
    //Returns 0 for no piece there, -1 for enemy piece, and +1 for friendly piece
    int IsFriendlyPieceAt(Piece*,int,int);

    //Arrays containing the pointers to pieces
    Piece* white_pieces[16];
    Piece* black_pieces[16];


};

#endif