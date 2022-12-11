#include <stdio.h>



//int max(int x, int y)
//{
//	int z = 0;
//	if (x > y)z = x; else z = y;
//	
//	return z;
//}

	/*int a, b, sum;
		a = 123; b = 456;
		sum = a + b;
		printf("sum is %d\n", sum);*/
	/*int a, b, c;
	printf("intput a&b:");
	scanf_s(" %d%d", &a, &b);
	c = max(a, b);
	printf("max=%d\n", c);*/
	
	
//int arr[3] = { 0 };
//	int i = 0;
//	int j = 0;
//	int input = 0;
//	for (i = 0; i < 3; i++)
//	{
//		 j = scanf_s("%d", &input);
//		arr[i] = j;
//	}
//	int max = arr[0];
//	for (i = 0; i < 3; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
	/*int a = 0; scanf_s("%d", &a);
	int b = 0; scanf_s("%d", &b);
	int c = 0; scanf_s("%d", &c);*/
	/*int a, b; float  y;
	char c1, c2;
	scanf_s("a=%db=%d", &a, &b);
	scanf_s("%f%e", &a, &y);
	scanf_s("%c%c", &c1, &c2);
	printf("a=%d,b=%d\ny=%f\nc1=%c,c2=%c\n", a, b, y, c1, c2);*/



int main()
{
	//int i, j, m, n;
	//i = 8; j = 10;
	//m = ++i;
	//n = j++;
	//m = i++;
	//n = ++j;
	//printf("%d,%d,%d,%d\n", i, j, m, n);
	//printf("%d,%d,%d,%d\n", i, j,i++,j++);
	//printf("%d,%d\n", ++i, ++j);
	//printf("%d,%d\n", i++,j++);
	int i, j, m = 0, n = 0;
	i = 8;
	j = 10;
	m += i++;
	n -= --j;
	printf("i=%d,j=%d,m=%d,n=%d\n", i, j, m, n);
	return 0;
}
