#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>


void menu()
{
	printf("**************************************************\n");
	printf("**********   1.���`�ࡡ�������������롡��***********\n");
	printf("**************************************************\n");

}

int main()
{
	int input = 0;

	do
	{
		menu();
		printf("�x�k���Ƥ�������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			break;
		case 0:
			printf("�˳� \n");
			break;
		default :
			printf("�x�k����`�����������Ƥ�������\n");
			break;

		}


	} while (input);
	return 0;

}