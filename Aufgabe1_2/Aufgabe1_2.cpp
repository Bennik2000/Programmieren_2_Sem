// Aufgabe1_2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Auto.h"

int main()
{
    Ort stuttgart(3, 10, "Stuttgart");
    Ort oberndorf(1, 1, "Oberndorf");

    Auto a("Porsche", stuttgart, 10);

    a.moveTo(oberndorf);
    printf("%s is in %s\n", a.name.c_str(), oberndorf.name.c_str());
    printf("Moved distance: %f\n", a.getMovedDistance());
    printf("Needed fuel: %f\n", a.getNeededFuel());

    a.moveTo(stuttgart);
    printf("%s is in %s\n", a.name.c_str(), stuttgart.name.c_str());
    printf("Moved distance: %f\n", a.getMovedDistance());
    printf("Needed fuel: %f\n", a.getNeededFuel());
}
