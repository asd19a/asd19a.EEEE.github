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
	//printf("��������Ϸ��ʼ\n");
	
	ret = rand()%100+1;
	//printf("%d\n", ret);
	again:
	    printf("�������:>");
		scanf_s("%d", &guess);
		
	while (1)
	{
		//printf("�������:>");
		if (guess == ret)
		{
			printf("��ϲ��,�¶���\n"); break;
		}
		else if (guess > ret)
		{
			printf("�´���,�����²�\n");
			goto again;
			
		}
		else //(guess < ret)
		{
			printf("��С��,�����²�\n");
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
			printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,����ѡ��\n");
			break;
		}
	} while (input);






	return 0;
}