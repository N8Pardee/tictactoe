#pragma once
class Board
{
    private:
        bool didWin = false;
        bool threeInARow = false;
      
    protected:
        short row = 0;
        short column = 0;
        char game_board[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    public:

        Board()
        {
            gameboard = this->game_board;
        };

        void printGrid();
        bool isEmptyBoard();
    
};
