#pragma once
#include "Calculator.h"

class SpeedCalculator : public Calculator{
public:
    double calculate(double distance, double time) override;

protected:
    std::string interpretResult(double result) override;

    void description() const override;
};