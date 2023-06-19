#include <iostream>
#include "HeightConverter.h"

double HeightConverter::toMetric(double value) {
    return value * 0.3048; // Convert feet to meters
}

double HeightConverter::toImperial(double value) {
    return value * 3.28084; // Convert meters to feet
}

void HeightConverter::description() const {
    std::cout << "This is a height converter class." << std::endl;
}