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


void SListprint(SLNode* phead);   //��ӡ

void SListpushback(SLNode** pphead,SLdatatype x);   //β��

void SListpushfront(SLNode** pphead, SLdatatype x);   //ͷ��

void SListpopfront(SLNode** pphead);   //ͷɾ

void SListpopback(SLNode** pphead);   //βɾ

SLNode* SListfind(SLNode* phead,SLdatatype x);   //����

void SListinsert(SLNode** pphead, SLNode* pos,SLdatatype x);   //����

void SListerase(SLNode** pphead, SLNode* pos, SLdatatype x);   //�ͷ�
