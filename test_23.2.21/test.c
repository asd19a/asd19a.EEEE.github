#define _CRT_SECURE_NO_WARNINGS


#include "SepList.h"


//void testSepList()
//{
//	SepList s;
//	/*SepListinit(&s);
//	SepListpushback(&s, 1);
//	SepListpushback(&s, 2);
//	SepListpushback(&s, 3);
//	SepListpushback(&s, 4);
//	SepListpushback(&s, 5);
//	SepListpushback(&s, 6);
//	SepListpushback(&s, 7);
//	SepListpushback(&s, 8);
//	SepListpushback(&s, 9);
//	SepListprint(&s);
//	printf("βɾ:\n");
//	SepListpopback(&s);
//	SepListprint(&s);
//	printf("ͷɾ:\n");
//	SepListpopfront(&s);
//	SepListprint(&s);
//	printf("ͷ��(5):\n");
//	SepListpushfront(&s, 5);
//	SepListprint(&s);
//	printf("β��(6):\n");
//	SepListpushback(&s, 6);
//	SepListprint(&s);
//	SepListsearch(&s);
//	SepListmodify(&s);
//	SepListprint(&s);*/
//	SepListinit(&s);
//	SepListprint(&s);
//	SepListdestroy(&s);
//}

void menu()
{
	printf("|----------------------˳���----------------------|\n");
	printf("||************************************************||\n");
	printf("||*******     1.β��         2.ͷ��        *******||\n");
	printf("||*******     3.βɾ         4.ͷɾ        *******||\n");
	printf("||*******     5.��ѯ         6.�޸�        *******||\n");
	printf("||*******     7.��ӡ         0.�˳�        *******||\n");
	printf("||************************************************||\n");
	printf("|--------------------------------------------------|\n");
}

int main()
{
	SepList s;
	SepListinit(&s);
	int input = 0;
	int x = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������Ҫ���������:>");
			scanf("%d", &x);
			SepListpushback(&s,x);
			break;
		case 2:
			printf("������Ҫ���������:>");
			scanf("%d", &x);
			SepListpushfront(&s, x);
			break;
		case 3:
			SepListpopback(&s);
			break;
		case 4:
			SepListpopfront(&s);
			break;
		case 5:
			SepListsearch(&s);
			break;
		case 6:
			SepListmodify(&s);
			break;
		case 7:
			SepListprint(&s);
			break;
		case 0:
			SepListdestroy(&s);
			printf("�˳�˳���\n�ڴ������´�ʹ��\n");
			break;
		default :
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}