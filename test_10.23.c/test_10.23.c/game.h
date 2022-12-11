#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ROW 3
#define COL 3


void Initarr(char arr[ROW][COL], int row, int col);

void Displayarr(char arr[ROW][COL], int row, int col);

void Play(char arr[ROW][COL], int row, int col);

void Computeplay(char arr[ROW][COL], int row, int col);

char IsWin(char arr[ROW][COL], int row, int col);

int IsFull(char arr[ROW][COL], int row, int col);