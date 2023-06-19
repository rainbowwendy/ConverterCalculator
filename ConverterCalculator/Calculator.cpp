#include <iostream>
#include "Calculator.h"

void Calculator::printResult(double result) {
    std::cout << "Result: " << interpretResult(result) << std::endl;
}

void Calculator::description() const {
    std::cout << "This is a base calculator class." << std::endl;
}