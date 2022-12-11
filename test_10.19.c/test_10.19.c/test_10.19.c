#include <stdio.h>

//穷举法求最大公约数

//int MIN(int a, int b)
//{
//	if (a > b)
//	{
//		return b;
//	}
//	else
//	{
//		return a;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	scanf_s("%d%d", &a, &b);
//	t = MIN(a, b);
//	for (t = t; t > 0; t--)
//	{
//		if (a % t == 0 && b % t == 0)
//		{
//			printf("最大公约数=%d", t);
//			break;
//		}
//
//
//	}
//	
//
//	return 0;
//}

//欧几里得算法(辗转相除法)求最大公约数

//int Gcd(int a, int b)
//{
//	int r = 0;
//	r = a % b;
//	while(r != 0)
//	{
//		a = b;
//		b = r;
//		r = a % b;
//	}
//	return b;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int z = 0;
//	scanf_s("%d%d", &a, &b);
//	z = Gcd(a, b);
//	printf("最大公约数=%d", z);
//
//
//	return 0;
//}

//递归法求最大公约数(编写中）


//int Gcd(int a, int b)
//{
//	int x = 0;
//	if (a > b)
//	{
//
//
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d", &a, &b);
//	return 0;
//}


//穷举法求最小公倍数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int n = 0;
//	scanf_s("%d%d", &a, &b);
//	for (n = 1; n > 0; n++)
//	{
//		if (n % a == 0 && n % b == 0)
//		{
//			printf("最小公倍数=%d", n);
//			break;
//		}
//	}
//
//	return 0;
//
//}

//从1到n之间所有数的阶乘


//int FACT(int x)
//{
//	int a = 0;
//	int b = 1;
//	for (a = 1; a <= x; a++)
//	{
//		b = b * a;
//	}
//	return b;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	long fact = 0;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		fact = FACT(i);
//		printf("%d的阶乘=%ld\n", i, fact);
//
//	}
//	return 0;
//}


//计算并输出1!+2!+3!+...+n!的值


//long FACT(int x)
//{
//	int a = 0;
//	long b = 1;
//	for (a = 1; a <= x; a++)
//	{
//		b = b * a;
//	}
//	return b;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	long sum1 = 0;
//	long sum = 0;
//	printf("n=");
//	scanf_s("%d", &n);
//	for (m = 1; m <= n; m++)
//	{
//		sum1 = FACT(m);
//		sum = sum + sum1;
//	}
//	printf("sum=%ld\n", sum);
//	return 0;
//
//}