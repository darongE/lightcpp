#include "stdafx.h"
#include <iostream>

using namespace std;


/*
 char[12] �迭 �޸𸮸� new �����ڷ� �����Ҵ��ϰ� �����ϴ� �ڵ� ���� �ۼ��Ͻÿ�.
*/
int _tmain(int argc, _TCHAR* argv[])
{
	char *chArray = new char[12];

	delete[] chArray;


	return 0;
}
