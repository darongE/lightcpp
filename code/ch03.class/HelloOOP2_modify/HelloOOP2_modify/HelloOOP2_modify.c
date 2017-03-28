// HelloOOP2_modify.cpp : Defines the entry point for the console application.
//
#include <stdio.h>

typedef struct USERDATA
{
	int nAge;
	char szName[32];

} USERDATA;


void PrintData(USERDATA *pUser)
{
	printf("%d, %s\n", pUser->nAge, pUser->szName);
}

int main(void)
{
	USERDATA user = { 31, "Shanmei" };

	// 1 step
	//printf("%d, %s\n", user.nAge, user.szName);

	// 2 step
	PrintData(&user);

	return 0;
}