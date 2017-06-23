#pragma once
#include "Calculator.h"
ref class Exponentiation :public Calculator
{
public:
	Exponentiation();
	void operation() override;
	void set_a(double b) override;
};

