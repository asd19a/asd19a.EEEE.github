#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//void delet(char* str,int n)
//{
//	assert(str);
//	int i = 0;
//	int len = strlen(str);
//	for (i = n; i < len - 1; i++)
//	{
//		*(str + i) = *(str + i + 1);
//	}
//	*(str + len - 1) = '\0';
//}
//
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
//			if (arr1[i] == arr2[j])
//			{
//				delet(arr1,i);
//			}
//		}
//	}
//	puts(arr1);
//	return 0;
//}


//int main()
//{
//	char src[100];
//	char target[100];
//	printf("src:>");
//	gets(src);
//	int i = 0, count = 0, j = 0;
//	int len = strlen(src);
//	for (i = 0; i < len; i++)
//	{
//		target[j] = src[i];
//		if (((i + 1) % 3) == 0)
//		{
//			target[i + 1] = ',';
//			count++;
//			j = j + 2;
//		}
//		else
//			j++;
//	}
//	target[len + count] = '\0';
//	puts(target);
//	return 0;
//}


void add(char* str, int n,int len)
{
	assert(str);
	int i = 0, j = 0;
	for (i = len; i >= n; i--)
	{
		*(str + i) = *(str + i - 1);
	}
	*(str + n) = ',';

}

int main()
{
	char arr[100];
	printf("arr:>");
	gets(arr);
	int len = strlen(arr);
	int i = 0, j = len;
	for (i = 0; i < len; i++)
	{
		if (((i + 1) % 3) == 0 && (i + 1) != len)
		{
			add(arr,i+1,j);
			j++;
			//i++;
		}
	}
	arr[j] = '\0';
	puts(arr);
	return 0;
}