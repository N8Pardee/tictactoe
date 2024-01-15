
class Board
{
    private:
        bool didWin = false;
        bool threeInARow = false;
      
    protected:
        short row = 0;
        short column = 0;
        char gameBoard[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    public:

        Board(){};
        void printGrid(){};
        bool isEmptyBoard(){};
    
};
