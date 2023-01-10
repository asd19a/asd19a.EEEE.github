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
	//��ʼ����ϵ������
	Innitcontact(&con);
	//download(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}