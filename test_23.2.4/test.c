#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//int cmp_int(const void* e1, const void* e2)
//{
//	int ret = *((int*)e2) - *((int*)e1);
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	printf("n:>");
//	scanf("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	if (arr == NULL)
//	{
//		perror("malloc");
//		return 0;
//	}
//	int i = 0, j = 0, k = 0;
//	int* tmp = (int*)malloc(n * sizeof(int));
//	if (tmp == NULL)
//	{
//		perror("malloc");
//		return 0;
//	}
//	printf("arr:>");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		tmp[i] = arr[i];
//	}
//	qsort(tmp, n, sizeof(int), cmp_int);
//	char result[10][20];
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (arr[i] == tmp[j])
//			{
//				break;
//			}
//		}
//		if (j == 0)
//		{
//			sprintf(result[i], "%s", "Gold medal");
//
//		}
//		else if (j == 1)
//		{
//			sprintf(result[i], "%s", "Sliver medal");
//		}
//		else if (j == 2)
//		{
//			sprintf(result[i], "%s", "Bronze medal");
//		}
//		else
//		{
//			sprintf(result[i], "%d", j + 1);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%s\n", result[i]);
//	}
//	free(arr);
//	arr = NULL;
//	free(tmp);
//	tmp = NULL;
//	return 0;
//}


//int main()
//{
//	char ch = '1';
//	int a = 1;
//	printf("%c\n", (char)a);
//	//printf("%c\n", a - '0' + '1');
//	return 0;
//}


//int fib(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//int numWays(int n)
//{
//	int i = 0, sum = 0;
//	if (n == 1)
//	{
//		return 1;
//	}
//	sum = fib(n - 1) + fib(n);
//	return sum;
//
//}
//
//int main()
//{
//	int n = 0;
//	printf("n:>");
//	scanf("%d", &n);
//	int sum = numWays(n);
//	printf("sum:>%d\n", sum);
//	return 0;
//}


int numberOfSteps(int num)
{
	int count = 0;
	while (1)
	{
		if (num % 2 == 0)
		{
			num = num / 2;
			count++;
			if (num == 0)
				return count;
		}
		else if (num % 2 != 0)
		{
			num = num - 1;
			count++;
			if (num == 0)
				return count;
		}
	}
}

int main()
{

}