// ch02.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>


//Default value = 10
int TestFunc(int nParam = 10)
{
	return nParam;

}

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << TestFunc() << std::endl;
	std::cout << TestFunc(20) << std::endl;

    return 0;
}

