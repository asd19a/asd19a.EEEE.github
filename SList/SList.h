#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLdatatype;

typedef struct SListNode
{
	SLdatatype data;
	struct SListNode* next;
}SLNode;


void SListprint(SLNode* phead);

void SListpushback(SLNode** pphead,SLdatatype x);

void SListpushfront(SLNode** pphead, SLdatatype x);

void SListpopfront(SLNode** pphead);

void SListpopback(SLNode** pphead);