#include <stdio.h>


//int main()
//{
//	//int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		j = i % 10;
//		printf("j=%d\n", j);
//	}
//	return 0;
//}

//int Num(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}


//int Num(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n>>i)&1)==1)
//		{
//			count++;
//		}
//	}
//	return count;
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
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = Num(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//int Num(int i, int j)
//{
//	int count = 0;
//	while (i||j)
//	{
//		if ((i & 1) != (j & 1))
//		{
//			count++;
//		}
//		i = i >> 1;
//		j = j >> 1;
//		
//	}
//	return count;
//}


//int Num(int i, int j)
//{
//	int ret = i ^ j;
//	int count = 0;
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf_s("%d%d", &i, &j);
//	int ret = Num  (i, j);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	printf("偶数位:>");
//	for (i = -2; i < 32; i++)
//	{
//		n >>(i + 2);
//		ret = n % 2;
//		printf("%d  ",ret);
//		
//	}
//	printf("\n");
//	printf("奇数位:>");
//	for (i = -1; i < 32; i++)
//	{
//		n >> (i + 2);
//		ret = n % 2;
//		printf("%d  ", ret);
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf_s("%d", &n);
//	for (i = 31; i >= 1; i = i - 2)
//	{
//		printf("%d  ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i = i - 2)
//	{
//		printf("%d  ", (n >> i) & 1);
//	}
//	return 0;
//}


int main()
{
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d,b=%d\n", a, b);
	return 0;
}