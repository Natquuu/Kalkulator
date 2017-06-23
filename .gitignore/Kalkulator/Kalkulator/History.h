#pragma once
#include "Calculator.h"
using namespace System::Collections::Generic;
ref class History
{private:
	List <Calculator^> Current;
public:
	History();
	int Size();
	void Add(Calculator^ a);
	Calculator^ Last();
	void Clear();
};

