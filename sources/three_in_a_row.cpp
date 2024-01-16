#include"three_in_a_row.h"

void validateInput()
{
  //this function will check to see if the player inputs the available coordinates or legal coordinates. If 
  // the players input does not fit the 3x3 grid. Display error message and call player input function.
}

bool isThreeInARow()
{
    /* this function will loop through the grid and check if any of these combinations are true:
        row 1 columns 1,2,3
        row 2 columns 1,2,3
        row 3 columns 1,2,3

        column 1 rows 1,2,3
        column 2 rows 1,2,3
        column 3 rows 1,2,3

        row 1 column 1
        row 2 column 2
        row 3 column 3

        row 1 column 3
        row 2 column 2
        row 3 column 1

        if none of these combinations are true, then call the isAStalemate function    
    */


}

bool isAStalemate()
{
    /*
        this function will display a message stating that there are no winners for that round
        and will add 0 to the total score 
    */

}