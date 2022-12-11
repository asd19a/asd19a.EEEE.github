#include "game.h"

//void COLOR()
//{
//	printf("*************************************************\n");
//	printf("******        1.蓝     2.棕（或许是）      ******\n");
//	printf("******        3.绿（大概？）   4.紫        ******\n");
//	printf("*************************************************\n");
//
//}

void menu()
{
	printf("*************************************************\n");
	printf("***********          1.play           ***********\n");
	printf("***********          0.exit           ***********\n");
	printf("*************************************************\n");

}
void game(int COUNT)
{

	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	Setmine(mine, ROW, COL, COUNT);
	
	DisplayBoard(mine, ROW, COL);

	Findmine(mine, show, ROW, COL, COUNT);
	
	//DisplayBoard(show, ROW, COL);

}
void Rand()
{
	printf("*************************************************\n");
	printf("*****               0.return                *****\n");
	printf("*****       1.简单   2.中等   3.困难        *****\n");
	printf("**  4.地狱(只有一个安全区域哦,祝你好运哈哈哈！ **\n");
	printf("*************************************************\n");
}
void RRand()
{
	static int input = 0; int COUNT = 0;
	do
	{
		Rand();
		printf("请选择难度/返回菜单:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 0:
			printf("返回菜单\n\n");
			main();
			break;
		case 1:
			COUNT = COUNT1;
			game(COUNT);
			break;
		case 2:
			COUNT = COUNT2;
			game(COUNT);
			break;
		case 3:
			COUNT = COUNT3;
			game(COUNT);
			break;
		case 4:
			COUNT = COUNT4;
			game(COUNT);
			break;
		default:
			printf("选择错误,重新选择\n");
		}

	} while (input);
}

int main()
{
	int co = 0;
	int input = 0;
//again:
//	COLOR();
//	printf("请选择背景颜色:>");
//	scanf_s("%d", &co);
//	if (co< 1 && co>4)
//	{
//		printf("选择错误,重新选择\n");
//		goto again;
//
//	}
//	if (co <= 1 && co >= 4)
//	{
//		switch (co)
//		{
//		case 1:
//			system("color 9E");
//			break;
//		case 2:
//			system("color 6E");
//			break;
//		case 3:
//			system("color 2A");
//			break;
//		case 4:
//			system("color 5F");
//			break;
//		default:
//			break;
//		}
//	}
	system("color 9E");
	//system("color 2A");
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			RRand();
			//game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,重新选择\n");
			break;
		}

	} while (input);
	return 0;
}