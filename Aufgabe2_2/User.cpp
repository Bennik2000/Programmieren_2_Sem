#include "User.h"
#include <iostream>

int User::userCount = 0;

User::User(const std::string name) : name(name), id(userCount++) {
}

void User::print() const {
    std::cout << id << ": " << name << std::endl;
}
