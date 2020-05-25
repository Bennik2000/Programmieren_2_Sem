#include "CheckingAccount.h"
#include <iostream>

AccountType CheckingAccount::getType()
{
    return AccountType::checkingAccount;
}

void CheckingAccount::printDetails() {
    printf("Girokonto:\n"
           "    Kontonummer: %i\n"
           "    Bankleitzahl: %i\n"
           "    Aktuelles Guthaben: %f\n"
           "    Aktueller Zins: %f\n",
           accountNumber,
           bankCode,
           credit,
           interestRate);
}
