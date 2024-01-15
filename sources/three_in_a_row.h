// This class will determine if there is a valid match win
// by determining if there are 3 in a row

class threeInARow
{
    private:
        bool isValidWin;
        bool isAMatch;
        bool isATie;

    public:
    void validateInput();
    bool isThreeInARow();
    bool isAStalemate();

};
