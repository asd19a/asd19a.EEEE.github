#include <stdio.h>
#include <math.h>
#include <string.h>

//int main()
//{
//	int a = 0;
//	int n = 0;
//	printf("ÇëÊäÈë:>\n");
//	//printf("a=%d   n=%d\n", a, n);
//	scanf_s("%d%d", &a,&n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//
//	return 0;
//}



//int ARR(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		return *(p+i);
//	}
//
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int i = 0;
//	//ARR(p, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", *(p + i));
//	}
//	return 0;
//}


//i/*nt main()
//{
//	long n = 0;
//	for (n = 0; n <= 100000; n++)
//	{
//		if (n >= 0 && n <= 9)
//		{
//			int b1 = n % 10;
//			if (pow(b1, 1) == n)
//			{
//				printf("%ld  ", n);
//			}
//		}
//		else if (n >= 10 && n <100)
//		{
//			int b1 = n / 10;
//			int b2 = (n - b1 * 10);
//			if (pow(b1, 2) + pow(b2, 2) == n)
//			{
//				printf("%ld  ", n);
//			}
//		}
//		else if(n>=100&&n<1000)
//		{
//			int b1 = n / 100;
//			int b2 = (n - b1 * 100) / 10;
//			int b3 = n % 10;
//			if (pow(b1, 3) + pow(b2, 3) + pow(b3, 3) == n)
//			{
//				printf("%ld  ", n);
//			}
//		}
//		else if (n >= 1000 && n < 10000)
//		{
//			int b1 = n / 1000;
//			int b2 = (n - b1 * 1000) / 100;
//			int b3 = (n - b1 * 1000 - b2 * 100) / 10;
//			int b4 = n % 10;
//			if (pow(b1, 4) + pow(b2, 4) + pow(b3, 4) + pow(b4, 4) == n)
//			{
//				printf("%ld  ", n);
//			}
//		}
//		else if (n >= 10000 && n <= 100000)
//		{
//			int b1 = n / 10000;
//			int b2 = (n - 10000 * b1) / 1000;
//			int b3 = (n - 10000 * b1 - 1000 * b2) / 100;
//			int b4 = (n - 10000 * b1 - 1000 * b2 - 100 * b3) / 10;
//			int b5 = n % 10;
//			if (pow(b1, 5) + pow(b2, 5) + pow(b3, 5) + pow(b4, 5) + pow(b5, 5) == n)
//			{
//				printf("%ld  ", n);
//			}
//
//		}
//	}
//
//	return 0;
//}*/



void reverse(char* arr,int  str)
{

}


int main()
{
	char arr[] = "hello world";
	char* p = arr;
	int str = strlen(arr)-1;
	int* pend = p + str - 1;
	int i = 0;
	for (i=0;i<=str;i++)
	{
		int* pend = p + str - i;
		printf("%c", *pend);
	}
	//reverse(arr, str);
	return 0;
}