#include "board.h"

bool Board::MakeMove(int row, int column)
{
    //putting mark on board
    if(row<0||row>2||column<0||column>2)
        throw new OutOfBoard();
    int index=row*3+column;
    if(board[index]!=0)
        throw new BusyField();
    else
        board[index]= turn?1:2;
    turn=!turn;
    //checking if game is over
    if(board[0]==board[8]&&board[8]==board[4]&&board[4]!=0)
        return true;
    if(board[2]==board[6]&&board[6]==board[4]&&board[4]!=0)
        return true;
    bool foundedZero=false;
    for(int i=0;i<3;i++)
    {
        if(board[i]==board[i+3]&&board[i+3]==board[i+6]&&board[i+3]!=0)
            return true;
        if(board[i*3]==board[i*3+1]&&board[i*3+1]==board[i*3+2]&&board[i*3+1]!=0)
            return true;
        if(board[i]==0)
            foundedZero=true;
    }
    return !foundedZero;
}

int* Board::GetBoard()
{
    return board;
}