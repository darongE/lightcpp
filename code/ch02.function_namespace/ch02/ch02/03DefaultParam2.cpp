#include "stdafx.h"
#include <iostream>

int TestFunc(int nParam1, int nParam2 = 2)   
{
	return nParam1 * nParam2;
}


/*
  1. 피호출자 함수 매개변수의 디폴트 값은 반드시 오른쪽 매개변수 부터 기술
  2. 매개변수가 여러 개일 때 왼쪽 첫번째 매개변수의 디폴트 값을 기술하려면 나머지 오른쪽
     '모든' 매개변수에 대한 디폴트 값을 기술해야 함! 절대로 중간에 빼먹으면 않됨!
  3. 호출자 함수가 피호출자 함수 매개변수의 실인수를 기술하면 이는 왼쪽부터 
     짝을 맞추어 적용하며, 짝이 맞지 않는 매개변수는 디폴트 값을 적용!

  <wrong code>
  int TestFunc(int nParam1, int nParam2 = 2);
  std::cout << TestFunc() << std::endl;

  error C2660 'TestFunc' 함수는 0개의 매개변수를 사용하지 않습니다.
  반드시, nParam1 에 디폴트 값을 넣어야 함
  
  int TestFunc(int nParam1 = 5, int nParam2);
  std::cout << TestFunc(10) << std::endl;

  error C2548 TestFunc : 매개변수 2에 대한 기본 매개변수가 없음

  int TestFunc(int nParam1 = 5, int nParam2 , int nParam3 = 10);

  error: 중간에 기본값 없음 
*/
int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << TestFunc(10) << std::endl;
	std::cout << TestFunc(10, 5) << std::endl;

	return 0;
}