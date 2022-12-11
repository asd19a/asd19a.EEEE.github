#include <stdio.h>
#include <math.h>


//int MIN(int a, int b, int c)
//{
//	if (a < b && a < c)
//	{
//		return a;
//	}
//	else if (b < a && b < c)
//	{
//		return b;
//	}
//	else
//	{
//		return c;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int min = 0;
//	scanf_s("%d%d%d", &a, &b, &c);
//	min = MIN(a, b, c);
//	printf("min=%d\n", min);
//
//	return 0;
//}
//long L_F(int a)
//{
//	long x = 0;
//	x = pow(a, 3);
//	return x;
//}
//
//
//
//int main()
//{
//	int a = 0;
//	long l_f = 0;
//	scanf_s("%d", &a);
//	l_f = L_F(a);
//	printf("L_F=%ld\n", l_f);
//
//	return 0;
//}
//long SUM(int n)
//{
//	long m = 0;
//	long x = 0;
//	for (m = 1; m <= n; m++)
//	{
//		x = x + m;
//		
//	}
//	return x;
//}
////ÍõÆ¼316123054
////ÕÅºìÑÞ249040696
//int main()
//{
//	int n = 0;
//	long sum = 0;
//	scanf_s("%d", &n);
//	sum = SUM(n);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	for (n = 1000; n <= 9999; n++)
//	{
//		int b1 = n / 1000;
//		int b2 = (n - 1000 * b1) / 100;
//		int b3 = (n - 1000 * b1 - 100 * b2) / 10;
//		int b4 = n % 10;
//		int a = sqrt(n);
//		int b5 = n % a;
//		if (b1 == b2 && b3 == b4 && b1 != b3 && b5 == 0)
//		{
//			printf("%d   ", n);
//		}
//	}
//
//
//
//
//
//	return 0;
//}
int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	int sum = 0;
	//scanf_s("%d", &n);
	for (n=1;n<=3;n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	//printf("%dµÄ½×³Ë=%d", n, ret);
	printf("sum=%d\n", sum);
	return 0;
}