#include <iostream>
#include <string.h>
#include <math.h>

std::string exponentiation()
{
    long double value1, value2;
    std::cout << "Enter the first value for the exponentiation\n";
    std::cin >> value1;
    std::cout << "Enter the second value for the exponentiation\n";
    std::cin >> value2;
    long double result{pow(value1, value2)};
    std::string result_str= std::to_string(result);
    return "The result is " + result_str;
}
