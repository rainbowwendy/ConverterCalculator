#pragma once
#include <string>

class Converter {
public:
    virtual double toMetric(double value);
    virtual double toImperial(double value);
    virtual void description() const;
};
