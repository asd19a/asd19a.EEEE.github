#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>


typedef int Ldatatype;

typedef struct ListNode
{
	Ldatatype data;
	struct ListNode* prev;
	struct ListNode* next;
}ListNode;


ListNode * Listinit();

void Listdestroy(ListNode** pphead);

void Listprint(ListNode* phead);

void Listpushback(ListNode** pphead, Ldatatype x);

void Listpushfront(ListNode** pphead, Ldatatype x);

void Listpopback(ListNode** pphead);

void Listpopfront(ListNode** pphead);

ListNode* find(ListNode*phead,Ldatatype x);

void Listinsert(ListNode** pphead, Ldatatype x, Ldatatype insert);

void Listerase(ListNode** pphead, Ldatatype x);

int Listlong(ListNode* phead);


