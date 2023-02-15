#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <ctype.h>



//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//
//int main()
//{
//	int i = 0, j = 0;
//	int arr[10] = { 3,5,1,4,7,2,9,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - i-1; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}


//void change(int n)
//{
//	int k = 0;
//	if ((k = n / 10) != 0)
//	{
//		change(k);
//	}
//	putchar(n % 10 + '0');
//	putchar(' ');
//}
//
//int main()
//{
//	int n = 0;
//	printf("n:>");
//	scanf("%d", &n);
//	int flag = 0;
//	if (n < 0)
//	{
//		flag = 1;
//		n = -n;
//		change(n);
//	}
//	else
//		change(n);
//	return 0;
//}

//static int j = 0;
//
//void change(int k,char arr[])
//{
//	int i = 0;
//	//static int j = 0;
//	if ((i = k / 10) != 0)
//	{
//		change(i,arr);
//	}
//	arr[j++] = k % 10 + '0';
//	
//}
//
// 
// 
// 实验 8 （2）
// 
// 递归法
//int main()
//{
//	int k = 0;
//	printf("n:>");
//	scanf("%d", &k);
//	int tmp = fabs(k), n = 0;
//	int flag = 0;
//	while (tmp)
//	{
//		n++;
//		tmp = tmp / 10;
//	}
//	char* arr = (char*)calloc(n + 1, sizeof(char));
//	if (arr == NULL)
//	{
//		perror("calloc");
//		return 0;
//	}
//	if (k < 0)
//	{
//		flag = 1;
//		//arr[0] = '-';
//	}
//	change(fabs(k),arr);
//	arr[j] = '\0';
//	if (flag == 1)
//		printf("-");
//	puts(arr);
//	free(arr);
//	arr = NULL;
//	return 0;
//
//}

//非递归法

//void change(int k,int n, char *arr)
//{
//	assert(arr);
//	int i = 0, j = 0;
//	*(arr + n) = '\0';
//	for (i = n - 1; i >= 0; i--)
//	{
//		*(arr + i) = k % 10+'0';
//		k = k / 10;
//	}
//
//
//}
//
//int main()
//{
//	int k = 0;
//	printf("k;>");
//	scanf("%d", &k);
//	int n = 0, tmp = fabs(k);
//	int flag = 0;
//	while (tmp)
//	{
//		n++;
//		tmp = tmp / 10;
//	}
//	char* arr = (char*)calloc(n + 1, sizeof(char));
//	if (arr == NULL)
//	{
//		perror("calloc");
//		return 0;
//	}
//	if (k < 0)
//		flag = 1;
//	change(fabs(k),n, arr);
//	if (flag == 1)
//		printf("-");
//	puts(arr);
//	free(arr);
//	arr = NULL;
//	return 0;
//}

//(3)

//void tongji(char* str, int arr[])
//{
//	assert(str);
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < len; i++)
//	{
//		if (isalpha(*(str + i)) > 0)
//			arr[0]++;
//		else if (isdigit(*(str + i)) > 0)
//			arr[1]++;
//		else if (isspace(*(str + i)) > 0)
//			arr[2]++;
//		else
//			arr[3]++;
//	}
//}
//
//int main()
//{
//	char arr1[100];
//	printf("arr1:>");
//	gets(arr1);
//	int arr2[4] = { 0 };
//	tongji(arr1, arr2);
//	printf("字母   数字   空格   其他\n");
//	printf("%-7d%-7d%-7d%-7d\n", arr2[0], arr2[1], arr2[2], arr2[3]);
//	return 0;
//}


//(4)


//int Max(int m, int n)
//{
//	int i = 0;
//	int ret = m < n ? m : n;
//	for (i = ret; i > 0; i--)
//	{
//		if (m % i == 0 && n % i == 0)
//			return i;
//	}
//	
//}
//
//int Min(int m, int n)
//{
//	int i = 0;
//	int ret = m > n ? m : n;
//	for (i = ret;; i++)
//	{
//		if (i % m == 0 && i % n == 0)
//			return i;
//	}
//}
//
//int main()
//{
//	int m = 0, n = 0;
//	printf("m,n;>");
//	scanf("%d%d", &m, &n);
//	int (*pf[2])(int ,int) = {Max,Min};
//	printf("最大公约数:> %d\t最小公倍数:> %d\n", pf[0](m,n), pf[1](m,n));
//	return 0;
//
//}


//int max = 0;
//int min = 0;

//void Max(int m, int n)
//{
//	int i = 0;
//	int ret = m < n ? m : n;
//	for (i = ret; i > 0; i--)
//	{
//		if (m % i == 0 && n % i == 0)
//		{
//			max = i;
//			break;
//		}
//	}
//	
//}
//
//void Min(int m, int n)
//{
//	int i = 0;
//	int ret = m > n ? m : n;
//	for (i = ret;; i++)
//	{
//		if (i % m == 0 && i % n == 0)
//		{
//			min = i;
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int m, n;
//	printf("m,n:>");
//	scanf("%d%d", &m, &n);
//	Max(m, n);
//	Min(m, n);
//	printf("最大公约数:> %d\t最小公倍数:> %d\n", max,min);
//	return 0;
//}