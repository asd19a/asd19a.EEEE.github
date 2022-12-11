#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


//int Max_Min(int* str, int sz,int n)
//{
//	int i = 0;
//	if (n == 1)
//	{
//		int max = *str;
//		for (i = 0; i < sz; i++)
//		{
//			if (*(str + i) > max)
//			{
//				max = *(str + i);
//			}
//		}
//		return max;
//	}
//	else if (n == 0)
//	{
//		int min = *str;
//		for (i = 0; i < sz; i++)
//		{
//			if (*(str + i) < min)
//			{
//				min = *(str + i);
//			}
//		}
//		return min;
//	}
//	
//}
//
//int main()
//{
//	int i = 0;
//	int j1 = 0; int j2 = 0;
//	int n = 0;
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10; i++)
//	{
//		printf("请输入第%d个数:>", i+1);
//		scanf_s("%d", &n);
//		arr[i] = n;
//	}
//	int max=Max_Min(arr, sz,1);
//	int min = Max_Min(arr, sz, 0);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == max)
//		{
//			j1 = i;
//		}
//		else if (arr[i] == min)
//		{
//			j2 = i;
//		}
//	}
//	printf("max=%d,下标是%d\n", max,j1);
//	printf("min=%d,下标是%d\n", min,j2);
//	return 0;
//
//}
//
//
////int  Func(int* x)
////{
////	*x = 20;
////	return  x;
////}
//int main()
//{
//	int x = 10;
//	Func(&x);
//	printf("%d\n", x);
//	return 0;
//}

//void Func(int b[])
//{
//	int j = 0;
//	for (j = 0; j < 4; j++)
//	{
//		b[j] = j;
//	}
//}
//
//int main()
//{
//	static int a[] = { 5,6,7,8 };
//	static i = 0;
//	Func(a);
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d  ", a[i]);
//	}
//	return 0;
//}


//int main()
//{
//
//}

//int main()
//{
//	int n = 0;
//	int arr[6000] = { 0 };
//	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count = 0;
//	double p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0, p6 = 0;
//	srand((unsigned int)time(NULL));
//	for (n = 0; n < 6000; n++)
//	{
//		arr[n] = rand() % 6 + 1;
//	}
//	n = 0;
//	/*for (n = 0; n < ; n++)
//	{
//		printf("%d\n", arr[n]);
//	}*/
//
//	while (n <= 6000)
//	{
//		switch (arr[n])
//		{
//		case 1:
//			count1++;
//			break;
//		case 2:
//			count2++;
//			break;
//		case 3:
//			count3++;
//			break;
//		case 4:
//			count4++;
//			break;
//		case 5:
//			count5++;
//			break;
//		case 6:
//			count6++;
//			break;
//		default:
//			break;
//		}
//		n++;
//		
//	}
//	p1 = count1 / 6000.0;  p2 = count2 / 6000.0;  p3 = count3 / 6000.0;
//	p4 = count4 / 6000.0;  p5 = count5 / 6000.0;  p6 = count6 / 6000.0;
//	count = count1 + count2 + count3 + count4 + count5 + count6;
//	printf("p1=%lf\n", p1);
//	printf("p2=%lf\n", p2);
//	printf("p3=%lf\n", p3);
//	printf("p4=%lf\n", p4);
//	printf("p5=%lf\n", p5);
//	printf("p6=%lf\n", p6);
//	printf("count=%d\n", count);
//	return 0;
//}


void menu()
{
	printf("**********************************************************\n");
	printf("********             1.play   0.exit              ********\n");
	printf("**********************************************************\n");
}

void game()
{
	int n = 0;
	int count = 0;
	int guess = 0;
	int i = 0;
	int b1 = 0, b2 = 0, b3 = 0, b4 = 0;
	int g1 = 0, g2 = 0, g3 = 0, g4 = 0;
	printf("请输入可猜次数:>");
	scanf_s("%d", &n);
	int ret = rand() % 9000 + 1000;
	//printf("ret=%d\n", ret);
	b1 = ret / 1000;
	b2 = (ret / 100) % 10;
	b3 = (ret / 10) % 10;
	b4 = ret % 10;
	i = n;
	while (count <n)
	{
		printf("请猜数字:>");
		scanf_s("%d", &guess);
		int x = 0;
		int y = 0;
		if (guess != ret)
		{
			g1 = guess / 1000;
			g2 = (guess / 100) % 10;
			g3 = (guess/ 10) % 10;
			g4 = guess % 10;
			if (b1 == g1)
				x++;
			if (b2 == g2)
				x++;
			if (b3 == g3)
				x++;
			if (b4 == g4)
				x++;
			if (g1 == b1 || g1 == b2 || g1 == b3 || g1 == b4)
				y++;
			if (g2 == b1 || g2 == b2 || g2 == b3 || g2 == b4)
				y++;
			if (g3 == b1 || g3 == b2 || g3 == b3 || g3 == b4)
				y++;
			if (g4 == b1 || g4 == b2 || g4 == b3 || g4 == b4)
				y++;
			printf("%dA%dB\n", x, y);
			printf("你还有%d次机会\n", --i);
		}
		else if (guess == ret)
		{
			printf("恭喜你,猜对了\n");
			printf("4A4B\n");
			break;
		}
		count++;
	}
	if (guess != ret)
	{
		printf("很遗憾,游戏失败\n");
		printf("正确答案为%d\n", ret);
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	system("color 9E");
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("猜数字游戏\n");
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

//int main()
//{
//	int n = 0;
//	srand((unsigned int)time(NULL));
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		n = rand() %9000+1000;
//		printf("%d\n", n);
//	}
//	return 0;
//}