#define _CRT_SECURE_NO_WARNINGS

#include "SList.h"


void SListprint(SLNode* phead)
{
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

void SListpushback(SLNode** pphead,SLdatatype x)
{
	SLNode* newnode = BuySListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLNode* tail = *pphead;  //Ñ°ÕÒÎ²½Úµã
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
		newnode->next = *pphead;
		*pphead = newnode;
}


void SListpopfront(SLNode** pphead)
{
	if (*pphead == NULL)
	{
		return;
	}
	else
	{
		SLNode* next = (*pphead)->next;
		free(*pphead);
		*pphead = next;
	}
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
		pre->next = NULL;
	}
}


SLNode* SListfind(SLNode* phead, SLdatatype x)
{
	SLNode* pos = phead;
	while (pos)
	{
		if (pos->data == x)
		{
			return pos;
		}
		pos = pos->next;
	}
}


void SListinsert(SLNode** pphead, SLNode* pos,SLdatatype x)
{
	SLNode* newnode = BuySListNode(x);
	if (pos->next == NULL)
	{
		SListpushfront(pphead, x);
	}
	else
	{
		SLNode* pre = *pphead;
		while (pre->next != pos)
		{
			pre = pre->next;
		}
		pre->next = newnode;
		newnode->next = pos;
	}
}



void SListerase(SLNode** pphead, SLNode* pos, SLdatatype x)
{
	if (pos->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLNode* pre = *pphead;
		while (pre->next !=pos)
		{
			pre = pre->next;
		}
		pre->next = pos->next;
		free(pos);
	}
}