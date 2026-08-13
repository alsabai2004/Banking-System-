#include "Transaction.h"
class Transaction
{
    string date;
    int userID;
    double amount;
    string type;
    int recieverID;

public:
    Transaction(const string &d, int id, double amt, const string &t)
        : date(d), userID(id), amount(amt), type(t) {}
    Transaction(const string &d, int id, double amt, const string &t, int recID)
        : date(d), userID(id), amount(amt), type(t), recieverID(recID) {}

    Transaction(int Id, double amount, string date, string type, string recieverid)
    {
        this->userID = Id;
        this->amount = amount;
        this->date = date;
        this->type = type;

        if (recieverid == "N/A")
        {
            this->recieverID = 0;
        }
        else
        {
            this->recieverID = stoi(recieverid);
        }
    }

    // getters
    string getDate() const { return date; }
    int getUserID() const { return userID; }
    double getAmount() const { return amount; }
    string getType() const { return type; }
    int getRecieverID() const { return recieverID; }

    string get_reciever_id() const
    {
        if (recieverID == 0)
        {
            return "N/A";
        }
        else
        {
            return to_string(this->recieverID);
        }
    }

    // setters
    void setDate(const string &d)
    {
        date = d;
    }
    void setUserID(int id)
    {
        userID = id;
    }
    void setAmount(double amt)
    {
        amount = amt;
    }
    void setType(const string &t)
    {
        type = t;
    }
    void setRecieverID(int recID)
    {
        recieverID = recID;
    }
};

