#include <iostream>
#include "SpeedCalculator.h"

double SpeedCalculator::calculate(double distance, double time) {
	// Calculate speed using the formula: speed = distance / time
	return distance / time;
};


std::string SpeedCalculator::interpretResult(double result) {
    if (result < 1.0) {
        return "Slow walking speed";
    }
    else if (result < 5.0) {
        return "Normal walking speed";
    }
    else if (result < 10.0) {
        return "Running speed";
    }
    else {
        return "Driving speed";
    }
};

void SpeedCalculator::description() const{
    std::cout << "This is a speed calculator class." << std::endl;
};
