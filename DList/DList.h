#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef int DLdatatype;

typedef struct DLNode
{
	struct DLNode* pre;
	DLdatatype data;
	struct DLNode* next;
}DLNode;

void DListinit(DLNode** plist);
