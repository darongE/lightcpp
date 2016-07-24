#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	//인스턴스만 동적으로 생성
	int *pData = new int; 

	// 초기값을 넣어야 한다.
	int *pNewData = new int(50);

	*pData = 100;
	std::cout << *pData << std::endl;
	std::cout << *pNewData << std::endl;

	delete pData;
	delete pNewData;

}