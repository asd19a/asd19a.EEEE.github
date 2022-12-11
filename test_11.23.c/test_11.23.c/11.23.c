#include <stdio.h>
#include <math.h>

//int main()
//{
//	char arr[10] = { 0 };
//	gets_s(arr, 10);
//	int i = 0;
//	char max = arr[0];
//	for (i = 0; i < 20; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%cn", max);
//	return 0;
//}


//int main()
//{
//	int c1, c2;
//	c1 = 197;
//	c2 = 198;
//	printf("%c  %c\n", c1, c2);
//	printf("%d  %d\n", c1, c2);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	float x, y;
//	char c1, c2;
//	scanf_s("a=%db=%d", &a, &b);
//	scanf_s("%f%e", &x, &y);
//	scanf_s("%c%c", &c1, &c2);
//	return 0;
//}


//int main()
//{
//	//int i, j;
//	//i = 8;
//	//j = 10;
//	//m = ++i;
//	//n = j++;
//	//m = i++;
//	//n = ++j;
//	//printf("%d,%d,%d,%d\n", i, j, m, n);
//	//printf("%d,%d\n", i++, j++);
//	//printf("%d,%d\n", ++i,++j);
//	//printf("%d,%d,%d,%d\n", i, j, i++, j++);
//	int i, j, m = 0, n = 0;
//	i = 8; j = 10;
//	m += i++;
//	n -= --j;
//	printf("i=%d,j=%d,m=%d,n=%d\n", i, j, m, n);
//	return 0;
//}

int main()
{
	double r = 0;
	const int n = 10;
	printf("请输入年增长率:>");
	scanf_s("%lf", &r);
	double p = 0;
	p = pow(1.0 + r, n);
	printf("增长百分比p=%lf\n", p);
	return 0;

}