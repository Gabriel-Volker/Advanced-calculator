#include <iostream>
#include <string.h>
#include <math.h>

std::string square_root()
{
    double value1;
    std::cout << "Enter the value for the square root\n";
    std::cin >> value1;
    double result{sqrt(value1)};
    std::string result_str= std::to_string(result);
    return "The result is " + result_str;
}
