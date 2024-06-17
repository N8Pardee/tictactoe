// This class will determine if there is a valid match win
// by determining if there are 3 in a row
#pragma once
class threeInARow : public Board
{
    friend class Board;
  
    private:
   
        bool isValidWin;
        bool isAMatch;
        bool isATie;
        //created a pointer to parent class constructor to access protected gameboard member
        Board * gameboard = new Board();

    public:
       
       threeInARow(*gameboard){};
        void validateInput(*gameboard);
        bool isThreeInARow(*gameboard);
        bool isAStalemate();
        

};
