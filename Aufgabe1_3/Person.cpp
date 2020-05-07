#include "Person.h"

void Person::greet(const Person *other)
{
    switch (other->origin)
    {
    case de:
        printf("Hallo %s, ich bin %s\n", other->name.c_str(), name.c_str());
        break;
    case en:
        printf("Hello %s, I am %s\n", other->name.c_str(), name.c_str());
        break;
    case fr:
        printf("Bonjour %s, je m'appelle %s\n", other->name.c_str(), name.c_str());
        break;
    case it:
        printf("Ciao %s, sono %s\n", other->name.c_str(), name.c_str());
        break;
    default:;
    }
}

std::string Person::getName()
{
    return name;
}
