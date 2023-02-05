#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	char arr[3][4] = { 0 };
	char* parr = arr[0];
	char** pparr = &parr;
	char i = 0;
	*pparr[0] = 'a';  //  *pparr[0]=arr[0][0] ?
	//puts(arr[0]);
	return 0;
}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	printf("%d\n", **ppa);
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	int b = 100;
//	*ppa = &b;
//	printf("%d\n", **ppa);
//	return 0;
//}