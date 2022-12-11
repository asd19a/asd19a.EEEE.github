#include <stdio.h>
#include <stdlib.h>
#include <time.h>



/*nsigned long fact(unsigned int n)
{
	unsigned int i = 0;
	unsigned int ret = 1;
	printf("n=%u\n", n);
	if (n < 0)
	{
		
		return -1;
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		return ret;
	}
	
}
int main()
{
	int n = 0; long a = 0;
	scanf_s("%d", &n);
	a=fact(n);
	if (a == -1)
	{
		printf("输入非法！！！\n");
	}
	else
	{
		printf("ret=%ld", fact(n));
	}
	return 0;
}*/

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;  long ret = 1;
//	long sum = 0;
//	scanf_s("%d", &n);
//	//for (i = 1; i <= n; i++)
//	//{
//	//	long ret = 1;
//	//	for (j = 1; j <= i; j++)
//	//	{
//	//		ret = ret * j;
//	//		
//	//	}
//	//	//printf("%d的阶乘=%ld\n", i, ret);
//	//	sum = sum + ret;
//	//}
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("sum=%ld\n", sum);
//	return 0;
//}

//
//long fact(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int k = 0;  int m = 0;
//	long ret1 = 0;
//	long ret2 = 0;
//	long ret3 = 0;
//	long C = 0;
//	while (1)
//	{
//		printf("请输入k  m:>");
//		scanf_s("%d%d", &k, &m);
//		if (m < k)
//		{
//			printf("输入错误,重新输入\n");
//		}
//		else
//		{
//			break;
//		}
//	}
//	ret1 = fact(m);  ret2 = fact(k);  ret3 = fact(m - k);
//	C = ret1 / (ret2 * ret3);
//	printf("C%d%d=%ld",k,m, C);
//	return 0;
//
//
//
//}

//int main()
//{
//	int n = 0;
//	 int count = 0;
//	int i = 0;
//	do
//	{
//		long sum = 0; int ret = 1;
//		printf("请输入:>");
//		scanf_s("%d", &n);
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//			sum = sum + ret;
//		}
//		count++;
//		printf("sum=%ld  ", sum);
//		printf("count=%d\n", count);
//		if (count > 9)
//		{
//			break;
//		}
//
//	} while (n);
//
//
//}

void menu()
{
	printf("******************************************************\n");
	printf("***********          1.play    0.exit        *********\n");
	printf("******************************************************\n");
}

void game()
{
	int n = 0; int ret = 0;
	
	ret = rand() % 10 + 1;
	while (1)
	{
		printf("请猜数字:>");
		scanf_s("%d", &n);
		if (n == ret)
		{
			printf("恭喜你,猜对了！！！\n");
			break;
		}
		else if (n > ret)
		{
			printf("猜大了,请重猜\n");
		}
		else
		{
			printf("猜小了,请重猜\n");
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,重新选择\n");
		}
	} while (input);
	return 0;

}

