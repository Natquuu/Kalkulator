#include "History.h"



History::History()
{
}

int History::Size()
{
	return Current.Count;
}
void History::Add(Calculator^ a)
{
	Current.Add(a);
}
void History::Clear()
{
	Current.Clear();
}

Calculator^ History::Last()
{
	return Current[Current.Count-1];
}
