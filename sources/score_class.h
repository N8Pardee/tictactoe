// The scoring class will calculate the sum of the scores and determine the winner
#pragma once
class Score
{
    private:
        short winner = 0;
     
    public:
     int sumPoints();
     int calculateWinner();
     void displayWinner();

};
