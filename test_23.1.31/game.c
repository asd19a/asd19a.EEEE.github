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
	printf("---------------扫雷--------------\n");
	for (i = 0; i < ret; i++)
	{
		for (j = 0; j < ret; j++)
		{
			printf(" %c ", tmp[i][j]);
		}
		printf("\n");
	}
	printf("---------------扫雷--------------\n");
}

void printboard()
{
	int i = 0, j = 0;
	printf("---------------扫雷--------------\n");
	for (i = 0; i < ret; i++)
	{
		for (j = 0; j < ret; j++)
		{
			printf(" %c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("---------------扫雷--------------\n");
}

void show()
{
	int i = 0, j = 0;
	//printf("---------------扫雷--------------\n");
	for (i = 0; i < ret; i++)
	{
		for (j = 0; j < ret; j++)
		{
			tmp[i][j] = '*';
		}
	}
	
	//printf("---------------扫雷--------------\n");
}


int souji()
{
	int x = 0, y = 0;
	while (1)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);
		if (x<1 || x>ret || y<1 || y>ret)
		{
			printf("坐标非法，重新输入\n");
		}
		else
		{
			if (arr[x - 1][y - 1] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				tmp[x - 1][y - 1] = '1';
				return 1;
			}
			else if (tmp[x - 1][y - 1] == ' ')
			{
				printf("重复坐标，重新输入\n");
			}
			else
			{
				tmp[x - 1][y - 1] = ' ';
				return 0;
			}
		}
	}
}