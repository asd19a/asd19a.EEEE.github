#define _CRT_SECURE_NO_WARNINGS

#include "Decimal_conversion.h"


int menu1()
{
	int input = 0;
	printf("*********************************************************************\n");
	printf("*************       10.ʮ����        2.������           *************\n");
	printf("*************       8.�˽���         16.ʮ������        *************\n");
	printf("********************    0.exit/return    ****************************\n");
	printf("*********************************************************************\n");
	printf("��ѡ��ԭ����:>");
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 10:
			return input;
			break;
		case 2:
			return input;
			break;
		case 8:
			return input;
			break;
		case 16:
			return input;
			break;
		case 0:
			printf("exit/return\n");
			return 0;
			break;
		default:
			printf("ѡ���������ѡ��:>");
			break;
		}
	} while (input);

}
int menu2()
{
	int input = 0;
	printf("*********************************************************************\n");
	printf("*************       10.ʮ����         2.������          *************\n");
	printf("*************       8.�˽���         16.ʮ������        *************\n");
	printf("********************    0.exit/return    ****************************\n");
	printf("*********************************************************************\n");
	printf("��ѡ��Ҫת���Ľ���:>");
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 10:
			return input;
			break;
		case 2:
			return input;
			break;
		case 8:
			return input;
			break;
		case 16:
			return input;
			break;
		case 0:
			printf("exit/return\n");
			return 0;
			break;
		default:
			printf("ѡ���������ѡ��:>");
			break;
		}
	} while (input);

}



char* change(char *str, int input1, int input2)
{
	int i = 0;
	//10->2
	if (input1 == 10 && input2 == 2)
	{
		int b1 = 0;
		printf("������ԭ��:>");
		scanf("%d", &b1);
		for (i = 31; i >= 0; i--)
		{
			*(str+i) = (b1 & 1);
			b1 = b1 >> 1;
		}
		*(str+32) = '\0';;

	}
}