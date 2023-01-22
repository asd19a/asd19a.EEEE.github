#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


void menu()
{
	
	printf("*********************************************************\n");
	printf("***********      1.ゲーム　　　０．終了　　　************\n");
	printf("*********************************************************\n");

}

void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("数字を当ててみてください：");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("当てが大きくなった,再当ててください\n");

		}
		else if (guess < ret)
		{
			printf("当てが小さくなった、再当ててください\n");
		}
		else
		{
			printf("おめでとうございます、正解\n");
			break;
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
		printf("選択してください：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("終了\n");
			break;
		default :
			printf("選択エラー、再選択してください\n");
			break;
		}
	} while (input);
	return 0;
}

