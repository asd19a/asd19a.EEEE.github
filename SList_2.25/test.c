#define _CRT_SECURE_NO_WARNINGS


#include "SList.h"


void testSList1()
{
	SLNode* plist = NULL;
	
	SListpushback(&plist,1);
	SListpushback(&plist,2);
	SListpushback(&plist,3);
	SListpushback(&plist,4);
	SListprint(plist);
	SListpushfront(&plist, 0);
	SListprint(plist);
	SListpopfront(&plist);
	SListpopfront(&plist);
	SListpopfront(&plist);
	SListprint(plist);
	SListpopback(&plist);
	SListpopback(&plist);
	SListpopback(&plist);
	SListprint(plist);
}

void testSList2()
{
	SLNode* plist = NULL;
	SListpushback(&plist, 1);
	SListpushback(&plist, 2);
	SListpushback(&plist, 3);
	SListpushback(&plist, 4);
	SLNode* pos = SListfind(plist, 3);
	if (pos)
	{
		SListinsert(&plist,pos, 20);
		SListprint(plist);
	}
	pos = SListfind(plist, 2);
	if (pos)
	{
		SListerase(&plist,pos,2);
		SListprint(plist);
	}
	
}

int main()
{
	//testSList1();
	testSList2();
	return 0;
}