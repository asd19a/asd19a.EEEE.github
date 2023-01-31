#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


#define ROW 100
#define COL 100

#define ret 9
#define COUNT 10

char arr[ROW][COL];
char tmp[ROW][COL];

void init();

void buzhi();

void show();

int souji();

void print();

void printboard();
