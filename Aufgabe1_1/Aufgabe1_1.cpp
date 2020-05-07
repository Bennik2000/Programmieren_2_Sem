#include <ctime>
#include <iostream>
#include <random>

const char *names[] = {"Bob", "Alice", "Timo", "Sarah", "Andy", "Abbie"};
const char *surnames[] = {"Smith", "Baker", "Mayer", "Mueller"};

struct Employee
{
    int id;
    const char *firstName;
    const char *surname;
    int weight;
    enum gender
    {
        male,
        female
    } gender;
};

/**
 * Fill the employee array with values
 */
void generateEmployees(Employee employees[], int count)
{
    for (int i = 0; i < count; i++)
    {
        employees[i].id = i + 1;

        employees[i].surname = surnames[i % 4];

        const int nameIndex = rand() % 6;

        employees[i].firstName = names[nameIndex];
        employees[i].gender = nameIndex % 2 == 0 ? Employee::male : Employee::female;
    }
}

/**
 * Print the employees in array to stdout
 */
void outputEmployees(Employee employees[], int count)
{
    for (int i = 0; i < count; i++)
    {

        const char *gender;

        switch (employees[i].gender)
        {
        case Employee::male:
            gender = "Herr";
            break;
        case Employee::female:
            gender = "Frau";
            break;
        default:
            gender = "other";
        }

        printf("%i: %s %s %s\n", employees[i].id, gender, employees[i].firstName,
               employees[i].surname);
    }
}

int main()
{
    // Initialize random with a time based seed
    srand(time(nullptr));

    const int count = 10;

    Employee employees[count];

    generateEmployees(employees, count);
    outputEmployees(employees, count);
}
