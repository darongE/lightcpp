#include "stdafx.h"
#include <iostream>
using namespace std;

//참조 전달 : & 사용

void Swap(int &a, int &b)
{
	int nTmp = a;
	a = b;
	b = nTmp;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 10, y = 20;

	Swap(x, y);

	cout << "x: " << x << endl;
	cout << "y: " << y << endl;

	return 0;
}