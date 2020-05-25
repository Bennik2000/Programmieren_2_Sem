#pragma once
#include "BankAccount.h"

class BuildingSavingAccount : public BankAccount
{
  public:
    BuildingSavingAccount(float startCredit, float interestRate) : BankAccount(startCredit, interestRate) {
    }

    enum AccountType getType() override;
    void printDetails() override;
};
