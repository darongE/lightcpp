#include "stdafx.h"
#include <iostream>

int TestFunc(int nParam1, int nParam2 = 2)   
{
	return nParam1 * nParam2;
}


/*
  1. ��ȣ���� �Լ� �Ű������� ����Ʈ ���� �ݵ�� ������ �Ű����� ���� ���
  2. �Ű������� ���� ���� �� ���� ù��° �Ű������� ����Ʈ ���� ����Ϸ��� ������ ������
     '���' �Ű������� ���� ����Ʈ ���� ����ؾ� ��! ����� �߰��� �������� �ʵ�!
  3. ȣ���� �Լ��� ��ȣ���� �Լ� �Ű������� ���μ��� ����ϸ� �̴� ���ʺ��� 
     ¦�� ���߾� �����ϸ�, ¦�� ���� �ʴ� �Ű������� ����Ʈ ���� ����!

  <wrong code>
  int TestFunc(int nParam1, int nParam2 = 2);
  std::cout << TestFunc() << std::endl;

  error C2660 'TestFunc' �Լ��� 0���� �Ű������� ������� �ʽ��ϴ�.
  �ݵ��, nParam1 �� ����Ʈ ���� �־�� ��
  
  int TestFunc(int nParam1 = 5, int nParam2);
  std::cout << TestFunc(10) << std::endl;

  error C2548 TestFunc : �Ű����� 2�� ���� �⺻ �Ű������� ����

  int TestFunc(int nParam1 = 5, int nParam2 , int nParam3 = 10);

  error: �߰��� �⺻�� ���� 
*/
int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << TestFunc(10) << std::endl;
	std::cout << TestFunc(10, 5) << std::endl;

	return 0;
}