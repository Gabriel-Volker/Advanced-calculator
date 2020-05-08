#include <iostream>
#include <string.h>

std::string addition()
{
    double value1;
    double value2;
    std::cout << "Enter the first value for the addition\n";
    std::cin >> value1;
    std::cout << "Enter the second value for the addition\n";
    std::cin >> value2;
    double result{value1 + value2};
    std::string result_str= std::to_string(result);
    return "The result is " + result_str;
}
