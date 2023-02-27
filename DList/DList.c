#define _CRT_SECURE_NO_WARNINGS

#include "DList.h"

DLNode* BuyNewNode(DLdatatype x)
{
	DLNode* newnode = (DLNode*)malloc(sizeof(DLNode));
	newnode->data = x;
	newnode->pre = NULL;
	newnode->next = NULL;
	return newnode;
}

void DListinit(DLNode**plist)
{
	*plist = BuyNewNode(0);
	(*plist)->next = *plist;
	(*plist)->pre = *plist;
}
