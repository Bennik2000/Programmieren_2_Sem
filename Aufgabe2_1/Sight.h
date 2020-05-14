#pragma once
#include "Location.h"

class Sight : public Location
{
private:
    std::string view;

public:
    Sight(std::string name, int x, int y, std::string view) : Location(name, x, y), view(view) {
    }

    void visit() override;
};
