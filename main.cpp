#include <iostream>
#include <string>

int main()
{
    for (int attempt = 1; attempt <= 3; ++attempt)
    {
        std::string firstString;
        std::string secondString;
        std::string combinedString;

        std::cout << "Attempt " << attempt << std::endl;

        std::cout << "Enter the first string: ";
        std::getline(std::cin, firstString);

        std::cout << "Enter the second string: ";
        std::getline(std::cin, secondString);

        combinedString = firstString + secondString;

        std::cout << "Combined string: " << combinedString << std::endl;
        std::cout << std::endl;
    }

    return 0;
}
