#pragma once
#include "Location.h"

class Toilet : public Location
{
  private:
    std::string smell;

public:
    Toilet(std::string name, int x, int y, std::string smell) : Location(name, x, y), smell(smell) {
    }

    void visit() override;
};
