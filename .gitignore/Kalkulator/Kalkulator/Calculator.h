#pragma once
#include <string>
ref class Calculator
{
public:
	Calculator();
	virtual void operation()=0;
	virtual void set_a(double b)=0;
	virtual bool illegaloperation();
	static void clear_value();
	static void set_value(double a);
	static double result;
	static int setamount=0;
	static int equals = 0;
};


