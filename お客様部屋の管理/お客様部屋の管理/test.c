#define _CRT_SECURE_NO_WARNINGS

#include "お客様部屋の管理.h"



void menu()
{
	printf("*************************************************************\n");
	printf("*********           1.add           2.del           *********\n");
	printf("*********           3.search        4.print         *********\n");
	printf("*********       5.チェックイン　　6.チェックアウト  *********\n");
	printf("*********               　　7.ひょうじ　　　　　　　*********\n");
	printf("*********　　　　　　　   　0.exit                  *********\n");
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
		printf("選択してください:>");
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
			printf("終了\n");
			break;
		default :
			printf("選択エラー、再入力してください\n");
			break;
		}
	} while (input);
	return 0;
}