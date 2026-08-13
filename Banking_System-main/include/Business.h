#ifndef BUSINESS_H
#define BUSINESS_H

#include "AccountType.h"

class Business : public AccountType
{
public:
    Business();

    double getDailyWithdrawalLimit() const override;
    std::string getAccountTypeName() const override;
};

#endif
