#pragma once
#include <string>

enum AccountType {
    bankAccount,
    checkingAccount,
    instantAccessAccount,
    buildingSavingAccount,
};

class BankAccount
{
  protected:
    int accountNumber;
    int bankCode;
    float credit;
    float interestRate;

  public:
    BankAccount(float startCredit, float interestRate);

    virtual enum AccountType getType();
    int getBankCode();
    float getCredit();
    float getInterestRate();

    void setInterestRate(float interestRate);

    void payIn(float amount);

    virtual void printDetails();
};

