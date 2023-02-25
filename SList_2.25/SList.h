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


void SListprint(SLNode* phead);   //¥Ú”°

void SListpushback(SLNode** pphead,SLdatatype x);   //Œ≤≤Â

void SListpushfront(SLNode** pphead, SLdatatype x);   //Õ∑≤Â

void SListpopfront(SLNode** pphead);   //Õ∑…æ

void SListpopback(SLNode** pphead);   //Œ≤…æ

SLNode* SListfind(SLNode* phead,SLdatatype x);   //≤È’“

void SListinsert(SLNode** pphead, SLNode* pos,SLdatatype x);   //≤Â»Î

void SListerase(SLNode** pphead, SLNode* pos, SLdatatype x);   // Õ∑≈
