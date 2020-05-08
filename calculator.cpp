#include "division.cpp"
#include "addition.cpp"
#include "multiplication.cpp"
#include "subtraction.cpp"

int main()
{
    int operation;
    std::cout << "Select what you want to do\n"
    "1: Addition\n"
    "2: subtraction\n"
    "3: multiplication\n"
    "4: Division\n";
    std::cin >> operation;
    if (operation == 1)
    {
        std::cout << addition();
    }
    else if (operation == 2)
    {
        std::cout << subtraction();
    }
    else if (operation == 3)
    {
        std::cout << multiplication();
    }
    else
    {
        std::cout << division();
    }
}  