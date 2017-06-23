#include "Division.h"



Division::Division(double b) : a(b)
{
}
void Division::operation()
{
	if (a == 0)
	{

	}
	else {
		result = result / a;
	}
}

void Division::set_a(double b)
{
	a = b;
}
bool Division::illegaloperation()
{
	if (a == 0) return false;
	else return true;
}
