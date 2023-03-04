#define _CRT_SECURE_NO_WARNINGS


#include "SList.h"


void SListprint(SLNode* phead)
{
	SLNode* cur = phead;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}


SLNode* Buynewnode(SLdatatype x)
{
	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
	assert(newnode);
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void SListpushback(SLNode** pphead, SLdatatype x)
{
	assert(pphead);
	//assert(*pphead);
	SLNode* newnode = Buynewnode(x);
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
	assert(pphead);
	SLNode* newnode = Buynewnode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}


void SListpopback(SLNode** pphead)
{
	assert(*pphead);
	assert(pphead);
	SLNode* tail = *pphead;
	SLNode* prev = *pphead;
	while (tail->next != NULL)
	{
		prev = tail;
		tail = tail->next;
	}
	free(tail);
	prev->next = NULL;
}



void SListpopfront(SLNode** pphead)
{
	assert(*pphead);
	assert(pphead);
	SLNode* next = (*pphead)->next;
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		free(*pphead);
		*pphead = next;
	}
}


SLNode* find(SLNode**pphead, SLdatatype x)
{
	assert(pphead);
	SLNode* cur = *pphead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		else
			cur = cur->next;
	}
	return NULL;
}


void SListinsert(SLNode** pphead,SLdatatype x,SLdatatype insert)
{
	assert(pphead);
	SLNode* pos = find(pphead, x);
	SLNode* prev = *pphead;
	SLNode* cur = *pphead;
	SLNode* newnode = Buynewnode(insert);
	if (pos == NULL)
	{
		SListpushfront(pphead, x);
	}
	else
	{
		while (cur->data != pos->data)
		{
			prev = cur;
			cur = cur->next;
		}
		prev->next = newnode;
		newnode->next = pos;
	}

}


void SListerase(SLNode** pphead, SLdatatype erase)
{
	assert(pphead);
	assert(*pphead);
	SLNode* pos = find(pphead, erase);
	SLNode* prev = *pphead;
	SLNode* cur = *pphead;
	if (pos == NULL)
	{
		return;
	}
	else
	{
		while (cur->data != pos->data)
		{
			prev = cur;
			cur = cur->next;
		}
		prev->next = pos->next;
		free(pos);
		//prev->next = cur->next;
		pos = NULL;
	}
}