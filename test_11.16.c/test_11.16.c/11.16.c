#include <stdio.h>
#include <math.h>
#include <string.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入:>");
//	scanf_s("%d%d", &a, &b);
//	int x = a > b ? a : b;
//	int i = 0;
//	for (i = x; ;i++)
//	{
//		if ((i % a == 0) && (i % b == 0))
//		{
//			printf("最小公倍数x=%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "I like beijing.";
//	int i = 0;
//	char* str = arr;
//	int len = strlen(arr);
//	char tmp = 0;
//	int j = 0;
//	for (j = 0; j < len; j++)
//	{
//		for (i = 0; i < len; i++)
//		{
//			if (*(str + i) >= 'a' && *(str + i) <= 'z' && *(str + i) >= 'A' && *(str + i) <= 'Z')
//			{
//				*(str + len - 1) = *(str + i);
//				len--;
//			}
//		}
//		j = i;
//	}
//	printf("%s\n", str);
//	return 0;
//}

////void reverse(char* left, char*right)
////{
////	
////	while (left < right)
////	{
////		char tmp = *left;
////		*left = *right;
////		*right = tmp;
////		left++;
////		right--;
////	}
////}


////int main()
////{
////	char arr[100] = { 0 };
////	gets_s(arr,100);
////	int len = strlen(arr);
////	reverse(arr, arr+len-1);
////	//printf("%s\n", arr);
////	char* start = arr;
////	while (*start)
////	{
////		char* end = start;
////		if (*end != ' ' && *end != '\0')
////		{
////			end++;
////		}
////		reverse(start, end - 1);
////		printf("%s\n", arr);
////		if (*end == ' ')
////		{
////			start = end + 1;
////		}
////		else
////			start = end;
////	}
////	printf("%s\n", arr);
////	
////	return 0;
////}


//void reverse(char* left, char* right)
//{
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets_s(arr, 100);
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		if (end != ' ' && end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end == ' ')
//		{
//			start = end + 1;
//		}
//		else
//		{
//			start = end;
//		}
//	}
//	printf("%s\n", arr);
//	return 0;
//
//}

//int main()
//{
//	char* str1 = "ha";
//	char* str2 = "ha";
//	if (str1 == str2)
//		printf("1\n");
//	else
//		printf("0\n");
//	return 0;
//}


int main()
{
	int a[] = { 1,2,3,4,5 };
	int b[] = { 2,3,4,5,6 };
	int c[] = { 3,4,5,6,7 };
	int* arr[3] = { a,b,c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			//printf("%d  ", *(arr[i] + j));
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}