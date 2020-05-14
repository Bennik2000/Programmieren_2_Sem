#include "Sight.h"
#include <iostream>

void Sight::visit() {
    std::cout << name << " (" << x << ", " << y << ")";
    std::cout << " Hier sieht man " << view;
}
