#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


void menu()
{
	
	printf("*********************************************************\n");
	printf("***********      1.���`�ࡡ���������K�ˡ�����************\n");
	printf("*********************************************************\n");

}

void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("���֤򵱤ƤƤߤƤ���������");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("���Ƥ��󤭤��ʤä�,�ٵ��ƤƤ�������\n");

		}
		else if (guess < ret)
		{
			printf("���Ƥ�С�����ʤä����ٵ��ƤƤ�������\n");
		}
		else
		{
			printf("����ǤȤ��������ޤ�������\n");
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
		printf("�x�k���Ƥ���������");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�K��\n");
			break;
		default :
			printf("�x�k����`�����x�k���Ƥ�������\n");
			break;
		}
	} while (input);
	return 0;
}

