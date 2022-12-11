#include  <stdio.h>
#include <math.h>


//int main()
//{
//	int i = 1;
//	double term = 1.0;
//	double flag = 1.0;
//	double sum = 0;
//	while ((1.0 / i) >= 10e-4)
//	{
//		term = flag / i;
//		sum = sum + term;
//		flag = -flag;
//		i++;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//
//}


//long Fact(int n)
//{
//	int i = 0;
//	long ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int x = 0;
//	double sinx = 0;
//	int n = 1;
//	scanf_s("%d", &x);
//	while ((double)(pow(x, n) / Fact(n)) >= 10e-5)
//	{
//		sinx = sinx +(double)( pow(x, n) / Fact(n));
//		n = n + 2;
//	}
//	printf("sinx=%lf\n", sinx);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		printf("%d    ", i);
//	}
//	printf("\n");
//	for (i = 1; i <= 9; i++)
//	{
//		printf("-    ");
//	}
//	printf("\n");
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			printf("%-5d", i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//int main()
//{
	//int i = 0;
	//int j = 0;
	//for (i = 1; i <= 9; i++)
	//{
	//	printf("%d    ", i);
	//}
	//printf("\n");
	//for (i = 1; i <= 9; i++)
	//{
	//	printf("-    ");
	//}
	//printf("\n");
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-5d", i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}


//int main()
//{
//	int i = 1;
//	int tmp = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		printf("%d    ", i);
//	}
//	printf("\n");
//	for (i = 1; i <= 9; i++)
//	{
//		printf("-    ");
//	}
//	printf("\n");
//	
//	i = 1;
//	for (tmp = 1; tmp <= 9; tmp++)
//	{
//		
//		while (i <= 9)
//		{
//			printf("%-5d", tmp* i);
//			i++;
//			
//		}
//		printf("\n");
//		for (i = 0; i < tmp; i++)
//		{
//			printf("     ");
//		}
//		
//		i = tmp;
//		i++;
//	}
//	return 0;
//
//}




/// <summary>
/// 
/// </summary>
/// <param name="x"></param>
/// <param name="y"></param>
/// <returns></returns>
//int Add(int x, int y)
//{
//	int m = 0;
//	m = x + y;
//	return m;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 0;
//	int b1 = 0; int b2 = 0; int b3 = 0; int b4 = 0;
//	for (n = 1000; n <= 9999; n++)
//	{
//		b1 = n / 1000;
//		b2 = (n - b1 * 1000) / 100;
//		b3 = (n / 10) % 10;
//		b4 = n % 10;
//		if (b1 == b2 && b3 == b4)
//		{
//			//printf("%d  ", n);
//			for (i = 1; i < 100; i++)
//			{
//				if (pow(i, 2) == n)
//				{
//					printf("%d\n", n);
//					break;
//				}
//			}
//		}
//		
//	}
//	return 0;
//}


int main()
{
	int n = 0;
	int count = 0;
	int grade = 0;;
	int i = 0; int j = 0;
	while (1)
	{
		printf("请输入学生人数(最多不超过40人):>");
		scanf_s("%d", &n);
		if (n >0&&n <= 40)
		{
			for (i = 1; i <= n; i++)
			{
				printf("请输入第%d位学生成绩:>", i);
				scanf_s("%d", &grade);
				printf("\n");
				if (grade < 60)
				{
					count++;
				}
			}
			if (i > n)
			{
				break;
			}
		}
		else
		{
			printf("入力エラー、再入力\n");
		}
	}
	printf("不及格人数count=%d\n", count);
	return 0;
	

}