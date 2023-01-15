#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <graphics.h>
#include <conio.h>



//int main()
//{
//	free(NULL);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	if (!arr)
//	{
//		perror("malloc");
//		return 0;
//	}
//	int i = 0, j = 0, count = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n ; i++)
//	{
//		count = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (arr[j] == arr[i]&&i!=j)
//			{
//				count = 1;
//				break;
//			}
//		}
//		if (count == 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	free(arr);
//	arr = NULL;
//	return 0;
//}


//char* my_strncpy(char* dest, const char* str, int n)
//{
//	assert(dest && str);
//	char* start = dest;
//	while (n--)
//	{
//		*dest = *str;
//		dest++;
//		str++;
//	}
//	*(dest + 1) = '\0';
//	return start;
//}
//
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[10]= { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	char* ret = my_strncpy(arr2, arr1, n);
//	puts(arr2);
//	return 0;
//}¡¡


//char* my_strncat(char* dest, const char* str, int n)
//{
//	assert(dest && str);
//	char* start = dest;
//	while (*dest!= '\0')
//	{
//		dest++;
//	}
//	while (n--)
//	{
//		*dest = *str;
//		dest++;
//		str++;
//	}
//	*(dest + 1) = '\0';
//	return start;
//
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char arr1[20] = "abcdef";
//	char arr2[20] = "qwerty";
//	char* ret = my_strncat(arr2, arr1, n);
//	puts(arr2);
//	return 0;
//}


//int main()
//{
//	initgraph(1000, 600,10);
//	//IMAGE picture;
//
//}


int main()
{
	
}