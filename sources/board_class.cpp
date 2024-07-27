#include"board_class.h"
#include <iostream>

    

    void Board::printGrid()
    {
        //user spaces are spaced 4 places
        std::cout << GAMEBOARD[0][0] << "    " << GAMEBOARD[0][1] << "    " << GAMEBOARD[0][2] << '\n';
        std::cout << "____|____|____" << '\n';
        std::cout << GAMEBOARD[1][0] << "    " << GAMEBOARD[1][1] << "    " << GAMEBOARD[1][2]<< '\n';
        std::cout << "____|____|____" << '\n';
        std::cout << GAMEBOARD[2][0] << "    " << GAMEBOARD[2][1] << "    " << GAMEBOARD[2][2] << '\n';
        std::cout << "    |    |      " << '\n';
    }

    bool Board::isEmptyBoard()
    {
        for(int row = 0; row < 3; row++)
        {
            for(int column = 0; column < 3; column++)
            {
                if(GAMEBOARD[row][column] != ' ' )
                {
                    return false;
                }
             }
        }
    }