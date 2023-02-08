#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>



//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。

//#define CHANGE(a,i) ((a)>>(i))
//
//int main()
//{
//	int a = 5;
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < 32; i=i+2)
//	{
//		
//	}
//}


//int main()
//{
//	int a = 3;
//	int      
//}


//int main()
//{
//	int hour = 12, minute = 0, second = 0;
//	int time[2] = { 0 };
//	while (1)
//	{
//		printf("人类的落日  %d  h  %d  m  %d  s", hour, minute, second);
//		Sleep(1000);
//		system("cls");
//		//second--;
//		if (second == 0)
//		{
//			if (hour == 0 && minute == 0)
//			{
//				break;
//			}
//			second = 59;
//			time[1]++;
//		}
//		else
//		{
//			second--;
//			time[1]++;
//		}
//		if (time[1] == 60)
//		{
//			//minute--;
//			if (minute == 0)
//			{
//				minute = 59;
//			}
//			else
//				minute--;
//			time[1] = 0;
//			time[0]++;
//		}
//		if (time[0] == 60)
//		{
//			if (hour == 0);
//			else
//			{
//				hour--;
//			}
//			time[0] = 0;
//		}
//		if (hour == 0 && minute == 0 && second == 0)
//		{
//			break;
//		}
//	}
//	printf("毁灭你，与你何干\n");
//	return 0;
//}


//3.2

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = fabs(a);
//	if (ret == 0)
//	{
//		printf("0");
//	}
//	else
//	{
//		while (ret)
//		{
//			printf("%d", ret % 10);
//			ret = ret / 10;
//		}
//	}
//	return 0;
//
//
//}


//3.3

//int main()
//{
//	double rate = 0.025;
//	int n = 0;
//	printf("期限:>");
//	scanf("%d", &n);
//	double capital = 0, deposit = 0;
//	printf("本金:>");
//	scanf("%lf", &capital);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		capital = capital *rate+capital;
//		deposit = deposit + capital;
//		//capital=
//	}
//	printf("deposit : %lf\n", deposit);
//	return 0;
//}


//3.4

//int main()
//{
//	double a, b, c;
//	double x1 ,x2;
//again:
//	printf("a b c :>");
//	scanf("%lf%lf%lf", &a, &b, &c);
//	double s = b * b - 4 * a * c;
//	if (s>0)
//	{
//		x1 = (-b + pow(s, 0.5)) / (2 * a);
//		x2 = (-b - pow(s, 0.5)) / (2 * a);
//	}
//	else
//	{
//		printf("非法\n");
//		goto again;
//	}
//	printf("x1:%.2lf  x2:%.2lf\n", x1, x2);
//	return 0;
//}


//4.4

//int main()
//{
//	char ch = 'a';
//again:
//	printf("小写字母 :>");
//	scanf("%c", &ch);
//	getchar();
//	if (ch >= 'a' && ch <= 'z')
//	{
//		printf("大写字母 :%c   %d\n", toupper(ch), ch);
//	}
//	else
//	{
//		printf("非法\n");
//		goto again;
//	}
//	return 0;
//}


//5.1

//int main()
//{
//	int a = 0;
//	printf("a:>");
//	scanf("%d", &a);
//	if (a >= 0)
//	{
//		printf("绝对值:>%d\n", a);
//	}
//	else
//		printf("绝对值 :>%d\n", -a);
//	return 0;
//}

//5.2

//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a % 2 == 0)
//		{
//			printf("偶数\n");
//		}
//		else
//			printf("奇数\n");
//	}
//	return 0;
//}

//5.3

//int main()
//{
//	double a, b, c, p;
//	printf("a,b,c :>");
//	scanf("%lf%lf%lf", &a, &b, &c);
//	if (fabs(a - b) < c && fabs(a + b) > c && fabs(a - c) < b && fabs(a + c) > b && fabs(b + c) > a && fabs(b - c) < a)
//	{
//		p = (a + b + c) / 2;
//		printf("三角形  面积 :%.2lf\n", pow(p * (p - a) * (p - b) * (p - c), 0.5));
//	}
//	else
//		printf("无法构成三角形\n");
//	return 0;
//}


//5.4

double price(double ben, int n, double rate)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		ben = ben + ben * rate;
	}
	return ben;
}

int main()
{
	int n = 0;
	double ben = 0, rate = 0;
	int flag = 0;
	double sum = 0;
	int i = 0;
	printf("本金 :>");
	scanf("%lf", &ben);
	do
	{
		printf("n:>");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			rate = 0.0225;
			/*for (i = 0; i < n; i++)
			{
				ben = ben + ben * rate;
			}*/
			sum = price(ben, n, rate);
			break;
		case 2:
			rate = 0.0243;
			/*for (i = 0; i < n; i++)
			{
				ben = ben + ben * rate;
			}*/
			sum = price(ben, n, rate);
			break;
		case 3:
			rate = 0.0270;
			/*for (i = 0; i < n; i++)
			{
				ben = ben + ben * rate;
			}*/
			sum = price(ben, n, rate);
			break;
		case 5:
			rate = 0.0288;
			/*for (i = 0; i < n; i++)
			{
				ben = ben + ben * rate;
			}*/
			sum = price(ben, n, rate);
			break;
		case 8:
			rate = 0.03;
			/*for (i = 0; i < n; i++)
			{
				ben = ben + ben * rate;
			}*/
			sum = price(ben, n, rate);
			break;
		default :
			flag = 1;
			printf("非法\n");
			break;
		}
	} while (flag);
	printf("本利之和:>%.4lf\n", sum);
	return 0;

}