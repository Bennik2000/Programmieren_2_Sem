#include "BankAccount.h"
#include <random>
std::mt19937 random;

BankAccount::BankAccount(float startCredit, float interestRate) {
    this->accountNumber = random();
    this->bankCode = random();
    this->interestRate = interestRate;
    this->credit = startCredit;
}

AccountType BankAccount::getType() {
    return AccountType::bankAccount;
}

int BankAccount::getBankCode() {
    return bankCode;
}

float BankAccount::getCredit() {
    return credit;
}

float BankAccount::getInterestRate() {
    return interestRate;
}

void BankAccount::setInterestRate(float interestRate) {
    this->interestRate = interestRate;
}

void BankAccount::payIn(float amount) {
    credit += amount;
}

void BankAccount::printDetails() {
    printf("Normales Bankkonto:\n"
           "    Kontonummer: %i\n"
           "    Bankleitzahl: %i\n"
           "    Aktuelles Guthaben: %f\n"
           "    Aktueller Zins: %f\n",
           accountNumber,
           bankCode,
           credit,
           interestRate);
}
