#include "stdafx.h"
#include <iostream>

using namespace std;


/*
 int에 대한 참조 형식을 매개변수로 받고, 두 변수의 값을 교환하는 함수를 작성하세요.
 함수 원형은 void Swap(int &a, int &b) 입니다.
*/

void Swap(int &a, int &b)
{
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;

}


int _tmain(int argc, _TCHAR* argv[])
{
	int x = 10, y = 20;

	std::cout << "변경전 x : " << x << ", "
			  << "y : " << y << std::endl;

	Swap(x, y);

	std::cout << "변경후 x : " << x  << ", "
			  << "y : " << y << std::endl;


	return 0;
}
