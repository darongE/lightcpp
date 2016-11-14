#include "stdafx.h"
#include <iostream>

namespace TEST
{
	int g_Data = 100;
	void CallFunc(void)
	{
		std::cout << "TEST::CallFunc()" << std::endl;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	TEST::CallFunc();
	std::cout << TEST::g_Data << std::endl;

	return 0;
}