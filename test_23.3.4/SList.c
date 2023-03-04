#define _CRT_SECURE_NO_WARNINGS


#include "SList.h"


void testSList()
{
	SLNode* plist = NULL;
	//SListpushback(&plist, 1);
	/*for (int i = 1; i <= 5; i++)
	{
		SListpushback(&plist, i);
	}*/
	/*for (int i = 1; i <= 5; i++)
	{
		SListpushfront(&plist, i);
	}
	SListpopback(&plist);
	SListpopback(&plist);*/
	for (int i = 1; i <= 5; i++)
	{
		SListpushback(&plist, i);
	}
	//SListpopfront(&plist);
	//SListinsert(&plist, 3,20);
	SListerase(&plist, 4);
	SListprint(plist);
}

int main()

{
	testSList();
	return 0;
}