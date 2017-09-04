#include <iostream>
#include <string>

#include <Windows.h>

#include "AddOperationMath.h"

using namespace std;

typedef core::BaseMath* (__cdecl *LogarithmicMathFactory)();

void CallDLLByDirectReference(double a, double b, string s);
void CallDLLByLoadLibrary(double a, double b, string s);

int main()
{
	double a = 2;
	double b = 4;
	string s = "neutro";

	CallDLLByDirectReference(a, b, s);
	CallDLLByLoadLibrary(a, b, s);


	cout << "Press any key to exit ";
	cin.get();

	return 0;
}



void CallDLLByDirectReference(double a, double b, string s)
{
	cout << a << " + " << b << " = " << core::AddOperationMath::Add(a, b) << endl;

	core::AddOperationMath* math = new core::AddOperationMath();
	cout << math->Say(s) << endl;

	delete math;

	cout << endl << "===============================================================" << endl;
}


void CallDLLByLoadLibrary(double a, double b, string s)
{
	HMODULE dll = LoadLibrary(L"MathWin32DLL.dll");
	if (!dll)
	{
		cout << "Fail load library" << endl;
		return;
	}

	LogarithmicMathFactory factory = reinterpret_cast<LogarithmicMathFactory>(GetProcAddress(dll, "CreateLogarithmicMath"));

	if (!factory)
	{
		cerr << "Unable to load CreateLogarithmicMath from DLL!\n";
		FreeLibrary(dll);
		return;
	}

	core::BaseMath* instance = factory();
	cout << a << " log (" << b << ") = " << instance->Calculate(a, b) << endl;
	cout << instance->Say(s) << endl;

	instance->Destroy();

	FreeLibrary(dll);

	cout << endl << "===============================================================" << endl;
}
