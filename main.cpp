// main.cpp
#include <iostream>
#include "Calculator.h"

int main() {
    // Використання класу Calculator
    int result_add = Calculator::add(5, 3);
    int result_subtract = Calculator::subtract(10, 4);

    // Виведення результатів
    std::cout << "Result of addition: " << result_add << std::endl;
    std::cout << "Result of subtraction: " << result_subtract << std::endl;

    return 0;
}
