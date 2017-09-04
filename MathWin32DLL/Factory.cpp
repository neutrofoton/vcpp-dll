#include "LogarithmicMath.h"

using namespace std;

extern "C" __declspec(dllexport) core::BaseMath* __cdecl CreateLogarithmicMath()
{
	return new core::LogarithmicMath();
}