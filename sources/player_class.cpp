#include "player_class.h"
#include "board_class.h" 
 
    
    void Player::Input()
    {
        printf("Please choose X or O \n");
        std::cin >> Player::player1Choice;
    }
    //determines if the starting player is X or O
    void Player::determineStartingPlayer()
    {
        if(Board::isEmptyBoard() == true)
        {
            if(Player::player1Choice == 'X')
            {
                Player::player = 'X';
                Player::player2 = 'O';
            }
            else if(player1Choice == 'O')
            {
                Player::player1 = 'O';
                Player::player2 = 'X';
            }
            else
            {
                printf("Enter valid Option\n");
                obtainPlayer1Input();
            }
        }
        }

    // void Player::playerTurn()
    // {
    //     printf("Enter Row and Column choice.\n");
    //     std::cin >> Board::row;
    //     printf("\n");
    //     std::cin >> Board::column;

    //     GAMEBOARD[row][column] = player1Choice;
    // }

    // char Player::getPlayer()
    // {
    //     return Player::player;
    // }
     
    // void Player::setPlayer(char player)
    // {
    //     player = this->player;
    // }

    //this function will inherit from the the score class. It will assign the points to the player 
    // int trackScore()
    // {
    //     return 0;
    // }