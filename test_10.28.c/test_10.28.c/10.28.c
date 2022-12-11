#include <stdio.h>
#include <math.h>


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int n = 0;
//	scanf_s("%d%d", &a, &b);
//	n = a > b ? a : b;
//	for (n = n; n > 0; n--)
//	{
//		if (a % n == 0 && b % n == 0)
//		{
//			printf("最大公约数=%d\n", n);
//			break;
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	for (n = 1000; n <= 2000; n++)
//	{
//		if (n % 4 == 0 && n % 100 != 0)
//		{
//			printf("%d  ", n);
//		}
//		else if (n % 400 == 0)
//		{
//			printf("%d  ", n);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	for (n=100;n<=200;n++)
//	{
//		for (i = 2; i < n; i++)
//		{
//			j = n % i;
//			if (j == 0)
//			{
//				goto again;
//			}
//		}
//		printf("%d ", n);
//	again:
//		;
//		
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a >= b && b >= c)
//	{
//		printf("%d  %d  %d  \n", a, b, c);
//	}
//	else if (a >= c && c >= b)
//	{
//		printf("%d  %d  %d  \n", a, c, b);
//	}
//	else if (b > a && a >= c)
//	{
//		printf("%d  %d  %d\n", b, a, c);
//	}
//	else if (b >= c && c >= a)
//	{
//		printf("%d  %d  %d \n", b, c, a);
//	}
//	else if (c >= a && a >= b)
//	{
//		printf("%d  %d  %d  \n", c, a, b);
//	}
//	else
//		printf("%d  %d  %d  \n", c, b, a);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	for (n = 3; n <= 100; n += 3)
//	{
//		printf("%d  ", n);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int i = 0;
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了,下标是%d\n", i);
//			break;
//		}
//		else if (i == sz - 1)
//		{
//			if (arr[i] != k)
//			{
//				printf("找不到\n");
//				break;
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf_s("%d", &k);
//	int left = 0;
//	int right= sizeof(arr) / sizeof(arr[0])-1;
//	//int mid = (left + right) / 2;
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right--;
//		}
//		else if (arr[mid] < k)
//		{
//			left++;
//		}
//		else if (arr[mid] == k)
//		{
//			printf("找到了,下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left >= right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int count = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n >= 1 && n <= 9)
//		{
//			if (n % 9 == 0)
//			{
//				count++;
//			}
//
//		}
//		else
//		{
//			int b1 = n % 10;
//			int b2 = n / 10;
//			if (b1 == 9 || b2 == 9 || b1 == 9 && b2 == 9)
//			{
//				count++;
//			}
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}


//int main()
//{
//	double i = 1;
//	int n = 0;
//	double ret = 0.0;  double sum = 0.0;
//	for (n = 1; n <= 100; n++)
//	{
//		ret = i / n;
//		sum = sum + ret;
//		i = -i;
//
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1};
//	int max = arr[0]; int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	//
//	max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void Isprime(int n)
//{
//	int i = 0;
//	for (i = 2; i <n; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("这个数不是素数\n");
//			break;
//		}
//		else
//		//	goto again;
//		if (i == n-1)
//		{
//			printf("这个数是素数\n");
//		}
//	//again:
//		;
//
//	}
//}
//
//int main()
//{
//	int a = 7;
//	//scanf_s("%d", &a);
//	Isprime(a);
//	return 0;
//}


//void Year(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//}
//
//int main()
//{
//	int year = 0;
//	scanf_s("%d", &year);
//	Year(year);
//	return 0;
//}

//void Swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//	printf("a=%d   b=%d\n", *a, *b);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d", &a, &b);
//	printf("こうかんするまえに：\n");
//	printf("a=%d   b=%d\n",a,b);
//	printf("こうかんした後で：\n");
//	Swap(&a, &b);
//	return 0;
//}

//void print(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	print(n);
//	return 0;
//}

//void print(int a)
//{
//	if (a > 9)
//	{
//		print(a / 10);
//		printf("%d  ", a % 10);
//	}
//	else
//	{
//		printf("%d ", a);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	//a = 12;
//	print(a);
//	return 0;
//}


//int fact(int n)
//{
//	if (n > 0)
//	{
//		return n * fact(n - 1);
//	}
//}
//
//int main()
//{
//	int n = 0; int i = 0;
//	scanf_s("%d", &n);
//	i=fact(n);
//	printf("%d\n", i);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int i = 0;
//	i=my_strlen(arr);
//	printf("len=%d\n", i);
//	return 0;
//	
//}


