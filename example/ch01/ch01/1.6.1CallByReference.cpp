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

	//TestFunc(&nData);      //why?  nData의 참조값(주소) 값이므로...
	TestFunc(nData);		 // 참조에 의한 인수값

	// 문제점 : 매개변수가 참조자이므로 호출자 코드로 봐서
	// 매개변수를 참조 형식인지 알 수 없음  
	
	cout << nData << endl;

	return 0;

}