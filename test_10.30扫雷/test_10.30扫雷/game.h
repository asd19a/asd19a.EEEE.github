#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>



#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2


#define COUNT1 10
#define COUNT2 30
#define COUNT3 60
#define COUNT4 80


void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

void DisplayBoard(char board[ROWS][COLS], int row, int col);

void Setmine(char board[ROWS][COLS], int row, int col);

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);


