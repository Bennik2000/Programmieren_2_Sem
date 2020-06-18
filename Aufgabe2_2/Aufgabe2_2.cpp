#include <iostream>
#include "User.h"

int main()
{
    User *users[5];

    users[0] = new User();
    users[1] = new User("Jannis");
    users[2] = new User("Jakob");
    users[3] = new User("Jenny");
    users[4] = new User("Joel");

    for (int i = 0; i < 5; i++) {
        users[i]->print();
    }

    for (int i = 0; i < 5; i++) {
        delete users[i];
    }
}
