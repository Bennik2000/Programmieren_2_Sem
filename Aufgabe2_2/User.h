#pragma once
#include <string>

class User
{
  private:
    static int userCount;
    std::string name;
    int id;

  public:
    User(std::string name = "Hans");

    void print() const;
};
