#include <iostream>
#include "DistanceConverter.h"

double DistanceConverter::toMetric(double value) {
    return value * 1.60934; // Convert Mile to Kilometers
}

double DistanceConverter::toImperial(double value) {
    return value * 0.621371; // Convert Kilometers to Mile
}

void DistanceConverter::description() const {
    std::cout << "This is a distance converter class." << std::endl;
}