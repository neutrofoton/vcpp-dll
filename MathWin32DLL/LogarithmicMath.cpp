#include "LogarithmicMath.h"
#include <math.h>

namespace core
{
	LogarithmicMath::LogarithmicMath()
	{
	}


	LogarithmicMath::~LogarithmicMath()
	{
	}

	string LogarithmicMath::Say(string& s)
	{
		string result = s + " is calling Logarithmic operation of class LogarithmicMath";
		return result;
	}

	double LogarithmicMath::Calculate(const double a, const double b)
	{
		return log10(b) / log10(a);
	}
}