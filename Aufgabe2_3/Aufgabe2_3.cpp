// Aufgabe2_3.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "BankAccount.h"
#include "BuildingSavingAccount.h"
#include "CheckingAccount.h"
#include "InstantAccessAccount.h"

int main()
{
    BankAccount bankAccount(100.0f, 0.1f);
    BuildingSavingAccount buildingSavingAccount(100.0f, 0.1f);
    CheckingAccount checkingAccount(100.0f, 0.1f);
    InstantAccessAccount instantAccessAccount(100.0f, 0.1f);

    bankAccount.printDetails();
    bankAccount.payIn(10);
    bankAccount.printDetails();

    buildingSavingAccount.printDetails();
    buildingSavingAccount.payIn(10);
    buildingSavingAccount.printDetails();

    checkingAccount.printDetails();
    checkingAccount.payIn(10);
    checkingAccount.printDetails();

    instantAccessAccount.printDetails();
    instantAccessAccount.payIn(10);
    instantAccessAccount.printDetails();
}
