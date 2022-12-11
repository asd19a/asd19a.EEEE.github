#include <stdio.h>
#include <math.h>
#include <assert.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d", &a, &b);
//	int ret = a ^ b;
//	int count = 0;
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int i = 0;
//	//scanf_s("%d", &n);
//	printf("偶数位:");
//	for (i = 31; i >= 1; i = i - 2)
//	{
//		//n = ((n>>i) & 1);
//		printf("%d  ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("奇数位:");
//	for (i = 30; i >= 0; i=i-2)
//	{
//		//n = ((n >> i) & 1);
//		printf("%d  ", (n >> i) & 1);
//	}
//	return 0;
//}

//int Num(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = Num(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//
//例如：2 + 22 + 222 + 2222 + 22222
//


//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf_s("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	while (n)
//	{
//		a = i * 10 + 2;
//		sum = sum + a;
//		n--;
//		i=a;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//求出0～100000之间的所有“水仙花数”并输出。
//
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int tmp = 0;
//	int count = 0;
//	while (1)
//	{
//		tmp = i;
//		n = 1;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		
//		
//		count = n;
//		sum = 0; tmp = i;
//		while (count)
//		{
//			sum = sum + pow(tmp % 10, n);
//			tmp = tmp / 10;
//			if (sum == i)
//			{
//				printf("%d  ", i);
//			}
//			count--;
//		}
//		i++;
//		if (i > 100000)
//		{
//			break;
//		}
//			
//	}
//	return 0;
//}


//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//
//arr是一个整形一维数组。


//void print(int* str, int sz)
//{
//	assert(str != NULL);
//	int i = sz;
//	while (i)
//	{
//		printf("%d  ", *(str + sz - i));
//		i--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


//输入一个整数数组，实现一个函数，
//
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//
//所有偶数位于数组的后半部分。
//

//void P(int * const str, int sz)
//{
//	int i = 0;
//	int j = 0;
//	int* tmp = str;
//	for (i = 0; i < sz; i++)
//	{
//		if (*(tmp + i) % 2 == 1)
//		{
//			*(tmp + j) = *(tmp + i);
//			j++;
//		}
//		
//		
//	}
//	j = sz / 2 ;
//	for (i = 0; i < sz; i++)
//	{
//		if (*(str + i) % 2 == 0)
//		{
//			*(str + j) = *(str + i);
//			j++;
//		}
//
//		
//	}
//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	P(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}



void P(int* str, int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;
	while (left < right)
	{
		while (*(str + left) % 2 == 1)
		{
			left++;
		}
		while (*(str + right) % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			tmp = *(str + left);
			*(str + left) = *(str + right);
			*(str + right) = tmp;
		}
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	P(arr, sz);
	for (i = 0; i < sz; i++)
	{
		
		printf("%d  ", arr[i]);
		
	}
	return 0;
}