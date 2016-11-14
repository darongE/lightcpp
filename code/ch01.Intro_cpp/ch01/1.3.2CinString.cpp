#include "stdafx.h"
#include <string>
#include <cstdio>
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int nAge;
	std::cout << "Type your age." << std::endl;
	std::cin >> nAge;

	char szJob[32];
	std::cout << "Type your job." << std::endl;
	std::cin >> szJob;

	std::string strName;
	std::cout << "Type your name." << std::endl;
	std::cin >> strName;

	//print all
	std::cout << "Your name is " << strName << ","
		<< "Your Age is " << nAge << ","
		<< "Your job is " << szJob << std::endl;

	return 0;
}
