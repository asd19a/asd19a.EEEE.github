#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//int main()
//{
//	int n = 0;
//	int i = 0, j = 0;
//	int space = 0;
//	int tmp = 0;
//	int flag = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		tmp = n;
//		//打印上半部分
//		for (i = 1; i <= n / 2; i++)
//		{
//			//打印空格
//			for (space = 0; space <= i - 1; space++)
//			{
//				printf(" ");
//			}
//			for (j = 1; j <= tmp; j++)
//			{
//				if (j == 1 || j == tmp)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//			tmp = tmp - 2;
//		}
//		//打印中间部分
//		if (n % 2 == 1)
//		{
//			for (space = 1; space <= (n / 2 + 1); space++)
//			{
//				printf(" ");
//			}
//			flag = n - 1;
//			printf("*");
//			printf("\n");
//		}
//		else
//		{
//			flag = n;
//		}
//		tmp = 2+n%2;
//		//打印下半部分
//		int tmp1 = n / 2;
//		for (i = n / 2; i < flag; i++)
//		{
//			//打印空格
//			for (space = 0; space <= tmp1-1; space++)
//			{
//				printf(" ");
//			}
//			for (j = 1; j <= tmp; j++)
//			{
//				if (j == 1 || j == tmp)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//			tmp = tmp + 2;
//			tmp1--;
//		}
//	}
// return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 0, j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//					printf("*");
//				else if (i + j == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int cmp_int(const void* e1, const void* e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}
//
//int main()
//{
//	int arr[7] = { 0 };
//	int n = 0;
//	for (n = 0; n < 7; n++)
//	{
//		scanf("%d", &arr[n]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	/*int min = arr[0];
//	int max = arr[sz - 1];*/
//	double sum = 0, ave = 0;
//	for (n = 1; n < sz - 1; n++)
//	{
//		sum = sum + arr[n];
//	}
//	ave = sum / (sz-2);
//	printf("ave=%.2f\n", ave);
//	return 0;
//}


//int main()
//{
//	int year = 0, month = 0;
//	while (scanf("%d %d", &year, &month))
//	{
//		
//		if (month == 2)
//		{
//			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//			{
//				printf("29\n");
//			}
//			else
//			{
//				printf("28\n");
//			}
//		}
//		else if (month == 4 || month == 6 || month == 9 || month == 11)
//		{
//			printf("30\n");
//		}
//		else
//			printf("31\n");
//	}
//	return 0;
//}



int cmp_int(const void* e1, const void* e2)
{
	return *((int*)e1) - *((int*)e2);
}
void print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int* arr = (int*)calloc(n+1, sizeof(int));
	if (arr == NULL)
	{
		perror("main");
		return 0;
	}
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	scanf("%d", &arr[n]);
	qsort(arr, n + 1, sizeof(arr[0]), cmp_int);
	print(arr, n + 1);
	free(arr);
	arr = NULL;
	return 0;
}