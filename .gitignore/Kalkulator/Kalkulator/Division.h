#pragma once
#include "Calculator.h"
ref class Division :public Calculator
{
private:
	double a;
public:
	Division(double b);
	void operation() override;
	void set_a(double b) override;
	bool illegaloperation() override;
};

