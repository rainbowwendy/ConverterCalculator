// ConverterCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Converter.h"
#include "WeightConverter.h"
#include "DistanceConverter.h"
#include "HeightConverter.h"

#include "BMICalculator.h"
#include "SpeedCalculator.h"

using namespace std;

int main()
{
	int calculationAgain;
	int unitSystem;

	double weight, height;
	Converter* weightConverter = nullptr;
	Converter* heightConverter = nullptr;
	double bmi;
	Calculator* bmiCalculator = nullptr;

	double distance, time;
	Converter* distanceConverter = nullptr;
	Calculator* speedCalculator = nullptr;
	double speed;

	calculationAgain = 0;

	while (calculationAgain != 2) { // in lines 108, and 109, this will get user input 1 or 2, 2 means "no more"
		// Prompt the user to choose their preferred unit system
		do {
			std::cout << endl << endl;

			cout << "Choose your preferred unit system" << endl;
			cout << "1. imperial (pounds and feet)" << endl;
			cout << "2. metric (kilograms and meters)" << endl;
			cin >> unitSystem;
		} while (unitSystem != 1 && unitSystem != 2);

		// Ask the user to input weight and height
		if (unitSystem == 1) {
			cout << "Enter your weight(Lbs): ";
			cin >> weight;
			cout << "Enter your height(Ft.): ";
			cin >> height;

			// Instantiate the necessary converter objects based on the chosen unit system
			// Convert weight and height if using the imperial system
			weightConverter = new WeightConverter();
			heightConverter = new HeightConverter();

			weight = weightConverter->toMetric(weight);
			height = heightConverter->toMetric(height);
		}
		else
		{
			cout << "Enter your weight(Kg): ";
			cin >> weight;
			cout << "Enter your height(CM): ";
			cin >> height;
		}

		// Calculate and display BMI
		bmiCalculator = new BMICalculator();
		bmi = bmiCalculator->calculate(weight, height);
		cout << "BMI: " << bmi << endl;
		bmiCalculator->printResult(bmi);


		cout << endl << endl;


		// Ask the user to input distance and time
		if (unitSystem == 1) {
			cout << "Enter distance(Mile): ";
			cin >> distance;
			cout << "Enter time(h): ";
			cin >> time;

			// Convert distance if using the imperial system
			distanceConverter = new DistanceConverter();
			distance = distanceConverter->toMetric(distance);
		}
		else
		{
			cout << "Enter distance(Km): ";
			cin >> distance;
			cout << "Enter time(h): ";
			cin >> time;
		}

		// Calculate and display speed
		speedCalculator = new SpeedCalculator();
		speed = speedCalculator->calculate(distance, time);
		cout << "Speed (km/h): " << speed << endl;
		speedCalculator->printResult(speed);


		// ask the user if they want to perform another calculation
		cout << endl << endl;

		cout << "Do you want to perform another calculation?" << endl;
		cout << "1. Perform another calculation)" << endl;
		cout << "2. No more" << endl;
		cin >> calculationAgain;
	}

	// Clean up allocated objects
	delete weightConverter;
	delete heightConverter;
	delete bmiCalculator;
	delete distanceConverter;
	delete speedCalculator;

	cout << "Thank you for using the calculator!" << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
