#include <iostream>
#include "BMICalculator.h"

double BMICalculator::calculate(double weight, double height) {
	// Calculate BMI using the formula: BMI = weight / (height * height)
	return weight / (height * height);
};

std::string BMICalculator::interpretResult(double result) {
	if (result < 18.5) {
		return "Underweight";
	}
	else if (result < 25.0) {
		return "Normal weight";
	}
	else if (result < 30.0) {
		return "Overweight";
	}
	else {
		return "Obese";
	}
};

void BMICalculator::description() const {
	std::cout << "This is a BMI calculator class." << std::endl;
};