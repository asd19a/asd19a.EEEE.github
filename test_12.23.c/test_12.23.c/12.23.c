#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <math.h>


//int main()
//{
//	/*float a = 5.5f;
//	int* p = (int*)&a;
//	printf("a=%f\n", a);
//	printf("int*p=%d\n", *p*/);
//
//
//
//
//	/*int a = 9;
//	float* p = (float*)&a;
//	printf("a=%d\n", a);
//	printf("*p=%.64f\n", *p);*/
//
//
//
//
//
//
//	/*float a = 4.2f;*/
//
//
//
//
//
//
//
//
//	return 0;
//}



int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 2,3,4,5,6 };
	int c[5] = { 3,4,5,6,7 };
	int* parr[3] = { a,b,c };
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d  ", *(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}