#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	//�ν��Ͻ��� �������� ����
	int *pData = new int; 

	// �ʱⰪ�� �־�� �Ѵ�.
	int *pNewData = new int(50);

	*pData = 100;
	std::cout << *pData << std::endl;
	std::cout << *pNewData << std::endl;

	delete pData;
	delete pNewData;

}