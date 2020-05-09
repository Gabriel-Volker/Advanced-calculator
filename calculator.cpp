#include "division.cpp"
#include "addition.cpp"
#include "multiplication.cpp"
#include "subtraction.cpp"
using namespace std;

int main()
{
    int operation;
    std::cout << "Select what you want to do\n"
    "1: Addition\n"
    "2: Subtraction\n"
    "3: Multiplication\n"
    "4: Division\n"
    "5: Exponentiation"
    "6: Square root";
    std::cin >> operation;
    if (operation == 1) // This is to select which mathematical operation to perform.
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
    else if (operation == 4)
    {
        std::cout << division();
    }
    /* 
        The functions addition, subtraction, multiplication... are used to ask the user 
    for values, perform operations and return the result. 
    */
}