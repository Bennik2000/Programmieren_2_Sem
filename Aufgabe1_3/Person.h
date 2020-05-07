#pragma once
#include <string>

enum Origin
{
    de,
    en,
    fr,
    it
};

class Person
{
  private:
    std::string name;
    Origin origin;

  public:
    Person(const std::string &name, enum Origin origin) : name(name), origin(origin)
    {
    }

    void greet(const Person *other);
    std::string getName();
};
