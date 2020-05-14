// Aufgabe2_1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "Location.h"
#include <iostream>
#include "Sight.h"
#include "Toilet.h"

int main() {
    Location *locations[5];

    locations[0] = new Location("Generic", 1, 1);
    locations[1] = new Sight("Eiffel Turm", 1, 1, "ganz Paris");
    locations[2] = new Toilet("Dixi Klo", 1, 1, "eklig");
    locations[3] = new Sight("Freiheitsstatue", 1, 1, "New York");
    locations[4] = new Sight("Reichstag", 1, 1, "die Politiker");

    for (int i = 0; i < 5; i++) {
        locations[i]->visit();
        std::cout << std::endl;
    }
}
