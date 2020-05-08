#include <iostream>
#include <string.h>

std::string addition()
{
    float value1;
    float value2;
    std::cout << "Enter the first value for the addition\n";
    std::cin >> value1;
    std::cout << "Enter the second value for the addition\n";
    std::cin >> value2;
    float result{value1 + value2};
    std::string result_str= std::to_string(result);
    std::string str{"The result is " + result_str};
    return str;
}
