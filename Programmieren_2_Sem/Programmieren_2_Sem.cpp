#include <iostream>

const char *names[] = {"Bob",   "Alice", "Timo",     "Andy",
                       "Sarah", "Abbie", "Gabriella"};
const char *surnames[] = {"Smith", "Baker", "Mayer", "Mueller"};

struct Employee {
  int id;
  const char *firstName;
  const char *surname;
  int weight;
  enum gender { male, female } gender;
};

void generateEmployees(Employee employees[], int count) {
  for (int i = 0; i < count; i++) {
    employees[i].id = i + 1;

    employees[i].firstName = names[i % 7];
    employees[i].surname = surnames[i % 4];

    employees[i].gender = i % 2 == 0 ? Employee::male : Employee::female;
  }
}

void outputEmployees(Employee employees[], int count) {
  for (int i = 0; i < count; i++) {

    // Assuming the opposite of male is female
    const char *gender;

  	switch (employees[i].gender)
  	{ case Employee::male:
          gender = "male";
          break;
        case Employee::female:
          gender = "female";
          break;
        default:
          gender = "other";
  	}

    printf("%i: %s %s (%s)\n", employees[i].id, employees[i].firstName,
           employees[i].surname, gender);
  }
}

int main() {
  const int count = 10;
	
  Employee employees[count];

  generateEmployees(employees, count);
  outputEmployees(employees, count);
}
