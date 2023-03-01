#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//int fun(int a[], int n, int x)
//{
//	int* p = a;
//	while (p < a + n && *p != x)
//	{
//		p++;
//	}
//	if (p < a + n)
//		return p - a;
//	else
//		return -1;
//}
//
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", fun(a, 10, 10));
//	return 0;
//}


//int main()
//{
//	struct t
//	{
//		int x;
//		int y;
//	}a[2] = { 4,3,2,1 };
//	printf("%d\n", a[0].y / a[0].x * a[1].x);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 3 / 4);
//	printf("%f\n", 3.0 / 4);
//	printf("%d\n", 3 / 2);
//	return 0;
//}


//int f(int n)
//{
//	int c;
//	if (n == 1)
//		c = 10;
//	else
//		c = f(n - 1) + 3;
//	printf("%d\n", c);
//	return c;
//}
//
//int main()
//{
//	f(3);
//	return 0;
//}


//int main()
//{
//	int i, j, t, m;
//	scanf("%d", &t);
//	if (t < 0)
//		t = -t;
//	for (j = 2, m = t; j <= t; j++)
//	{
//		while (m % j == 0)
//		{
//			printf("%d ", j);
//			m = m / j;
//		}
//		if (m == 1)
//			break;
//		printf("\n");
//	}
//	return 0;
//}


int main()
{
	char a, b, c, d;
	scanf("%c%c", &a, &b);
	c = getchar();
	d = getchar();

	putchar(c);
	putchar(d);
	return 0;
}