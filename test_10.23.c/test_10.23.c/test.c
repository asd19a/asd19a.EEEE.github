#include "game.h"


void menu()
{
	printf("*************************************************\n");
	printf("*******          1.play     0.exit         *******\n");
	printf("*************************************************\n");
}


void game()
{
	char ret = 0;
	char arr[ROW][COL];
	Initarr(arr,ROW,COL);
	Displayarr(arr, ROW, COL);
	while (1)
	{
		Play(arr, ROW, COL);
		Displayarr(arr, ROW, COL);
		ret = IsWin(arr, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Computeplay(arr, ROW, COL);
		Displayarr(arr, ROW, COL);
		ret = IsWin(arr, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

	}
	if (ret == '*')
	{
		printf("玩家获胜!!!\n");
		Displayarr(arr, ROW, COL);
	}
	else if (ret == '#')
	{
		printf("电脑获胜!!!\n");
		Displayarr(arr, ROW, COL);
	}
	else
	{
		printf("平局!!!\n");
		Displayarr(arr, ROW, COL);
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
			break;
		}
	} while (input);

	return 0;
}