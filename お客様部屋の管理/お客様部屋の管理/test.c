#define _CRT_SECURE_NO_WARNINGS

#include "���͘����ݤι���.h"



void menu()
{
	printf("*************************************************************\n");
	printf("*********           1.add           2.del           *********\n");
	printf("*********           3.search        4.print         *********\n");
	printf("*********       5.�����å����󡡡�6.�����å�������  *********\n");
	printf("*********               ����7.�Ҥ礦����������������*********\n");
	printf("*********��������������   ��0.exit                  *********\n");
	printf("*************************************************************\n");
	
}

//enum option
//{
//	A=5,
//	B=6,
//	C=7
//};

int main()
{
	int input = 0;
	save heiya;
	Init(&heiya);
	do
	{
		menu();
		printf("�x�k���Ƥ�������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			addroom(&heiya);
			break;
		case 2:
			delroom(&heiya);
			break;
		case 3:
			searchroom(&heiya);
			break;
		case 4:
			print(&heiya);
			break;
		case 5:
			check(&heiya);
			break;
		case 6:
			checkout(&heiya);
			break;
		case 7:
			print2(&heiya);
			break;
		case 0:
			Saveinfor(&heiya);
			destroy(&heiya);
			printf("�K��\n");
			break;
		default :
			printf("�x�k����`�����������Ƥ�������\n");
			break;
		}
	} while (input);
	return 0;
}