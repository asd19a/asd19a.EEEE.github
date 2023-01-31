#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void init()
{
	int i = 0, j = 0;
	for (i = 0; i < ret; i++)
	{
		for (j = 0; j < ret; j++)
		{
			arr[i][j] = ' ';
		}
	}
}

void buzhi()
{
	int i = 0;
	int x = 0, y = 0;
	while (i < COUNT)
	{
		x = rand() % 9;
		y = rand() % 9;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '1';
			i++;
		}
	}
	
}

void print()
{
	int i = 0, j = 0;
	printf("---------------ɨ��--------------\n");
	for (i = 0; i < ret; i++)
	{
		for (j = 0; j < ret; j++)
		{
			printf(" %c ", tmp[i][j]);
		}
		printf("\n");
	}
	printf("---------------ɨ��--------------\n");
}

void printboard()
{
	int i = 0, j = 0;
	printf("---------------ɨ��--------------\n");
	for (i = 0; i < ret; i++)
	{
		for (j = 0; j < ret; j++)
		{
			printf(" %c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("---------------ɨ��--------------\n");
}

void show()
{
	int i = 0, j = 0;
	//printf("---------------ɨ��--------------\n");
	for (i = 0; i < ret; i++)
	{
		for (j = 0; j < ret; j++)
		{
			tmp[i][j] = '*';
		}
	}
	
	//printf("---------------ɨ��--------------\n");
}


int souji()
{
	int x = 0, y = 0;
	while (1)
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d%d", &x, &y);
		if (x<1 || x>ret || y<1 || y>ret)
		{
			printf("����Ƿ�����������\n");
		}
		else
		{
			if (arr[x - 1][y - 1] == '1')
			{
				printf("���ź����㱻ը����\n");
				tmp[x - 1][y - 1] = '1';
				return 1;
			}
			else if (tmp[x - 1][y - 1] == ' ')
			{
				printf("�ظ����꣬��������\n");
			}
			else
			{
				tmp[x - 1][y - 1] = ' ';
				return 0;
			}
		}
	}
}