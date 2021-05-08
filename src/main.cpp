#include <iostream>
#include "board.h"
#include <string>

void display(int* board)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            std::cout<< board[i*3+j]<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

int main()
{
    bool isGameFinished=false;
    Board board;
    int x,y;
    bool properInput;
    while(!isGameFinished)
    {
        properInput=false;
        display(board.GetBoard());
        while(!properInput)
        {
            try{
                std::cin>>x>>y;
                board.MakeMove(x,y);
                properInput=true;
            }catch (std::exception& e){
                std::cerr<<e.what();
            };
        }
    }
    return 0;
}