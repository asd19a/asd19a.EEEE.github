#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <string.h>
#include <assert.h>


//void print(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//
//	}
//}
//
//int main()
//{
//	system("color 9E");
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	printf("ÇëÊäÈëa,n:>");
//	scanf_s("%d%d", &a, &n);
//	int i = 0; int b = 0;
//	for (i = 1; i <= n; i++)
//	{
//		
//		b = b * 10 + a;
//		sum = sum + b;
//	}
//	printf("sum=%d\n", sum);
//	return  0;
//}


//void print(int* str, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", *(str + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	print(arr, 10);
//	return 0;
//}
//
//long Z_m(long i)
//{
//	int n = 1;
//	long tmp = i;
//	long sum = 0;
//	while (tmp/ 10 != 0)
//	{
//		tmp = tmp / 10;
//		n++;
//	}
//	tmp = i;
//	for (int j = 1; j <= n;j++)
//	{
//		int ret = pow(tmp % 10, n);
//		tmp = tmp / 10;
//		sum = sum + ret;
//	}
//	if (sum == i)
//	{
//		return 1;
//	}
//
//}
//
//int main()
//{
//	long i = 0;
//	long j = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		 j=Z_m(i);
//		if (j == 1)
//		{
//			printf("%ld  ", i);
//		}
//	}
//	return 0;
//}


void reverse(char *left,char*right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[20] = { 0 };
	gets_s(arr, 20);
	int len = strlen(arr);
	reverse(arr, arr+len-1);
	printf("%s", arr);
	return 0;
}