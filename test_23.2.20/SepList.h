#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int datatype;

typedef struct SepList
{
	datatype* arr;
	int sz;
	int capacity;
}SepList;

void expcapacity(SepList* ps);  //����

void printSepList(SepList* ps); //��ӡ

void SepListinit(SepList* ps);  //��ʼ��

void SepListpushback(SepList* ps, datatype x);  //β��

void SepListpushfront(SepList* ps, datatype x); //ͷ��