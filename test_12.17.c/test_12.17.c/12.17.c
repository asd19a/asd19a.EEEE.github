#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <math.h>


//int main()
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%dx%d=%2d  ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		printf("  %d  ", i);
//	}
//	printf("\n");
//	for (i = 1; i <= 9; i++)
//	{
//		printf("  -  ");
//	}
//	printf("\n");
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			printf("  %-3d", i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		printf("  %d  ", i);
//	}
//	printf("\n");
//	for (i = 1; i <= 9; i++)
//	{
//		printf("  -  ");
//	}
//	printf("\n");
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("  %-3d", i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0, j = 0,space=0;
//	for (i = 1; i <= 9; i++)
//	{
//		printf("  %d  ", i);
//	}
//	printf("\n");
//	for (i = 1; i <= 9; i++)
//	{
//		printf("  -  ");
//	}
//	printf("\n");
//	for (i = 1; i <= 9; i++)
//	{
//		for (space = 1; space <= i - 1; space++)
//		{
//			printf("     ");
//		}
//		for (j = i; j <= 9; j++)
//		{
//			printf("  %-3d", i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}

//void reverse(char* str, int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[100];
//	gets(arr);
//	int len = strlen(arr);
//	reverse(arr, len);
//	int i = 0;
//	while (i < len)
//	{
//		while (arr[i] == ' ')
//		{
//			i++;
//			if (i == len)
//				break;
//		}
//		int left = i;
//		while (arr[i] != ' ')
//		{
//			i++;
//			if (i == len)
//				break;
//		}
//		int right = i - 1;
//		while (left < right)
//		{
//			char tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//		if (i == len)
//			break;
//	}
//	puts(arr);
//	return 0;
//}



//int main()
//{
//	char ch = 0;
//	int i = 0;
//	int letter = 0, digit = 0, space = 0, other = 0;
//	while (i < 10)
//	{
//		ch = getchar();
//		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//			letter++;
//		else if (ch >= '0' && ch <= '9')
//			digit++;
//		else if (ch == ' ')
//			space++;
//		else
//			other++;
//		i++;
//	}
//	printf("letter\tdigit\tspace\tother\n");
//	printf("  %d\t  %d\t  %d\t  %d\n", letter, digit, space, other);
//	return 0;
//}
int main()
{
	int a = 0;
	char b = 0;
	scanf("%d%c", &a, &b);
	printf("%d\n", a);
	if (b == ' ')
		printf("1");
	return 0;
}