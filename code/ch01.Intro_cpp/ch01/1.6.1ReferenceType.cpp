#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR argv[])
{
	int nData = 10;

	int &ref = nData;

	//�������� ���� �����ϸ� ������ �����
	ref = 20;
	cout << nData << endl;

	int *pnData = &nData;
	*pnData = 30;
	cout << nData << endl;

	/*
	   Call By Reference : ������ ���� ȣ�� 
	   ��ġ ū �ڷ� ���� �ƴ϶� �ּҷ� �����ϴ� ���� ȿ����!
	*/


	return 0;
}