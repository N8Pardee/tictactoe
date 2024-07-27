// This class will determine if there is a valid match win
// by determining if there are 3 in a row
#pragma once
class ThreeInARow
{
     
    private:
   
        bool isValidWin;
        bool isAMatch;
        bool isATie;
        

    public:
       
       ThreeInARow(){};
        void validateInput(char* GAMEBOARD);
        bool isThreeInARow(char* GAMEBOARD);
        bool isAStalemate(char* GAMEBOARD);
        

};
