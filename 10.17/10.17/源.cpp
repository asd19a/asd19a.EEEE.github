#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 0;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret=1;
//		for (i = 1; i <= n; i++)
//		{
//			//ret = 1;
//			ret = ret * i;
//		}
//		//ret = 1;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//
//
//
//
//	return 0;
//}

//int main()
//{
//	/*int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d\n", a, b);
//	a = a ^ a;
//	a = a ^ 0;
//	printf("a=%d,b=%d", a, b);*/
//	int a = 0;
//	int count = 0;
//	scanf_s("%d", &a);
//	while (a)
//	{
//		if ((a & 1) == 1)
//		{
//			
//			count++;
//		}
//		a = a >> 1;
//	}
//
//	printf("count=%d", count);
//	return 0;
//}
#define NUM 5

int main()
{
	char arr[NUM] = {24,36,48,64,42};
	int a = 0;
	int b = 0;
	int n = 1;
	printf("数据个数: %d\n", NUM);
	for (a = 0; a <= NUM - 1; a++)
	{
		b = arr[a];
		printf("%d号: %d\n", n, b);
		n++;
	}
	printf("{24,36,48,64,42}\n");
	return 0;
}