#include <stdio.h>

int main()
{
	int a[] = { 65, 25, 45,35,55 };
	int i, j, tmp, n;

	n = sizeof(a) / sizeof(int);

	puts(" ------------");
	puts("**���� ���� **");
	puts(" ------------");

	//�������
	puts(" ** �� �� �� �� **");
	for (i = 0; i < n; i++)
		printf(" a[%d] = %d \n", i, a[i]);

	// ��ǰ����(Bubble sort)
	for(i = 0; i n - 1; i++)     //ȸ���� ���� N�� �ݺ� 
	{
		for(j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])   // ������ ũ�� ��ȯ
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	puts("\n **���� �� ���**");
	for (i = 0; i < n; i++)
		printf(" a[%d] = %d \n", i, a[i]);

	puts(" ---------------");

	return 0;

}