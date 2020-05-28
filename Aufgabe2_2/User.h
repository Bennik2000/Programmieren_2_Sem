#pragma once
#include <string>

class User
{
  private:
    static int userCount;
    const std::string name;
    const int id;

  public:
    User(std::string name = "Hans");

    void print() const;
};
