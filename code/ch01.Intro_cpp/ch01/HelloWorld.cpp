#include "stdafx.h"
#include <iostream>

int Add(int a, int b)
{
	return a + b;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int nResult = Add(3, 4);
	printf("%d\n", nResult);

	return 0;
}