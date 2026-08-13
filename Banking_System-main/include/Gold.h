#ifndef GOLD_H
#define GOLD_H

#include "AccountType.h"

class Gold : public AccountType
{
public:
    Gold();

    double getDailyWithdrawalLimit() const override;
    std::string getAccountTypeName() const override;
};

#endif
