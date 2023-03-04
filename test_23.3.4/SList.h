#define _CRT_SECURE_NO_WARNINGS


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

void SListpushback(SLNode** pphead, SLdatatype x);

void SListpushfront(SLNode** pphead, SLdatatype x);

void SListpopback(SLNode** pphead);

void SListpopfront(SLNode** pphead);

SLNode* find(SLNode**pphead, SLdatatype x);

void SListinsert(SLNode** pphead, SLdatatype x,SLdatatype insert);

void SListerase(SLNode** pphead, SLdatatype erase);


