

#pragma once


#include "BaseMath.h"

using namespace std;

namespace core
{
	class Math_API AddOperationMath : BaseMath
	{
	public:
		AddOperationMath();
		virtual ~AddOperationMath();

		
		string Say(string& s);
		double Calculate(const double a, const double b);

		static double Add(const double a, const double b);
	};
}
