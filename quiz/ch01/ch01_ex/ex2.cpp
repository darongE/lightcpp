#include "stdafx.h"
#include <iostream>

using namespace std;


/*
C++11 에서 auto 예약어가 어떤 의미인지 코드로 예를 보이시오
*/
int _tmain(int argc, _TCHAR* argv[])
{
//auto : 타입을 지정하지 않고 컴파일러가 타입을 추론하도록 지시하는 예약어입니다.


	auto  a = 2.5;
	auto  b = 3.5f;


	std::cout << "총합은 " << a + b << " 입니다." << std::endl;


	return 0;
}
