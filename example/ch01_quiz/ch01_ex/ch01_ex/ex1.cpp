
#include "stdafx.h"
#include <iostream>

using namespace std;


/*
  �ڽ��� �̸��� ���̸� �Է¹ް� "�����̸��� ȫ�浿�̰�, 20���Դϴ�." ��� ����ϱ�
  �ݵ��, std::cout , std::cin �̿�
*/
int _tmain(int argc, _TCHAR* argv[])
{
	char sName[32];
	int nAge = 0;
	std::cout << "type your name & age: " << std::endl;
	std::cin >> sName >> nAge;

	std::cout << "���� �̸��� " << sName << "�̰�,"
		<< nAge << "�Դϴ�." << std::endl;


    return 0;
}

