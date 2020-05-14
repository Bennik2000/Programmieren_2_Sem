#include "Toilet.h"
#include <iostream>

void Toilet::visit() {
    std::cout << name << " (" << x << ", " << y << ")";
    std::cout << " Hier stinkt es nach " << smell;
}
