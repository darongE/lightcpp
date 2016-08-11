#include "stdafx.h"
#include <iostream>

using namespace std;


/*
   int aList[5] = { 10, 20, 30, 40, 50};
   오름차순으로 정렬한 후 ,결과 출력하기 <for문 사용>
*/


//void Swap(int &a, int &b)
//{
//	int nTmp(a);
//	a = b;
//	b = nTmp;
//}
// Bubble sort 

// 

#if !defined(ARRAY_SIZE)
#define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))
#endif


void SwapNum(int* pList, int nCount)
{
	int tmp = 0;
	
	for (int i =0 ; i < nCount -1 ; i++)
	{
		for (int j = 0 ; j < nCount - 1 - i ; j++ )
		{
			if (pList[j] > pList[j + 1])
			{
				tmp = pList[j];
				pList[j] = pList[j + 1];
				pList[j + 1] = tmp;
			}
		}
	}

}

int _tmain(int argc, _TCHAR* argv[])
{ 
	int aList[5] = { 20, 30, 50, 10, 40 };
	int idx = 0;

	int nSize = sizeof(aList) / sizeof(int);

	cout << "원본 출력" << endl;
	for (auto n : aList)
		cout << n << ' ';

	cout << endl;


	SwapNum(aList, nSize);
	cout << "오름 차순 출력" << endl;

	for (auto n : aList)
		cout << n << ' ';

	cout << endl;

	return 0;
}
