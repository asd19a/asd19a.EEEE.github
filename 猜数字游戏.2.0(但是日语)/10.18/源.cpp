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
		printf("�������:>");
		printf("ret=%d\n", ret);
		scanf_s("%d", &guess);
		if (guess > ret)
		{
			printf("�´���,�����²�\n");
			count++;
		}
		if (guess < ret)
		{
			printf("��С��,�����²�\n");
			count++;
		}
	} while (guess != ret);
	if (guess == ret)
	{
		printf("��ϲ��,�¶���!!!\n");
		count++;
	}
	printf("һ������%d��\n", count);
	if (count==1)
	{
		printf("You are god!!�������Ǥ��͡����ޤ��Ϥ椦�����\n");
		printf("����˽���񘔤�\n");
	}
	else if (count > 1 && count <= 5)
	{
		printf("You are excellent!!��뤸��ʤ�����������\n");
	}
	else
	{
		printf("Just so so!!����ͷ������ͷ���褯�B���ä�裡��\n");
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