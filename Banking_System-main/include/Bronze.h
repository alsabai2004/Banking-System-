#ifndef BRONZE_H
#define BRONZE_H

#include "AccountType.h"

class Bronze : public AccountType
{
public:
    Bronze();

    double getDailyWithdrawalLimit() const override;
    std::string getAccountTypeName() const override;
};

#endif
