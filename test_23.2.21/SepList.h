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

//初始化
void SepListinit(SepList* ps);

//销毁
void SepListdestroy(SepList* ps);

//扩容
void expcapacity(SepList* ps);

//打印
void SepListprint(SepList* ps);

//尾插
void SepListpushback(SepList* ps, SLdatatype x);

//头插
void SepListpushfront(SepList* ps, SLdatatype x);

//尾删
void SepListpopback(SepList* ps);

//头删
void SepListpopfront(SepList* ps);

//查询
void SepListsearch(SepList* ps);

//修改
void SepListmodify(SepList* ps);