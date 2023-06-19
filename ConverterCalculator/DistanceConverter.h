#pragma once
#include<iostream>
#include"Converter.h"

class DistanceConverter : public Converter {
public:
	double toMetric(double value) override;
	double toImperial(double value) override;
	void description() const override;
};