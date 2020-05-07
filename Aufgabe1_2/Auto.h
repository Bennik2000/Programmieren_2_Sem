#pragma once
#include "Ort.h"
#include <string>

class Auto
{
  public:
    std::string name;

  private:
    double movedDistance = 0;
    Ort currentPosition;
    double averageFuelUsage;

  public:
    Auto(std::string name, Ort currentPosition, double averageFuelUsage)
        : name(name), currentPosition(currentPosition), averageFuelUsage(averageFuelUsage)
    {
    }

    void moveTo(Ort ort);
    double getMovedDistance();
    double getNeededFuel();
};
