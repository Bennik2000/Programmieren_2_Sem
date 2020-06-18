
#include <algorithm>
#include <iostream>
#include <list>

void printVector(const std::list<std::string> &vec) {
    for (const auto &element: vec) {
        std::cout << element << std::endl;
    }
    std::cout << "----------------------------" << std::endl;
}

int main() {
    std::list<std::string> list;

    list.push_back("Eier");
    list.push_back("Milch");
    list.push_back("Zucker");
    list.push_back("Schokolade");
    list.push_back("Mehl");

    printVector(list);

    // Remove first element
    list.erase(list.begin());

    printVector(list);

    // Add "Kaffee" to the end
    list.push_back("Kaffee");

    printVector(list);

    // Replace "Zucker" with "Honig"
    std::replace(list.begin(), list.end(), static_cast<std::string>("Zucker"), static_cast<std::string>("Honig"));

    printVector(list);
}
