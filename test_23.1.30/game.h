#pragma once


#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

#define ROW 100
#define COL 100

char board[ROW][COL];


void initboard(int ret);

void printboard(int ret);

void playermove(int ret);

void computmove(int ret);

char iswin(int ret);

