#define _CRT_SECURE_NO_WARNINGS

#include "game.h"


//void menu()
//{
//	printf("**********************************************************\n");
//	printf("*********          1.������        0.�˳�         ********\n");
//	printf("**********************************************************\n");
//}
//
//void guessdigit()
//{
//	int ret = 0, guess = 0;
//	guess = rand() % 100 + 1;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &ret);
//		if (ret == guess)
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//		else if (ret < guess)
//			printf("��С�ˣ������²�\n");
//		else
//			printf("�´��ˣ������²�\n");
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			guessdigit();
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}


void menu()
{
	printf("**********************************************************\n");
	printf("*********         1.������         0.�˳�         ********\n");
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
		printf("��ѡ��:>");
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
			printf("ѡ�����,����ѡ��\n");
			break;
		}
	} while (input);*/
	int input = 0;
	while (1)
	{
		printf("���������̴�С:>");
		scanf("%d", &input);
		if (input % 2 == 0)
		{
			printf("����Ƿ�����������\n");

		}
		else if (input % 2 != 0)
		{
			return input;
		}
	}

}

void sanziqi(int ret)
{
	//��ʼ������
	initboard(ret);
	//��ӡ����
	printboard(ret);
	char result = 0;
	while (1)
	{
		//�����
		playermove(ret);
		printboard(ret);
		printf("\n");
		//������
		computmove(ret);
		printboard(ret);
		printf("\n");
		//�ж�ʤ��
		result = iswin(ret);
		if (result != 'p')
		{
			break;
		}
	}
	if (result == '*')
		printf("��һ�ʤ\n");
	if (result == '#')
		printf("���Ի�ʤ\n");
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
		printf("��ѡ��:>");
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
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}