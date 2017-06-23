#include "Multiplication.h"



Multiplication::Multiplication(double b) : a(b)
{
}
void Multiplication::operation()
{
	result *= a;
}
void Multiplication::set_a(double b)
{
	a = b;
}