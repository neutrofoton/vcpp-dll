#pragma once

#include "BaseMath.h"

namespace core
{
	class LogarithmicMath : public BaseMath
	{
	public:
		LogarithmicMath();
		virtual ~LogarithmicMath();


		string Say(string& s);
		double Calculate(const double a, const double b);
	};
}
