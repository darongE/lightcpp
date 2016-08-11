#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int aList[10] = { 10,20,30,40,50,60,70,80,90,100 };

	// C Style code
	for(int i = 0; i < 5; i++)
		cout << aList[i] << ' ';

	cout << endl;


	for(auto n : aList)
		cout << n << ' ';

	cout << endl;

	//n은 각 요소에 대한 참조 
	for(auto &n : aList)
		cout << n << ' ';

	cout << endl;

	return 0;

}