#include "stdafx.h"
#include <string>
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	std::string strData = "Test String";
	std::cout << "Sample string" << std::endl;
	std::cout << strData << std::endl;

	strData = "New String";
	std::cout << strData << std::endl;

	std::cout << "저는 " << 30 << "살" << "입니다." << std::endl;

	return 0;

}