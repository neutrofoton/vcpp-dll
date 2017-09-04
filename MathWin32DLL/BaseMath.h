
// If you are building the DLL project on the command line, 
// use the /D compiler option to define the MATHDLLWIN32_EXPORTS symbol.

#pragma once

#ifdef MATHWIN32DLL_EXPORTS
#define Math_API __declspec(dllexport)
#else
#define Math_API __declspec(dllimport)
#endif // MATHWIN32DLL_EXPORTS

#include <string>

using namespace std;

namespace core
{
	class BaseMath
	{
	public:
		virtual void Destroy()
		{
			delete this;
		}

		virtual string Say(string& s) = 0;
		virtual double Calculate(const double a, const double b) = 0;
	};
}