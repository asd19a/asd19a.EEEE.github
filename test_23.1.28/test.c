#define _CRT_SECURE_NO_WARNINGS\

#include <stdio.h>

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}


//typedef struct S
//{
//	char  a : 2;
//}S;
//
//int main()
//{
//	S s = { 1 };
//	if (s.a == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}


typedef union U
{
	char a;
	int b;
}U;

int main()
{
	U u = { 1 };
	if (u.a == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}