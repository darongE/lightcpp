
#include "stdafx.h"
#include <iostream>

using namespace std;


/*
  자신의 이름과 나이를 입력받고 "나의이름은 홍길동이고, 20살입니다." 라고 출력하기
  반드시, std::cout , std::cin 이용
*/
int _tmain(int argc, _TCHAR* argv[])
{
	char sName[32];
	int nAge = 0;
	std::cout << "type your name & age: " << std::endl;
	std::cin >> sName >> nAge;

	std::cout << "나의 이름은 " << sName << "이고,"
		<< nAge << "입니다." << std::endl;


    return 0;
}

