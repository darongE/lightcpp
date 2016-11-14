// ch02.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

