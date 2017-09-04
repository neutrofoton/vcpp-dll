#include "AddOperationMath.h"


namespace core
{
	AddOperationMath::AddOperationMath()
	{
	}


	AddOperationMath::~AddOperationMath()
	{
	}

	string AddOperationMath::Say(string& s)
	{
		string result =  s + " is calling add operation of class AddOperationMath";
		return result;
	}

	double AddOperationMath::Calculate(const double a, const double b)
	{
		return a + b;
	}

	double AddOperationMath::Add(const double a, const double b)
	{
		return a + b;
	}
}