#pragma once
#include <string>

class Ort
{
  public:
    int x;
    int y;
    std::string name;

  public:
    Ort(const int x, const int y, const std::string name) : x(x), y(y), name(name)
    {
    }
};
