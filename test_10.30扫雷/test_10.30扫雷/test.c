#include "game.h"

//void COLOR()
//{
//	printf("*************************************************\n");
//	printf("******        1.��     2.�أ������ǣ�      ******\n");
//	printf("******        3.�̣���ţ���   4.��        ******\n");
//	printf("*************************************************\n");
//
//}

void menu()
{
	printf("*************************************************\n");
	printf("***********          1.play           ***********\n");
	printf("***********          0.exit           ***********\n");
	printf("*************************************************\n");

}
void game(int COUNT)
{

	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	Setmine(mine, ROW, COL, COUNT);
	
	DisplayBoard(mine, ROW, COL);

	Findmine(mine, show, ROW, COL, COUNT);
	
	//DisplayBoard(show, ROW, COL);

}
void Rand()
{
	printf("*************************************************\n");
	printf("*****               0.return                *****\n");
	printf("*****       1.��   2.�е�   3.����        *****\n");
	printf("**  4.����(ֻ��һ����ȫ����Ŷ,ף����˹������� **\n");
	printf("*************************************************\n");
}
void RRand()
{
	static int input = 0; int COUNT = 0;
	do
	{
		Rand();
		printf("��ѡ���Ѷ�/���ز˵�:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 0:
			printf("���ز˵�\n\n");
			main();
			break;
		case 1:
			COUNT = COUNT1;
			game(COUNT);
			break;
		case 2:
			COUNT = COUNT2;
			game(COUNT);
			break;
		case 3:
			COUNT = COUNT3;
			game(COUNT);
			break;
		case 4:
			COUNT = COUNT4;
			game(COUNT);
			break;
		default:
			printf("ѡ�����,����ѡ��\n");
		}

	} while (input);
}

int main()
{
	int co = 0;
	int input = 0;
//again:
//	COLOR();
//	printf("��ѡ�񱳾���ɫ:>");
//	scanf_s("%d", &co);
//	if (co< 1 && co>4)
//	{
//		printf("ѡ�����,����ѡ��\n");
//		goto again;
//
//	}
//	if (co <= 1 && co >= 4)
//	{
//		switch (co)
//		{
//		case 1:
//			system("color 9E");
//			break;
//		case 2:
//			system("color 6E");
//			break;
//		case 3:
//			system("color 2A");
//			break;
//		case 4:
//			system("color 5F");
//			break;
//		default:
//			break;
//		}
//	}
	system("color 9E");
	//system("color 2A");
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			RRand();
			//game();
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