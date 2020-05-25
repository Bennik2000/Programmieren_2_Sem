#pragma once
#include "BankAccount.h"


class CheckingAccount : public BankAccount
{
  public:
    CheckingAccount(float startCredit, float interestRate) : BankAccount(startCredit, interestRate) {
    }

    enum AccountType getType() override;
    void printDetails() override;
};
