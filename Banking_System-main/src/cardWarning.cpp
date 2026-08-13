#include "cardWarning.h"
class cardWarning
{
private:
    int ID;
    long long card_num;

public:
    cardWarning(int id, long long card_num) : ID(id), card_num(card_num) {}

    int getID() const
    {
        return ID;
    }

    long long getCardNum() const
    {
        return card_num;
    }
};

