#include <iostream>
#include "Converter.h"

double Converter::toMetric(double value) {
    // Default implementation, can be overridden by derived classes
    return value;
}

double Converter::toImperial(double value) {
    // Default implementation, can be overridden by derived classes
    return value;
}

void Converter::description() const {
    std::cout << "This is a base converter class." << std::endl;
}