#define _CRT_SECURE_NO_WARNINGS

#include "SList.h"


void testSList()
{
	SLNode* plist = NULL;
	SListpushback(&plist, 1);
	SListpushback(&plist, 2);
	SListpushback(&plist, 3);
	SListpushback(&plist, 4);
	SListprint(plist);
	SListpushfront(&plist, 0);
	SListprint(plist);
	SListpopfront(&plist);
	SListprint(plist);
	SListpopback(&plist);
	SListpopback(&plist);
	SListpopback(&plist);
	SListpopback(&plist);
	SListpopback(&plist);
	SListprint(plist);
}

int main()
{
	testSList();
	return 0;
}
