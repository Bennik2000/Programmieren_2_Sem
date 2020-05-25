#include "BuildingSavingAccount.h"
#include <iostream>

AccountType BuildingSavingAccount::getType() {
    return AccountType::buildingSavingAccount;
}

void BuildingSavingAccount::printDetails() {
    printf("Bausparvertrag:\n"
           "    Kontonummer: %i\n"
           "    Bankleitzahl: %i\n"
           "    Aktuelles Guthaben: %f\n"
           "    Aktueller Zins: %f\n",
           accountNumber,
           bankCode,
           credit,
           interestRate);
}
