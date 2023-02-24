#define _CRT_SECURE_NO_WARNINGS

#include "SList.h"


void SListprint(SLNode* phead)
{
	//assert(phead);
	if (phead == NULL)
	{
		return;
	}
	SLNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}


SLNode* BuySListNode(SLdatatype x)
{
	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
	assert(newnode);
	newnode->data = x;
	newnode->next = NULL;
	
	return newnode;
}

void SListpushback(SLNode** pphead, SLdatatype x)
{
	SLNode* newnode = BuySListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
	
}


void SListpushfront(SLNode** pphead, SLdatatype x)
{
	SLNode* newnode = BuySListNode(x);
	newnode->data = x;
	newnode->next = *pphead;
	*pphead = newnode;
}


void SListpopfront(SLNode** pphead)
{
	SLNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

void SListpopback(SLNode** pphead)
{
	if (*pphead == NULL)
	{
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLNode* pre = NULL;
		SLNode* tail = *pphead;
		while (tail->next != NULL)
		{
			pre = tail;
			tail = tail->next;
		}
		free(tail);
		pre->next = NULL;
	}
}