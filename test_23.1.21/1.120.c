#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>


void menu()
{
	printf("**************************************************\n");
	printf("**********   1.ゲーム　　　　０．帰る　　***********\n");
	printf("**************************************************\n");

}

int main()
{
	int input = 0;

	do
	{
		menu();
		printf("選択してください:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			break;
		case 0:
			printf("退出 \n");
			break;
		default :
			printf("選択エラー、再入力してください\n");
			break;

		}


	} while (input);
	return 0;

}