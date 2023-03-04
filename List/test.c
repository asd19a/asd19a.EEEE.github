#define _CRT_SECURE_NO_WARNINGS

#include "List.h"

void testList()
{
	ListNode* phead = Listinit();
	int i = 0;
	/*for (i = 1; i <= 5; i++)
	{
		Listpushback(&phead, i);
	}*/
	/*for (i = 1; i <= 5; i++)
	{
		Listpushfront(&phead, i);
	}*/
	/*Listpopback(&phead);
	Listpopback(&phead);
	Listpopback(&phead);
	Listpopback(&phead);
	Listpopback(&phead); 
	Listpopback(&phead);*/
	/*Listpopfront(&phead);
	Listpopfront(&phead);
	Listpopfront(&phead);
	Listpopfront(&phead);
	Listpopfront(&phead);
	Listpopfront(&phead);*/
	Listinsert(&phead, 5, 20);
	Listerase(&phead, 20);
	Listerase(&phead, 1);
	Listerase(&phead, 3);
	//printf("Á´±í³¤¶È:> %d\n", Listlong(phead));
	Listdestroy(&phead);
	Listprint(phead);

}

void testList1()
{
	ListNode* phead = Listinit();
	int i = 0;
	for (i = 1; i <= 5; i++)
	{
		Listpushback(&phead, i);
	}
	Listprint(phead);
}

int main()
{
	//testList();
	testList1();
	return 0;
}
