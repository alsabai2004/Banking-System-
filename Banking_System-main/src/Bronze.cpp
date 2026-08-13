#include "Bronze.h"

Bronze::Bronze() : AccountType(100000) {}

double Bronze::getDailyWithdrawalLimit() const
{
    return dailyWithdrawalLimit;
}

std::string Bronze::getAccountTypeName() const
{
    return "Bronze";
}
