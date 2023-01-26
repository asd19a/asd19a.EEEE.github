#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


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

//union u
//{
//	int a;
//	char b;
//};
//
//int main()
//{
//	union u U = { 1 };
//	if (U.b == 1)
//		printf("小端\n");
//	else
//		printf("小端\n");
//	return 0;
//}


typedef struct S
{
	char a : 2;

}S;

int main()
{
	S s = { 1 };
	if (s.a == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}