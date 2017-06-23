#include "Addition.h"



Addition::Addition(double b): a(b)
{
}
void Addition::operation()
{
	result += a;
}
void Addition::set_a(double b)
{
	a = b;
}
