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

//��ʼ��
void SepListinit(SepList* ps);

//����
void SepListdestroy(SepList* ps);

//����
void expcapacity(SepList* ps);

//��ӡ
void SepListprint(SepList* ps);

//β��
void SepListpushback(SepList* ps, SLdatatype x);

//ͷ��
void SepListpushfront(SepList* ps, SLdatatype x);

//βɾ
void SepListpopback(SepList* ps);

//ͷɾ
void SepListpopfront(SepList* ps);

//��ѯ
void SepListsearch(SepList* ps);

//�޸�
void SepListmodify(SepList* ps);