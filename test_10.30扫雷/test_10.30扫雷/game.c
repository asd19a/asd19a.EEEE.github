#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	
		int i = 0;
		int j = 0;
		printf("-------------É¨À×----------\n");
		for (i = 0; i <= col; i++)
		{
			printf("%d ", i);
		}
		printf("\n");
		for (i = 1; i <= row; i++)
		{
			printf("%d ", i);
			for (j = 1; j <= col; j++)
			{
				printf("%c ", board[i][j]);
			}
			printf("\n");
		}
		printf("-------------É¨À×----------\n");
	
}

void Setmine(char board[ROWS][COLS], int row, int col,int COUNT)
{
	int x = 0;
	int y = 0;
	int count = COUNT;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x][y] != '1')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] +
		mine[x - 1][y] - 8 * '0';
}

void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col,int COUNT)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-COUNT)
	{
		printf("ÇëÊäÈëÅÅ²é×ø±ê:>");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("    ºÜÒÅº¶,Äã±»Õ¨ËÀÁË!!!!!!!!!     \n");
				printf("    YOU ARE DIE    !!!!!!!!!!!     \n");
				printf("    ÏÂ´Î¼ÓÓÍÅ¶¹þ¹þ¹þ¹þ¹þ!!!!!!     \n ");
				DisplayBoard(mine,row,col);
				break;
			}
			else
			{
				int count = get_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("×ø±ê·Ç·¨,ÖØÐÂÊäÈë\n");
		}
	}
	if (win == row*col-COUNT)
	{
		printf("  ¹§Ï²Äã,ÅÅÀ×³É¹¦  \n");
		printf(" YOU   ARE   GREAT!!!! \n");
		DisplayBoard(mine, ROW, COL);

	}
}