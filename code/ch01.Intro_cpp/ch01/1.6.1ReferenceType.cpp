#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR argv[])
{
	int nData = 10;

	int &ref = nData;

	//참조자의 값을 변경하면 원본도 변경됨
	ref = 20;
	cout << nData << endl;

	int *pnData = &nData;
	*pnData = 30;
	cout << nData << endl;

	/*
	   Call By Reference : 참조에 의한 호출 
	   덩치 큰 자료 값이 아니라 주소로 전달하는 것이 효율적!
	*/


	return 0;
}