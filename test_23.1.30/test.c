#define _CRT_SECURE_NO_WARNINGS

#include "game.h"


//void menu()
//{
//	printf("**********************************************************\n");
//	printf("*********          1.猜数字        0.退出         ********\n");
//	printf("**********************************************************\n");
//}
//
//void guessdigit()
//{
//	int ret = 0, guess = 0;
//	guess = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &ret);
//		if (ret == guess)
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		else if (ret < guess)
//			printf("猜小了，请重新猜\n");
//		else
//			printf("猜大了，请重新猜\n");
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			guessdigit();
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}


void menu()
{
	printf("**********************************************************\n");
	printf("*********         1.三子棋         0.退出         ********\n");
	printf("**********************************************************\n");
}

int option()
{
	/*printf("*************************************************************\n");
	printf("*********           1.3x3           2.5x5         ***********\n");
	printf("*********           3.7x7           0.exit        ***********\n");
	printf("*************************************************************\n");
	int input = 0;
	do
	{
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			return 3;
			break;
		case 2:
			return 5;
			break;
		case 3:
			return 7;
			break;
		case 0:
			printf("exit\n");
			return 0;
			break;
		default:
			printf("选择错误,重新选择\n");
			break;
		}
	} while (input);*/
	int input = 0;
	while (1)
	{
		printf("请输入棋盘大小:>");
		scanf("%d", &input);
		if (input % 2 == 0)
		{
			printf("输入非法，重新输入\n");

		}
		else if (input % 2 != 0)
		{
			return input;
		}
	}

}

void sanziqi(int ret)
{
	//初始化棋盘
	initboard(ret);
	//打印棋盘
	printboard(ret);
	char result = 0;
	while (1)
	{
		//玩家走
		playermove(ret);
		printboard(ret);
		printf("\n");
		//电脑走
		computmove(ret);
		printboard(ret);
		printf("\n");
		//判断胜负
		result = iswin(ret);
		if (result != 'p')
		{
			break;
		}
	}
	if (result == '*')
		printf("玩家获胜\n");
	if (result == '#')
		printf("电脑获胜\n");
	printboard(ret);
}

int main()
{
	int input = 0;
	int ret = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			ret = option();
			if (ret == 0)
				break;
			sanziqi(ret);
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}