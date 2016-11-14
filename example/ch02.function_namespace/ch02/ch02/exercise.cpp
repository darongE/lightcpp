#include "stdafx.h"
#include <iostream>

int Add(int a, int b)
{
	return a + b;
}


namespace TEST
{
	void TestFunc(void)
	{
		Add(3, 4);

	}

	int Add(int a, int b)
	{
		return a + b;
	}
}

void TestFunc(void)
{
	Add(3, 4);

}


int _tmain(int argc, _TCHAR* argv[])
{
	//int nResult = Add(3, 4);
	//printf("%d\n", nResult);
	TEST::TestFunc();

	return 0;
}