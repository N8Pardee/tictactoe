// The scoring class will calculate the sum of the scores and determine the winner

class Score
{
    private:
        int totalPoints = 0;
        short winner = 0;

    public:
     int sumPoints();
     int calculateWinner();
     void displayWinner();

};
