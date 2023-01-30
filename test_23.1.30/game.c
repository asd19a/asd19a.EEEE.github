#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void initboard(int ret)
{
	int i = 0, j = 0;
	for (i = 0; i < ret; i++)
	{
		for (j = 0; j < ret; j++)
		{
			board[i][j] =' ';
		}
	}
}

void printboard(int ret)
{
	int i = 0;
	for (i = 0; i < ret; i++)
	{
		int j = 0;
		for (j = 0; j < ret; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < ret - 1)
				printf("|");
		}
		printf("\n");
		if (i < ret - 1)
		{
			int j = 0;
			for (j = 0; j < ret; j++)
			{
				printf("---");
				if (j < ret - 1)
					printf("|");
			}
			printf("\n");
		}
	}

}


void playermove(int ret)
{
	int x = 0, y = 0;
	printf("玩家走\n");
	while (1)
	{
		printf("请玩家输入坐标:>");
		scanf("%d%d", &x, &y);
		if (x > ret || x<0 || y>ret || y < 0)
		{
			printf("非法坐标，重新输入\n");
		}
		else
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，重新输入\n");
			}
		}
	}
	//printf("\n\n");
}

void computmove(int ret)
{
	int x = 0, y = 0;
	printf("电脑走:\n");
	while (1)
	{
		x = rand() % ret;
		y = rand() % ret;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
	//printf("\n\n");
}


char iswin(int ret)
{
	int i = 0, j = 0;
	int flag = 1;
	int count = 0;
	//行判断
	for (i = 0; i < ret; i++)
	{
		count = 0;
		for (j = 0; j < ret-1; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j] != ' ' && board[i][j + 1] != ' ')
			{
				;
			}
			else
				count++;
		}
		if (count == 0)
			return board[i][0];
	}
	//列判断
	for (i = 0; i < ret; i++)
	{
		count = 0;
		for (j = 0; j < ret - 1; j++)
		{
			if (board[j][i] == board[j + 1][i] && board[j][i] != ' ' && board[j + 1][i] != ' ')
			{
				;
			}
			else
				count++;
		}
		if (count==0)
		{
			return board[0][i];
		}
	}
	//对角线判断
	count = 0;
	for (i = 0; i < ret-1; i++)
	{
		if (board[i][i] == board[i + 1][i + 1] && board[i][i] != ' ' && board[i + 1][i + 1] != ' ')
		{
			;
		}
		else
			count++;
	}
	if (count == 0)
	{
		return board[ret / 2][ret / 2];
	}
	count = 0;
	for (j = ret - 1; j > 0; j--)
	{
		if (board[j][j] == board[j - 1][j - 1] && board[j][j] != ' ' && board[j - 1][j - 1] != ' ')
		{
			;
		}
		else
			count++;
	}
	if (count == 0)
	{
		return board[ret / 2][ret / 2];
	}
	
	return 'p';
}