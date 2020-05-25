#include "InstantAccessAccount.h"
#include <iostream>

AccountType InstantAccessAccount::getType() {
    return AccountType::instantAccessAccount;
}

void InstantAccessAccount::printDetails() {
    printf("Tagesgeldkonto:\n"
           "    Kontonummer: %i\n"
           "    Bankleitzahl: %i\n"
           "    Aktuelles Guthaben: %f\n"
           "    Aktueller Zins: %f\n",
           accountNumber,
           bankCode,
           credit,
           interestRate);
}
