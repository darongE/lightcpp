// ch02.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

//Default value = 10
int TestFunc(int = 10);

int TestFunc(int nParam)
{
	return nParam;

}

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << TestFunc(20) << std::endl;

	return 0;
}

