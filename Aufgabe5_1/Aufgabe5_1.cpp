
#include <iostream>
#include <vector>
#include <algorithm>

void printVector(const std::vector<std::string>& vec)
{
    for (const auto& element: vec)
    {
        std::cout << element << std::endl;
    }
    std::cout << "----------------------------" << std::endl;
}

int main()
{
    std::vector<std::string> vec;

    vec.push_back("Eier");
    vec.push_back("Milch");
    vec.push_back("Zucker");
    vec.push_back("Schokolade");
    vec.push_back("Mehl");

    printVector(vec);

    // Remove first element
    vec.erase(vec.begin());

    printVector(vec);

    // Add "Kaffee" to the end
    vec.push_back("Kaffee");

    printVector(vec);

    // Replace "Zucker" with "Honig"
    std::replace(vec.begin(),
                 vec.end(),
                 static_cast<std::string>("Zucker"),
                 static_cast<std::string>("Honig"));

    printVector(vec);

    // Find "Milch" and remove it
    auto milk = std::find(vec.begin(), vec.end(), "Milch");

    vec.erase(milk);

    printVector(vec);
}
