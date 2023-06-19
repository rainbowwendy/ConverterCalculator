#include <iostream>
#include "WeightConverter.h"

double WeightConverter::toMetric(double value) {
    return value * 0.453592; // Convert pounds to kilograms
}

double WeightConverter::toImperial(double value) {
    return value * 2.20462; // Convert kilograms to pounds
}

void WeightConverter::description() const {
    std::cout << "This is a weight converter class." << std::endl;
}