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
//	printf("尾删:\n");
//	SepListpopback(&s);
//	SepListprint(&s);
//	printf("头删:\n");
//	SepListpopfront(&s);
//	SepListprint(&s);
//	printf("头插(5):\n");
//	SepListpushfront(&s, 5);
//	SepListprint(&s);
//	printf("尾插(6):\n");
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
	printf("|----------------------顺序表----------------------|\n");
	printf("||************************************************||\n");
	printf("||*******     1.尾插         2.头插        *******||\n");
	printf("||*******     3.尾删         4.头删        *******||\n");
	printf("||*******     5.查询         6.修改        *******||\n");
	printf("||*******     7.打印         0.退出        *******||\n");
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
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入要插入的数据:>");
			scanf("%d", &x);
			SepListpushback(&s,x);
			break;
		case 2:
			printf("请输入要插入的数据:>");
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
			printf("退出顺序表\n期待您的下次使用\n");
			break;
		default :
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}