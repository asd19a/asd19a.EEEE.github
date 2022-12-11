#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void menu()
{
	printf("*************************************\n");
	printf("*******    1.play  0.exit  **********\n");
	printf("*************************************\n");
}


void game()
{
	int ret = 0;
	int guess = 0;
	int count = 0;
	ret = rand() % 1000+ 1;
	do
	{
		printf("请猜数字:>");
		printf("ret=%d\n", ret);
		scanf_s("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了,请重新猜\n");
			count++;
		}
		if (guess < ret)
		{
			printf("猜小了,请重新猜\n");
			count++;
		}
	} while (guess != ret);
	if (guess == ret)
	{
		printf("恭喜你,猜对了!!!\n");
		count++;
	}
	printf("一共猜了%d次\n", count);
	if (count==1)
	{
		printf("You are god!!すごいですね。おまいはゆうしゅだ\n");
		printf("君は私の神様だ\n");
	}
	else if (count > 1 && count <= 5)
	{
		printf("You are excellent!!やるじゃないが！！！！\n");
	}
	else
	{
		printf("Just so so!!【狗头】【狗头】よく頑張っるよ！！\n");
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