#include "Auto.h"
#include <math.h>

void Auto::moveTo(const Ort ort)
{
    double distance = sqrt(pow(ort.x - currentPosition.x, 2) + pow(ort.y - currentPosition.y, 2));

    movedDistance += distance;
    currentPosition = ort;
}

double Auto::getMovedDistance() const 
{
    return movedDistance;
}

double Auto::getNeededFuel() const
{
    return movedDistance * averageFuelUsage;
}
