#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void menu()
{
	printf("***************************************\n");
	printf("**********     1.play     *************\n");
	printf("**********     0.exit     *************\n");
	printf("***************************************\n");
}

void game()
{
	int ret = 0;
	int guess = 0;
	//printf("猜数字游戏开始\n");
	
	ret = rand()%100+1;
	//printf("%d\n", ret);
	again:
	    printf("请猜数字:>");
		scanf_s("%d", &guess);
		
	while (1)
	{
		//printf("请猜数字:>");
		if (guess == ret)
		{
			printf("恭喜你,猜对了\n"); break;
		}
		else if (guess > ret)
		{
			printf("猜大了,请重新猜\n");
			goto again;
			
		}
		else //(guess < ret)
		{
			printf("猜小了,请重新猜\n");
			goto again;
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
			break;
		}
	} while (input);






	return 0;
}