#include "stdafx.h"
#include <iostream>

using namespace std;


/*
C++11 ���� auto ���� � �ǹ����� �ڵ�� ���� ���̽ÿ�
*/
int _tmain(int argc, _TCHAR* argv[])
{
//auto : Ÿ���� �������� �ʰ� �����Ϸ��� Ÿ���� �߷��ϵ��� �����ϴ� ������Դϴ�.


	auto  a = 2.5;
	auto  b = 3.5f;


	std::cout << "������ " << a + b << " �Դϴ�." << std::endl;


	return 0;
}
