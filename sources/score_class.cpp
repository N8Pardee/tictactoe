#include"score_class.h"

int Score::sumPoints()
{


}
int Score::calculateWinner()
{
       
}
void Score::displayWinner()
{
    if(player1Score > player2Score)
    {
        printf("Player 1 wins! \n");
    }
    else if(player2Score > player1Score)
    {
        printf("Player 2 wins! \n");
    }
    else
    {
        printf("There is a tie! \n");
    }

}