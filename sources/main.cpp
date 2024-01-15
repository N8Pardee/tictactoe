#include "board_class.cpp"
#include "player_class.cpp"
#include "score_class.cpp"
#include "three_in_a_row.cpp"
#include <iostream>

int main()
{
    Board * gameboard = new Board();
    Player player1 = new Player();
    Player player2 = new Player();
    gameboard->printGrid();
    player1.obtainPlayer1Input();
    player1.playerTurn();


    return 0;
}
