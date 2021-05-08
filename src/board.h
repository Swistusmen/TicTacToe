#pragma once
#ifndef BOARD
#define BOARD
#endif

#include <exception>

class OutOfBoard:public std::exception{
    public:
    virtual const char* what() const noexcept {
       return "OutOfBoard";
    }
};

class BusyField: public std::exception{
    public:
    virtual const char* what() const noexcept {
       return "Busy field";
    }
};

class Board{
public:
    Board()=default;
    bool MakeMove(int row,int column);
    int* GetBoard();
private:
    int board[9]{0};
    float turn=false;
};