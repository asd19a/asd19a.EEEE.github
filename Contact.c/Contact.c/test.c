#define _CRT_SECURE_NO_WARNINGS


#include "Contact.h"

void menu()
{
	printf("************************************************************\n");
	printf("**********        1.add          2.del           ***********\n");
	printf("**********        3.search       4.modify        ***********\n");
	printf("**********        5.sort         6.print         ***********\n");
	printf("**********                0.exit                 ***********\n");
	printf("************************************************************\n");
	
}

enum option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT

};

int main()
{
	int input = 0;
	contact con;
	Innition(&con);
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
		case SORT:
			sortcontact(&con);
			break;
		case PRINT:
			printcontact(&con);
			break;
		case EXIT:
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