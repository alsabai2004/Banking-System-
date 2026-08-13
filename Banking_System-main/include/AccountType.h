#ifndef ACCOUNTTYPE_H
#define ACCOUNTTYPE_H

#include <string>

class AccountType
{
protected:
    double dailyWithdrawalLimit;

public:
    AccountType(double limit);
    virtual ~AccountType();

    virtual double getDailyWithdrawalLimit() const = 0;
    virtual std::string getAccountTypeName() const = 0;
};

#endif
