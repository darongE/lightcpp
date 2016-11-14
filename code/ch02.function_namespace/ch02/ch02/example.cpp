#include "stdafx.h"
#include <iostream>

extern "C"
{
	int Add(int a, int b);
	double Add(double a, double b);
}

int _tmain(int argc, _TCHAR* argv[])
{
	Add(3, 4);
	Add(3.3, 4.4);

	return 0;
}