#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//int main()
//{
//	long n = 0;
//	printf("n:>");
//	scanf("%ld", &n);
//	char arr[15] = { 0 };
//	int i = 0, j = 1;
//	int count = 0;
//	while (n)
//	{
//		if (i != 0 && count % 3 == 0&&count!=0)
//		{
//			arr[i++] = ',';
//		}
//		arr[i++] = n % 10 + '0';
//		n = n / 10;
//		count++;
//	}
//	for (j = i - 1; j >= 0; j--)
//	{
//		printf("%c", arr[j]);
//	}
//	return 0;
//}


//int main()
//{
//	char arr1[100];
//	char arr2[100];
//	printf("arr1:>");
//	gets(arr1);
//	printf("arr2:>");
//	gets(arr2);
//	int i = 0, j = 0;
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	for (i = 0; i < len1; i++)
//	{
//		for (j = 0; j < len2; j++)
//		{
//			if (strchr(arr2,arr1[i]) == NULL)
//			{
//				printf("%c", arr1[i]);
//				break;
//			}
//		}
//	}
//	return 0;
//}