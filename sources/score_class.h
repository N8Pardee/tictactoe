// The scoring class will calculate the sum of the scores and determine the winner

class Score
{
    private:
        int totalPoints = 0;
        short winner = 0;
        short player1Points = 0;
        short player2Points = 0;

    public:
     int sumPoints();
     int calculateWinner();
     void displayWinner();

};
