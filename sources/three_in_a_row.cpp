#include"three_in_a_row.h"
#include "board_class.h"

void validateInput()
{
  //this function will check to see if the player inputs the available coordinates or legal coordinates. If 
  // the players input does not fit the 3x3 grid. Display error message and call player input function.
}

 /* this function will loop through the grid and check if any of these combinations are true. Check after 5 turns*/
bool isThreeInARow()
{   
    bool winner = false;

    for(int row = 0; row < 3; row++)
    {
        for(int column = 0; column < 3; column++)
        {            
            //check rows
            if(gameboard[row][column] == gameboard[row][column+1] && game_board[row][column] == game_board[row][column+2])
            {
                winner = true;
            }
            
            //check columns
            if(game_board[row][column] == game_board[row+1][column] && game_board[row][column] == game_board[row+2][column])
            {
                winner = true;
            }

            //check diagonals
            if(game_board[0][0] == game_board[1][1] && game_board [1][1] == game_board[2][2])
            {
                winner = true;
            }
            else if(game_board[0][2] == game_board[1][1] && game_board[1][1] == game_board[2][0])
            {
                winner = true;
            }
            else
            {
                isAStalemate(game_board);
                winner = false;
            }
            //stopped here 6/13. I have to figure out why my headers aren't being recognized by the include path. good job on getting back to it bro
        }
    }   


}

bool isAStalemate(char Board::game_board)
{
    /*
        this function will display a message stating that there are no winners for that round
        and will add 0 to the total score 
    */


}