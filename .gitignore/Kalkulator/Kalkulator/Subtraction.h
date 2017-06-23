#pragma once
#include "Calculator.h"
ref class Subtraction:public Calculator
{
private:
	double a;
public:
	Subtraction(double b);
	void operation() override;
	void set_a(double b) override;
};

