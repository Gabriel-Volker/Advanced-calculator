#include "division.cpp"
#include "addition.cpp"
#include "multiplication.cpp"
#include "subtraction.cpp"
#include "square_root.cpp"
#include "exponentiation.cpp"
using namespace std;

int main()
{
    int operation;
    std::cout << "Select what you want to do\n"
    "1: Addition\n"
    "2: Subtraction\n"
    "3: Multiplication\n"
    "4: Division\n"
    "5: Exponentiation\n"
    "6: Square root\n";
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
    else if (operation == 5)
    {
        std::cout << exponentiation();
    }
    else if (operation == 6)
    {
        std::cout << square_root();
    }
    /* 
        The functions addition, subtraction, multiplication... are used to ask the user 
    for values, perform operations and return the result as a string. 
    */
}