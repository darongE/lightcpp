#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int *arr = new int[5];  
	
	for(int i = 0 ; i < 5 ; ++i )
	   arr[i] = (i + 1) * 10;


	for(int i = 0 ; i < 5 ; ++i )
	   cout << arr[i] << endl;

	delete[] arr;

	return 0;
}


/*Ãâ·Â°ª
  arr[0] = 10
  arr[1] = 20
  arr[2] = 30
  arr[3] = 40
  arr[4] = 50




*/