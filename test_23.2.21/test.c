#define _CRT_SECURE_NO_WARNINGS


#include "SepList.h"


void testSepList()
{
	SepList s;
	/*SepListinit(&s);
	SepListpushback(&s, 1);
	SepListpushback(&s, 2);
	SepListpushback(&s, 3);
	SepListpushback(&s, 4);
	SepListpushback(&s, 5);
	SepListpushback(&s, 6);
	SepListpushback(&s, 7);
	SepListpushback(&s, 8);
	SepListpushback(&s, 9);
	SepListprint(&s);
	printf("Î²É¾:\n");
	SepListpopback(&s);
	SepListprint(&s);
	printf("Í·É¾:\n");
	SepListpopfront(&s);
	SepListprint(&s);
	printf("Í·²å(5):\n");
	SepListpushfront(&s, 5);
	SepListprint(&s);
	printf("Î²²å(6):\n");
	SepListpushback(&s, 6);
	SepListprint(&s);
	SepListsearch(&s);
	SepListmodify(&s);
	SepListprint(&s);*/
	SepListinit(&s);
	SepListprint(&s);
	SepListdestroy(&s);
}

int main()
{
	SepList s;
	testSepList();
	return 0;
}