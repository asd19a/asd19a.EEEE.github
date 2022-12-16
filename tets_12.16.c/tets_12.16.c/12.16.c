#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <windows.h>
//#include <system.h>



//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* p = &a;
//	//p = 0x005361AF;
//	*p = 20;
//	printf("%d\n", a);
//	printf("%p\n", p);
//	return 0;
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
//
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
//		for (; arr[i] == ' '; i++)
//		{
//			;
//		}
//		int left = i;
//		for (; arr[i] != ' '; i++)
//		{
//			;
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
//	}
//	puts(arr);
//	return 0;
//}


//int main()
//{
//	system("color 9E");
//	printf("hello\n"); Sleep(1000);
//	printf("hello\n"); Sleep(1000);
//	printf("hello\n"); Sleep(1000);
//	printf("hello\n"); Sleep(1000);
//	return 0;
//}


//int main()
//{
//	/*char arr[6] = "abcde";
//	char* p = strchr(arr, 'h');
//	printf("%p\n", p);*/
//	/*printf("%d  %c\n", *p, *p);
//	int i = 0;
//	for (i = 0; i < strlen(arr); i++)
//	{
//		if (arr[i] == *p)
//		{
//			printf("找到了,下标是%d\n", i);
//		}
//	}*/
//	char arr[] = "123456";
//	char* p = strchr(arr, '4');
//	printf("%d  %c\n", *p, *p);
//	return 0;
//}


//void Swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//int main()
//{
//	int arr[6] = { 1,6,2,5,3,4 };
//	int i = 0, j = 0;
//	int min = 0;
//	for (i = 0; i < 5; i++)
//	{
//		min = i;
//		for (j = i + 1; j < 6; j++)
//		{
//			if (arr[j] > arr[min])
//			{
//				min = j;
//			}
//		}
//		if (min != i)
//		Swap(&arr[min], &arr[i]);
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}



//杨辉三角

//int main()
//{
//    int rows, coef = 1, space, i, j;
//
//    printf("行数: ");
//    scanf("%d", &rows);
//
//    for (i = 0; i < rows; i++)
//    {
//        for (space = 1; space <= rows - i; space++)
//            printf("  ");
//
//        for (j = 0; j <= i; j++)
//        {
//            if (j == 0 || i == 0)
//                coef = 1;
//            else
//                coef = coef * (i - j + 1) / j;
//
//            printf("%4d", coef);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

/// <summary>
/// 组合数
/// </summary>
/// <param name="n"></param>
/// <param name="m"></param>
/// <returns></returns>
//int Gulid(int n, int m)
//{
//	int i = 0, ret1 = 1, ret2 = 1,tmp=0;
//	for (i = n;tmp<m; i--)
//	{
//		ret1 = ret1 * i;
//		tmp++;
//	}
//	for (i = 1; i <= m; i++)
//	{
//		ret2 = ret2 * i;
//	}
//	return ret1 / ret2;
//}
////
////
//int main()
//{
//	int i = 0, j = 0, space = 0, row = 0;
//	printf("请输入行数:>");
//	scanf("%d", &row);
//	for (i = 0; i < row; i++)
//	{
//		for (space = 1; space <= row - i; space++)
//			printf("  ");
//		for (j = 0; j <= i; j++)
//		{
//			printf("%4d", Gulid(i, j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	//printf("%d", Gulid(5, 2));
//	/*int i = 0, j = 0;
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			int ret = Gulid(i, j);
//			printf("%d  ", ret);
//		}
//		printf("\n");
//	}*/
//	return 0;
//}


//弗洛伊德三角形

//int Sum(int n)
//{
//	int i = 0, sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum + i;
//	}
//	return sum;
//}
//
//int main()
//{
//	int i = 0, j = 1,row=0,n=1,tmp=0,count=1;
//	printf("请输入行数:>");
//	scanf("%d", &row);
//	int sum = Sum(row);
//	for (i = 1; i <= sum; i++)
//	{
//		
//		count = 1;
//		for (; count<= n; j++)
//		{
//			printf("%d   ", j);
//			count++;
//		}
//		//i = j;
//		printf("\n");
//		n++;
//	}
//	return 0;
//
//}


//正/倒直角三角形

//int main()
//{
//	int i = 0, j = 0, row = 0;
//	printf("请输入行数:>");
//	scanf("%d", &row);
//
//	//正直角三角形
//	for (i = 1; i <= row; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}

	//倒直角三角形
	/*for (i = row; i > 0; i--)
	{
		for (j = i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}*/
//	return 0;
//}


//金字塔/正三角形
//int main()
//{
//	int i = 0, j = 0, row = 0,space=0;
//	printf("请输入行数:>");
//	scanf("%d", &row);
//	for (i = 0; i < row; i++)
//	{
//		for (space = 1; space < row - i; space++)
//		{
//			printf("  ");
//		}
//		for (j = 1; j <= (2*(i+1) - 1); j++)
//		{
//			printf(" *");
//		}
//		printf("\n");
//	}
//	return 0;
//}



////int main()
////{
////	printf("            汪          汪汪汪汪汪汪汪   ")
////}



#include <winsock.h>

int main()
{
	
	char a[100];
	int i=0, letter=0, space=0, digit=0, other=0;
	gets(a);
	int len = strlen(a);
	while (i<len)  
	{
		if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')
		{
			letter++;
		}
		else if (a[i] >= '0' && a[i] <= '9')
		{
			digit++;
		}
		else if (a[i] == ' ')
		{
			space++;
		}
		else
		{
			other++;
		}
			
		i++;

	}
	printf("%d%d%d%d", letter, space, other, digit);
	return 0;
}



