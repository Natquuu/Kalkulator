#include "Subtraction.h"



Subtraction::Subtraction(double b) : a(b)
{
}
void Subtraction::operation()
{
	result -= a;
}

void  Subtraction::set_a(double b)
{
	a = b;
}
