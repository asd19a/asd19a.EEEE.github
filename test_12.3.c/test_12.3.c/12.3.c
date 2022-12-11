#include <stdio.h>
#include <math.h>


//int MAX(int a, int b)
//{
//	int max = a > b ? a : b;
//	return max;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	int max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i = i + 3)
//	{
//		printf("%d  ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0, x = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf_s("%d", &x);
//		arr[i] = x;
//	}
//	int max = arr[0];
//	for (i = 0; i < 2; i++)
//	{
//		for (x = i + 1; x < 3; x++)
//		{
//			if (arr[i] < arr[x])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[x];
//				arr[x] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 100,  x = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (x = 2; x < sqrt(i); x++)
//		{
//			if (i % x == 0)
//				goto end;
//		}
//		printf("%d ", i);
//	end:
//		;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0,i=0;
//	scanf_s("%d %d", &a, &b);
//	int min = a < b ? a : b;
//	for (i = min; i > 0; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("%d  ", i);
//			break;
//		}
//	}
//	return 0;
//}



/*int main()
{
	int i = 0, j = 0;
	int n = 0;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%3d", i, j, i * j);
		}
		printf("\n");
	}
	return 0*/;


//int main()
//{
//	int arr[10] = { 1,2,6,9,5,90,56,39,36,7 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max);
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,10,2,3,4,5,40,7,8,9 };
//	int i = 0;
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


//int main()
//{
//	float sum = 0,tmp=0;
//	float i = 1.0;
//	float flag = 1.0;
//	for (i = 1.0; i <= 100.0; i++)
//	{
//		tmp = flag / i;
//		sum = sum + tmp;
//		flag = -flag;
//	}
//	printf("sum=%f\n", sum);
//	return 0;
//}

//int main()
//{
//	int count = 0, i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9 || i % 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count + 1);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = -1;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == k)
//		{
//			printf("找到了,下标是%d\n", mid);
//			break;
//		}
//		else if (arr[mid] > k)
//		{
//			left++;
//		}
//		else
//		{
//			right--;
//		}
//	}
//	if (left >= right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//void Swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//
//	

//int Year(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = Year(n);
//	if (ret == 1)
//	{
//		printf("是闰年\n");
//	}
//	else
//		printf("不是闰年\n");
//	return 0;
//}

//int  prime(int i)
//{
//	int n = 0;
//	for (n = 2; n <= sqrt(i); n++)
//	{
//		if (i % n == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (prime(i) == 1)
//			printf("%d  ", i);
//	}
//	return 0;

//long CF(int n, int k)
//{
//	if (k == 1)
//		return n;
//	else
//		return n * CF(n, k - 1);
//} 
//
//int main()
//{
//	int n = 0, k = 0;
//	scanf_s("%d %d", &n, &k);
//	long ret = CF(n, k);
//	printf("ret=%ld\n", ret);
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n >= 0 && n <= 9)
//		return n;
//	else
//		return n % 10 + DigitSum(n / 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int sum = DigitSum(n);
//	printf("sum=%d\n", sum);
//	return 0;
//}


//


//void print(int n)
//{
//
//	if (n >= 0 && n <= 9)
//		printf("%d ", n);
//	else
//	{
//		int x = 0,tmp=0;
//		tmp = n;
//		while (tmp >= 10)
//		{
//			x++;
//			tmp = tmp / 10;
//		}
//		int ret = n / (pow(10, x));
//		printf("%d ", ret);
//		print(n-ret*pow(10,x));
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	print(n);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	//int count = 0;
//	int i = 0;
//	while (*(str+i) != '\0')
//	{
//		i++;
//		
//	}
//	return i;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	
//}

//int main()
//{
//	char arr[6] = "abcde";
//	int ret = my_strlen(arr);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 6,7,8,9,10 };
//	int left = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int tmp = 0,i=0;
//	while (left < sz)
//	{
//		tmp = arr1[left];
//		arr1[left] = arr2[left];
//		arr2[left] = tmp;
//		left++;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr2[i]);
//	}
//	return 0;
//}


//void Init(int* str, int sz)
//{
//	int i = 0, x = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf_s("%d", &x);
//		*(str + i) = x;
//	}
//}
//
//void print(int* str, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", *(str + i));
//	}
//	printf("\n");
//}
//
//void reverse(int* str, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[5] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}


int main()
{
	int arr[5] = { 2,5,1,7,4 };
	int i = 0, j = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz - 1; i++)
	{
		for (j = i + 1; j < sz; j++)
		{
			if (arr[i] > arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}