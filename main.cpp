// main.cpp
#include <iostream>
#include "calculator.h"

int main() {
    Calculator calculator;

    int num1 = 10;
    int num2 = 5;

    std::cout << "Sum: " << calculator.add(num1, num2) << std::endl;
    std::cout << "Difference: " << calculator.subtract(num1, num2) << std::endl;

    return 0;
}
