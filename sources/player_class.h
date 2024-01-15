/*Player class for tic tac toe board game. This class will contain functions for determining if the player selected x or o,
    determining when it is the next players turn, and tracking the score.
*/
#pragma once
#include<stdio.h>
#include <iostream>
#include "board_class.h"

class Player: public Board
{
    Player();
    private:
        char player1Choice;
        char player1;
        char player2;
        int score = 0;
        bool nextTurn;
        int playerPosition[3][3];

    public:

        void obtainPlayer1Input();
        void determineStartingPlayer();
        void playerTurn();
        int trackScore();
};
