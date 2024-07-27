/*Player class for tic tac toe board game. This class will contain functions for determining if the player selected x or o,
    determining when it is the next players turn, and tracking the score.
*/
#pragma once
#include<stdio.h>
#include <iostream>
#include "board_class.h"

class Player: public Board
{
    private:
        char ;
        char player;
        int score = 0;
        bool next_turn;
        int player_Position[3][3];

    public:

        Player(){};
        void obtainPlayer1Input();
        void determineStartingPlayer();
        void playerTurn(){};
        //char getPlayer(){};
        //void setPlayer(char player){};
       // int trackScore(){};
};
