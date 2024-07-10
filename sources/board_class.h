#pragma once

/*
    7/4 stopped here. Trying to figure out the redefinition errors. I am wondering if it has to do with the pragma once that I commented out. I am also trying to back up a bit and making sure that everything up to this point is compiling and running. This means some stuff will be commented out but do not delete them yet. 

    Also work on variable names for player class. I am getting confused by my own words now
*/
char GAMEBOARD[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

class Board
{
    friend class ThreeInARow;

    private:
        bool didWin = false;
        bool threeInARow = false;
        char *spaces ; //pointer to check array elements
        
        
    protected:
        short row = 0;
        short column = 0;      
        char (*gameboardPointer)[3] = GAMEBOARD;

    public:

        Board(){ };

        void printGrid();
        bool isEmptyBoard();
    
};
