#include "game.h"


void Initarr(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
}


void printarr(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j< col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}


void playMove(char arr[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家走:>");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用,请重新输入\n");
			}
		}
		else
		{
			printf("坐标非法,请重新输入\n");
		}
	}
}


void computeMove(char arr[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}
	}
}



int IsFull(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		for (j = 0; j <= col; j++)
		{
			if (arr[i][j] == ' ')
			{
				return 0;
			}
				
		}
	}
	return 1;
}
char IsWin(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	//判断行
	for (i = 0; i < row; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != ' ')
		{
			return arr[i][1];
		}
	}
	//判断列
	for (i = 0; i < col; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != ' ')
		{
			return arr[1][i];
		}
	}
	//判断对角线
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}

	//判断是否满
	//int ret = IsFull(arr, ROW, COL);
	if (IsFull(arr, ROW, COL) == 1)
	{
		return 'Q';
	}
	else if (IsFull(arr, ROW, COL) == 0)
	{
		return 'C';
	}

	
}