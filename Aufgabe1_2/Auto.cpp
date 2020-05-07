#include "Auto.h"
#include <math.h>

void Auto::moveTo(Ort ort)
{
    double distance = sqrt(pow(ort.x - currentPosition.x, 2) + pow(ort.y - currentPosition.y, 2));

    movedDistance += distance;
    currentPosition = ort;
}

double Auto::getMovedDistance()
{
    return movedDistance;
}

double Auto::getNeededFuel()
{
    return movedDistance * averageFuelUsage;
}
