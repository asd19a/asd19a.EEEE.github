#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void init(int ret)
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

void buzhi(int ret,int sign)
{
	int i = 0;
	int x = 0, y = 0;
	while (i < sign)
	{
		x = rand() % ret;
		y = rand() % ret;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '1';
			i++;
		}
	}
	
}

void print(int ret)
{
	int i = 0, j = 0;
	printf("---------------ɨ��--------------\n");
	printf("x/y ");
	for (i = 1; i <= ret; i++)
	{
		printf(" %3d", i);
	}
	printf("\n");
	for (i = 0; i < ret; i++)
	{
		printf(" %3d", i + 1);
		for (j = 0; j < ret; j++)
		{
			printf(" %3c", tmp[i][j]);
		}
		printf("\n");
	}
	printf("---------------ɨ��--------------\n");
}

void printboard(int ret)
{
	int i = 0, j = 0;
	printf("---------------ɨ��--------------\n");
	printf("x/y ");
	for (i = 1; i <= ret; i++)
	{
		printf(" %3d", i);
	}
	printf("\n");
	for (i = 0; i < ret; i++)
	{
		printf(" %3d", i + 1);
		for (j = 0; j < ret; j++)
		{
			printf(" %3c", arr[i][j]);
		}
		printf("\n");
	}
	printf("---------------ɨ��--------------\n");
}

void show(int ret)
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


int souji(int ret,int sign)
{
	int x = 0, y = 0;
	static int count = 0;
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
				count++;
				if (ret * ret - sign == count)
				{
					printf("��ϲ�㣬���׳ɹ�\n");
					return 2;
				}
				return 0;
			}
		}
	}
}