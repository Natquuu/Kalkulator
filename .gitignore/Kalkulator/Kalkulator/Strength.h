#pragma once
#include "Calculator.h"
ref class Strength :public Calculator
{
public:
	Strength();
	void operation() override;
	int count(int n);
	void set_a(double b) override;
	bool illegaloperation() override;
};

