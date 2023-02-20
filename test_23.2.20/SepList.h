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

void expcapacity(SepList* ps);  //¿©»›

void printSepList(SepList* ps); //¥Ú”°

void SepListinit(SepList* ps);  //≥ı ºªØ

void SepListpushback(SepList* ps, datatype x);  //Œ≤≤Â

void SepListpushfront(SepList* ps, datatype x); //Õ∑≤Â