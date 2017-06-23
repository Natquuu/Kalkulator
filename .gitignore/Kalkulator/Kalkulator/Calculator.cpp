#include "Calculator.h"


Calculator::Calculator()
{
	
}
void Calculator::set_value(double a)
	{
		result= a;
		setamount++;
	}

	void Calculator::clear_value()
	{
		result = 0;
	}

	bool Calculator::illegaloperation()
	{
		return true;
	 }