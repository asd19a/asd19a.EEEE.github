#include <stdio.h>
#include <math.h>
#include <string.h>

//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//void print(int* str, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", *(str + i));
//	}
//}
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}



//void reverse(char* str, int len)
//{
//    int i = 0;
//    int left = 0;
//    int right = len - 1;
//    while (left < right)
//    {
//        char tmp = *(str + left);
//        *(str + left) = *(str + right);
//        *(str + right) = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char arr[20] = " ";
//    fgets(arr, sizeof(arr), stdin);
//    int len = strlen(arr);
//    reverse(arr, len);
//    printf("%s\n", arr);
//    return 0;
//}

//
//int main()
//{
//	int n = 0, i = 0,j=0;
//	scanf_s("%d", &n);
//	int tmp = n / 2;
//	for (i = 1; i < n / 2; i++)
//	{
//		for (j = 1; j <= tmp; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= (2*i-1); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		tmp--;
//	}
//	for (i = 1; i <= n; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	tmp = 1;
//	for (i = n/2; i > 0; i--)
//	{
//		for (j = 1; j <= tmp; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= (2 * i - 1); j++)
//		{
//			printf("*");
//		}
//		tmp++;
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0,j=0;
//	int n = 0, tmp = 0,sum=0;
//	while (i <= 100000)
//	{
//		n = 1;
//		tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		tmp = i;
//		sum = 0;
//		for (j = 1; j <= n; j++)
//		{
//			sum = sum + pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d  ", i);
//		}
//		i++;
//	}
//	return 0;
//}


int main()
{
	int a = 0 , n = 0;
	scanf_s("%d %d", &a, &n);
	int sum = 0;
	int tmp = a;
	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
			a = 2;
		else
			a = a * 10 + tmp;
		sum = sum + a;
	}
	printf("sum=%d\n", sum);
	return 0;
}