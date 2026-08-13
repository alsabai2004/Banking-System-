#include "Business.h"

Business::Business() : AccountType(20000000) {}

double Business::getDailyWithdrawalLimit() const
{
    return dailyWithdrawalLimit;
}

std::string Business::getAccountTypeName() const
{
    return "Business";
}
