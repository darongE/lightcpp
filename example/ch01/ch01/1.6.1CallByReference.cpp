#include "stdafx.h"
#include <iostream>
using namespace std;

void TestFunc(int &rParam)
{
	rParam = 100;
}


int _tmain(int argc, _TCHAR* argv[])
{
	int nData = 0;

	//TestFunc(&nData);      //why?  nData�� ������(�ּ�) ���̹Ƿ�...
	TestFunc(nData);		 // ������ ���� �μ���

	// ������ : �Ű������� �������̹Ƿ� ȣ���� �ڵ�� ����
	// �Ű������� ���� �������� �� �� ����  
	
	cout << nData << endl;

	return 0;

}