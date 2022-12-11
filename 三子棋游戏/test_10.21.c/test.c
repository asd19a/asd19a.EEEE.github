#include "game.h"
void menu()
{
	printf("***********************************\n");
	printf("******    1.play   0.exit    ******\n");
	printf("***********************************\n");
}
void game()
{
	char ret = 0;
	char arr[ROW][COL];
	//��ʼ������
	Initarr(arr, ROW,COL);
	//��ӡ����
	printarr(arr, ROW, COL);
	while (1)
	{
		//�����
		playMove(arr, ROW, COL);
		printarr(arr, ROW, COL);
		//�ж�����Ƿ��ʤ
		ret = IsWin(arr, ROW, COL);
		if (ret != 'C')
		{
			break; 
		}
		//������
		computeMove(arr, ROW, COL);
		printarr(arr, ROW, COL);
		ret=IsWin(arr, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("��һ�ʤ\n");
		printarr(arr, ROW, COL);
	}
	else if (ret == '#')
	{
		printf("���Ի�ʤ\n");
		printarr(arr, ROW, COL);
	}
	else
	{
		printf("ƽ��\n");
		printarr(arr, ROW, COL);
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
			printf("��������Ϸ\n");
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