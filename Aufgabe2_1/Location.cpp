#include "Location.h"
#include <iostream>

void Location::visit()
{
    std::cout << name << " (" << x << ", " << y << ")";
}
