#include "board_class.cpp"
#include "player_class.cpp"
#include "score_class.cpp"
#include "three_in_a_row.cpp"
#include <iostream>
#include <stdio.h>

int main()
{
    Board * gameboard = new Board();
    Player player1;
    Player player2;

    gameboard->printGrid();
    player1.obtainPlayer1Input();
     player1.playerTurn();
    

    return 0;
}
