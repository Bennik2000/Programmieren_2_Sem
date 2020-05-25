#pragma once
#include "BankAccount.h"

class InstantAccessAccount : public BankAccount
{
  public:
    InstantAccessAccount(float startCredit, float interestRate) : BankAccount(startCredit, interestRate) {
    }

    enum AccountType getType() override;
    void printDetails() override;
};