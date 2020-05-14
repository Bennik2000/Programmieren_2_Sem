#pragma once
#include "Ort.h"
#include <string>

class Auto
{
  public:
    const std::string name;

  private:
    double movedDistance = 0;
    Ort currentPosition;
    double averageFuelUsage;

  public:
    Auto(const std::string name, const Ort currentPosition, const double averageFuelUsage)
        : name(name), currentPosition(currentPosition), averageFuelUsage(averageFuelUsage)
    {
    }

    void moveTo(Ort ort);
    double getMovedDistance() const;
    double getNeededFuel() const;
};
