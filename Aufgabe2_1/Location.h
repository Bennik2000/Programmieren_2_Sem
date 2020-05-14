#pragma once
#include <string>

class Location
{
  protected:
    int x;
    int y;
    std::string name;

  public:
    Location(std::string name, int x, int y) : name(name), x(x), y(y) {
    }
    virtual void visit();
};
