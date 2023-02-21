#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


#define INIT_CAPACITY  5

typedef int SLdatatype;

typedef struct SepList
{
	SLdatatype* arr;
	int sz;
	int capacity;
}SepList;

//≥ı ºªØ
void SepListinit(SepList* ps);

//œ˙ªŸ
void SepListdestroy(SepList* ps);

//¿©»›
void expcapacity(SepList* ps);

//¥Ú”°
void SepListprint(SepList* ps);

//Œ≤≤Â
void SepListpushback(SepList* ps, SLdatatype x);

//Õ∑≤Â
void SepListpushfront(SepList* ps, SLdatatype x);

//Œ≤…æ
void SepListpopback(SepList* ps);

//Õ∑…æ
void SepListpopfront(SepList* ps);
