#include <iostream>
#include "Board.h"
#include <math.h>
using namespace std;

Board::Board()
{
}

void Board::Initialize_Board()
{
    white_pieces[0] = new Piece(true,'R',1,1);
    white_pieces[1] = new Piece(true,'R',8,1);
    white_pieces[2] = new Piece(true,'N',2,1);
    white_pieces[3] = new Piece(true,'N',7,1);
    white_pieces[4] = new Piece(true,'B',3,1);
    white_pieces[5] = new Piece(true,'B',6,1);
    white_pieces[6] = new Piece(true,'Q',4,1);
    white_pieces[7] = new Piece(true,'K',5,1);
    white_pieces[8] = new Piece(true,'P',1,2);
    white_pieces[9] = new Piece(true,'P',2,2);
    white_pieces[10] = new Piece(true,'P',3,2);
    white_pieces[11] = new Piece(true,'P',4,2);
    white_pieces[12] = new Piece(true,'P',5,2);
    white_pieces[13] = new Piece(true,'P',6,2);
    white_pieces[14] = new Piece(true,'P',7,2);
    white_pieces[15] = new Piece(true,'P',8,2);

    black_pieces[0] = new Piece(true,'r',1,8);
    black_pieces[1] = new Piece(true,'r',8,8);
    black_pieces[2] = new Piece(true,'n',2,8);
    black_pieces[3] = new Piece(true,'n',7,8);
    black_pieces[4] = new Piece(true,'b',3,8);
    black_pieces[5] = new Piece(true,'b',6,8);
    black_pieces[6] = new Piece(true,'q',4,8);
    black_pieces[7] = new Piece(true,'k',5,8);
    black_pieces[8] = new Piece(true,'p',1,7);
    black_pieces[9] = new Piece(true,'p',2,7);
    black_pieces[10] = new Piece(true,'p',3,7);
    black_pieces[11] = new Piece(true,'p',4,7);
    black_pieces[12] = new Piece(true,'p',5,7);
    black_pieces[13] = new Piece(true,'p',6,7);
    black_pieces[14] = new Piece(true,'p',7,7);
    black_pieces[15] = new Piece(true,'p',8,7);
}

//Returns a pointer to a piece at a x,y coordinate on the board if it exists
Piece* Board::GetPieceAt(int x, int y)
{
    for(int i=0;i<16;i++)
    {
        if(this->white_pieces[i]->x_loc == x && this->white_pieces[i]->y_loc==y)
        {
            return this->white_pieces[i];
        }
        if(this->black_pieces[i]->x_loc == x && this->black_pieces[i]->y_loc==y)
        {
            return this->black_pieces[i];
        }
    }
    return 0;        
}

void Board::Display_Board()
{
    Piece* piece;

    for(int row=8;row>=1;row--)
    {
        cout << row << " ";
        for(int column=1;column<=8;column++)
        {
            if(piece=this->GetPieceAt(column,row))
            {
                cout << piece->piece_symbol << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    cout << "  a b c d e f g h" << endl;
}

bool Board::MovePiece(int x_current,int y_current, int x_dest, int y_dest)
{
    Piece* piece = GetPieceAt(x_current,y_current);
    int x_delta = x_dest - x_current;
    int y_delta = y_dest - y_current;

    //Check if the current square and destination square is the same
    if(x_current == x_dest && y_current == y_dest)
    {
        cout << "Illegal move: origin square and destination the same!" << endl;
    }
    //Check if legal bishop move
    if(piece->piece_symbol == 'b' || piece->piece_symbol == 'B')
    {
        //Must move along diagonal
        if(fabs(x_delta) == fabs(y_delta))
        {
            if(this->IsPieceBetween(x_current,y_current,x_delta,y_delta) == false)
            {

            }
        }
    }
   return true;
}

bool Board::IsPieceBetween(int x_current,int y_current, int x_delta,int y_delta)
{
    //Finds signs for the x/y direction of movement
    //x_step=-1:left, x_step=1:right, x_step=0: no x movement
    int x_step = x_delta/fabs(x_delta);
    int y_step = y_delta/fabs(y_delta);
    
    int larger_delta;
    if(x_delta>=y_delta)
    {
        larger_delta = x_delta; 
    }
    else
    {
        larger_delta = y_delta;
    }

    for(int steps=1;steps<fabs(larger_delta-2);steps++)
    {
        if(this->GetPieceAt(x_current+x_step*steps,y_current+y_step*steps))
        {
            cout << "There is a piece in the way!" << endl;
            return true;
        }
    }
    return false;
}

int Board::IsFriendlyPieceAt(Piece* piece,int x_dest,int y_dest)
{
    Piece* piece_holder;
    //Check if there is a piece there, if so, store the piece in piece_holder
    if(piece_holder = this->GetPieceAt(x_dest,y_dest))
    {
        //Compare colors of pieces
        if(piece->is_white == piece_holder->is_white)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    return 0;
}