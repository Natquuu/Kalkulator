#pragma once
#include "Calculator.h"
ref class Addition : public Calculator
{private:
	double a;
public:
	Addition(double b);
	 void operation() override;
	 void set_a(double b) override;
};

