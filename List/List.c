#define _CRT_SECURE_NO_WARNINGS

#include "List.h"


ListNode* Buynewnode(Ldatatype x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	assert(newnode);
	newnode->data = x;
	newnode->prev = NULL;
	newnode->next = NULL;
	return newnode;
}

ListNode* Listinit()
{
	ListNode* phead = Buynewnode(0);
	phead->prev = phead;
	phead->next = phead;
	return phead;
}


void Listdestroy(ListNode** pphead)
{
	assert(pphead);
	ListNode* first = (*pphead)->next;
	ListNode* second = first->next;
	while (first != *pphead)
	{
		free(first);
		first = second;
		second = second->next;
	}
	free(*pphead);
	*pphead = NULL;
}


void Listprint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("phead\n");
}

void Listpushback(ListNode** pphead, Ldatatype x)
{
	assert(pphead);
	ListNode* newnode = Buynewnode(x);
	ListNode* tail = (*pphead)->prev;
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = *pphead;
	(*pphead)->prev = newnode;
	//Listinsert(pphead, *pphead, x);
}


void Listpushfront(ListNode** pphead, Ldatatype x)
{
	assert(pphead);
	assert(*pphead);
	ListNode* newnode = Buynewnode(x);
	ListNode* first = (*pphead)->next;
	(*pphead)->next = newnode;
	newnode->prev = *pphead;
	newnode->next = first;
	first->prev = newnode;
}


void Listpopback(ListNode** pphead)
{
	assert(pphead);
	assert((*pphead)->next != *pphead);
	ListNode* tail = (*pphead)->prev;
	ListNode* prev = tail->prev;
	prev->next = *pphead;
	(*pphead)->prev = prev;
	free(tail);
	tail = NULL;
}


void Listpopfront(ListNode** pphead)
{
	assert(pphead);
	assert((*pphead)->next != *pphead);
	ListNode* next = (*pphead)->next;
	ListNode* first = next->next;
	(*pphead)->next = first;
	first->prev = *pphead;
	free(next);
	next = NULL;
}


ListNode* find(ListNode*phead,Ldatatype x)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}

	return NULL;
}


void Listinsert(ListNode** pphead, Ldatatype x, Ldatatype insert)
{
	assert(pphead);
	ListNode* pos = find(*pphead, x);
	if (pos == NULL)
	{
		printf("找不到数据\n");
		
	}
	else
	{
		ListNode* newnode = Buynewnode(insert);
		ListNode* prev = pos->prev;
		prev->next = newnode;
		newnode->prev = prev;
		newnode->next = pos;
		pos->prev = newnode;
	}
}


void Listerase(ListNode** pphead, Ldatatype x)
{
	assert(pphead);
	assert((*pphead)->next != *pphead);
	ListNode* pos = find(*pphead,x);
	if (pos == NULL)
	{
		printf("找不到数据\n");
	}
	else
	{
		ListNode* prev = pos->prev;
		ListNode* next = pos->next;
		prev->next = next;
		next->prev = prev;
		free(pos);
		pos = NULL;
	}
}


int Listlong(ListNode* phead)
{
	int n = 0;
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		n++;
		cur = cur->next;
	}
	return n;
}
