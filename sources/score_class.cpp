#include"score_class.h"

int Score::sumPoints()
{


}
int Score::calculateWinner()
{
       
}
void Score::displayWinner()
{
    if(player1Points > player2Points)
    {
        printf("Player 1 wins! \n");
    }
    else if(player2Points > player1Points)
    {
        printf("Player 2 wins! \n");
    }
    else
    {
        printf("There is a tie! \n");
    }

}