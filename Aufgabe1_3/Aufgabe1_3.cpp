#include "Person.h"
#include <iostream>

int main()
{
    Person persons[] = {
        Person("Hans", de),
        Person("Bob", en),
        Person("Chloe", fr),
        Person("Mario", it),
    };


    for (int i = 0; i < 4; i++)
    {
        printf("%i) %s\n", i + 1, persons[i].getName().c_str());
    }

    int person1;
    int person2;
    std::cin >> person1;
    std::cin >> person2;

    persons[person1 - 1].greet(&persons[person2 - 1]);
}
