#pragma once
#include "Calculator.h"
ref class Multiplication :public Calculator
{
private:
	double a;
public:
	Multiplication(double b);
	void operation() override;
	void set_a(double b) override;
};

