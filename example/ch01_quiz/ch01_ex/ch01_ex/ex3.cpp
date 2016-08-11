#include "stdafx.h"
#include <iostream>

using namespace std;


/*
 char[12] 배열 메모리를 new 연산자로 동적할당하고 해제하는 코드 에를 작성하시오.
*/
int _tmain(int argc, _TCHAR* argv[])
{
	char *chArray = new char[12];

	delete[] chArray;


	return 0;
}
