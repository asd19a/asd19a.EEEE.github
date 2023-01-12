#pragma once


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define MAX_NUM  10
#define MAX_TEL  12
#define MAX_PRICE  10
#define MAX_STATE  10
#define MAX_ID     20
#define MAX_TIME   20

#define DEFAULT_SZ  5
#define INC_SZ  3



typedef struct hotelroom
{
	char roomnum[MAX_NUM];
	char tel[MAX_TEL];
	int price;
	char state[MAX_STATE];
}roominfor;

typedef struct information
{
	char room_num[MAX_NUM];
	char idcard[MAX_ID];
	char intime[MAX_TIME];
	int _price;
	char outtime[MAX_TIME];
    int cost;
}in_infor;


typedef struct save
{
	roominfor* dataroom;
	in_infor* datain;
	int sz1;
	int sz2;
	int capacity1;
	int capacity2;
}save;


void Init(save* ph);

void download(save* ph);

void print(save* ph);

void print2(save* ph);

void iscapacity(save* ph);

void addroom(save* ph);

void delroom(save* ph);

void searchroom(save* ph);

void check(save* ph);

void checkout(save* ph);

void Saveinfor(save* ph);

void destroy(save* ph);
