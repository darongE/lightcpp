#include "stdafx.h"
#include <iostream>

using namespace std;


/*
 int�� ���� ���� ������ �Ű������� �ް�, �� ������ ���� ��ȯ�ϴ� �Լ��� �ۼ��ϼ���.
 �Լ� ������ void Swap(int &a, int &b) �Դϴ�.
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

	std::cout << "������ x : " << x << ", "
			  << "y : " << y << std::endl;

	Swap(x, y);

	std::cout << "������ x : " << x  << ", "
			  << "y : " << y << std::endl;


	return 0;
}
