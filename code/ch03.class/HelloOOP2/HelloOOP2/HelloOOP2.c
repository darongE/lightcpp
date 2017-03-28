// 기존 절차지향 프로그래밍 코드
#include <stdio.h>

typedef struct USERDATA
{
	int nAge;
	char szName[32];

} USERDATA;

int main(void)
{
	USERDATA user = { 31, "SUN MI" };
	printf("%d, %s\n", user.nAge, user.szName);

	return 0;
}