#include <iostream>
#include "Calculator.h"

class BMICalculator : public Calculator {
public:
	double calculate(double weight, double height) override;
protected:
	std::string interpretResult(double result) override;
	void description() const override;
};

