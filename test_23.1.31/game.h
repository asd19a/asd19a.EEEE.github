#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


#define ROW 100
#define COL 100

//#define ret 9
#define COUNT 10

char arr[ROW][COL];
char tmp[ROW][COL];

void init(int ret);

void buzhi(int ret,int sign);

void show(int ret);

int souji(int ret,int sign);

void print(int ret);

void printboard(int ret);

void makeself(int r_s[]);
