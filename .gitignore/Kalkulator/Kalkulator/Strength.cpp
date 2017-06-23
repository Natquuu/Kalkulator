#include "Strength.h"



Strength::Strength()
{
}
void Strength::operation()
{
	int b = result;
	if ((b == result) && (result >= 0))
	{
		result = count(b);
	}
	else illegaloperation();
}
int Strength::count(int n)
{
	if (n == 0) return 1;
	else return n*count(n - 1);
}
void Strength::set_a(double b)
{
	result = b;
}
bool Strength::illegaloperation()
{
	int b = result;
	if ((b == result) && (result >= 0))
	return true;
	else return false;
}
