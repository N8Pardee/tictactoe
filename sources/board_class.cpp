#include"board_class.h"
#include<iostream>

    void Board::printGrid()
    {
        //user spaces are spaced 4 places
        std::cout << Board::gameBoard[0][0] << "    " << Board::gameBoard[0][1] << "    " << Board::gameBoard[0][2] << '\n';
        std::cout << "____|____|____" << '\n';
        std::cout << Board::gameBoard[1][0] << "    " << Board::gameBoard[1][1] << "    " << Board::gameBoard[1][2]<< '\n';
        std::cout << "____|____|____" << '\n';
        std::cout << Board::gameBoard[2][0] << "    " << Board::gameBoard[2][1] << "    " << Board::gameBoard[2][2] << '\n';
        std::cout << "    |    |      " << '\n';
    }

    bool Board::isEmptyBoard()
    {
        for(int row = 0; row < 3; row++)
        {
            for(int column = 0; column < 3; column++)
            {
                if(Board::gameBoard[row][column] != ' ' )
                {
                    return false;
                }
             }
        }
    }