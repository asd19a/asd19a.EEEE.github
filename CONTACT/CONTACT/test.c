#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"


void menu()
{
	printf("*****************************************************************\n");
	printf("**********          1.add                 2.del        **********\n");
	printf("**********          3.search              4.modify     **********\n");
	printf("**********          5.see                 6.sort       **********\n");
	printf("**********                    0.exit                   **********\n");
	printf("*****************************************************************\n");

	
}

enum option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SEE,
	SORT
};

int main()
{
	int input = 0;
	contact con;
	//初始化联系人数组
	Innitcontact(&con);
	//download(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			addcontact(&con);
			break;
		case DEL:
			delcontact(&con);
			break;
		case SEARCH:
			searchcontact(&con);
			break;
		case MODIFY:
			modifycontact(&con);
			break;
		case SEE:
			printcontact(&con);
			break;
		case SORT:
			sortcontact(&con);
			break;
		case EXIT:
			savecontact(&con);
			destroycontact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}