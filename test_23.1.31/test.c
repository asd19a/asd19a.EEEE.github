#define _CRT_SECURE_NO_WARNINGS

#include "game.h"


void menu()
{
	printf("**********************************************\n");
	printf("*********    1.正常       0.exit    **********\n");
	printf("*********    2.困难       3.地狱    **********\n");
	printf("*********           4.自定义        **********\n");
	printf("**********************************************\n");

}


void saolei(int ret,int sign)
{
	init(ret);
	buzhi(ret,sign);
	show(ret);
	print(ret);
	//printboard(ret);
	//扫雷
	while (1)
	{
		int result=souji(ret,sign);
		if (result == 1)
		{
			printboard(ret);
			break;
		}
		else if (result == 2)
		{
			printboard(ret);
			break;
		}
		else
		{
			print(ret);
		}
	}


}

void makeself(int r_s[])
{
	int ret = 0, sign = 0;
	while (1)
	{
		printf("请输入棋盘规格(最大不超过20x20):>");
		scanf("%d", &ret);
		if (ret <= 0)
		{
			printf("非法规格，重新输入\n");
			continue;
		}
		else if (ret> 20)
		{
			printf("非法规格，重新输入\n");
			continue;
		}
		else
		{
			printf("输入成功\n");
			r_s[0] = ret;
		}
	again:
		printf("请输入雷的个数:>");
		scanf("%d", &sign);
		if (sign <= 0 || sign > (ret * ret))
		{
			printf("非法个数，重新输入\n");
			goto again;
		}
		else
		{
			r_s[1] = sign;
			break;
		}
		
	}
}

int main()
{
	//printf("\n\n");
	printf("\n\nようこそ機雷掃海ゲームへ\n\n\n");
	int input = 0;
	int sign = 0, ret = 0;
	int ret_sign[2] = { 0 };
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			sign = 10;
			ret = 9;
			saolei(ret,sign);
			break;
		case 2:
			sign = 49;
			ret = 9;
			saolei(ret,sign);
			break;
		case 3:
			sign = 80;
			ret = 9;
			saolei(ret,sign);
			break;
		case 4:
			makeself(ret_sign);
			saolei(ret_sign[0], ret_sign[1]);
			break;
		case 0:
			printf("またのお越しをお待ちしております\n");
			printf("exit\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;

		}
	} while (input);
	return 0;
}


//int main()
//{
//	double flag = 1;
//	double i = 1;
//	double j = 1;
//	double sum = 0;
//	int count = 0;
//	while (fabs(i / j) >= 10e-4)
//	{
//		sum = sum + (i / j)*flag;
//		j = j + 2;
//		flag = -flag;
//		count++;
//	}
//	printf("%lf  %d\n", sum * 4.0,count);
//	return 0;
//}
//
//
////求阶乘的函数
//double fact(int x)
//{
//	int i = 0;
//	double sum = 1;
//	for (i = 1; i <= x; i++)
//	{
//		sum = sum * i;
//	}
//	return sum;
//}
//
//int main()
//{
//	double i = 1;
//	double j = 1;
//	int x = 1;
//	double sum = 0;
//	int count = 0;
//	while ((i / j) >= 10e-5)
//	{
//		sum = sum + i / j;
//		j = fact(x);
//		x++;
//		count++;
//	}
//	printf("%lf   %d\n", sum, count);
//	return 0;
//}