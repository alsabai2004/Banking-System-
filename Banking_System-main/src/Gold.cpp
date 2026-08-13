#include "Gold.h"

Gold::Gold() : AccountType(500000) {}

double Gold::getDailyWithdrawalLimit() const
{
    return dailyWithdrawalLimit;
}

std::string Gold::getAccountTypeName() const
{
    return "Gold";
}
