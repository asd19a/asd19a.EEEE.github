#define _CRT_SECURE_NO_WARNINGS


#include "SepList.h"


void testSepList()
{
	SepList s;
	SepListinit(&s);
	SepListpushback(&s, 2);
	SepListpushback(&s, 1);
	SepListpushback(&s, 1);
	SepListpushback(&s, 1);
	SepListpushback(&s, 1);
	SepListpushback(&s, 1);
	SepListpushback(&s, 1);
	SepListpushback(&s, 1);
	SepListpushback(&s, 4);
	SepListprint(&s);
	printf("\nβɾ:\n");
	SepListpopback(&s);
	SepListprint(&s);
	printf("\nͷɾ:\n");
	SepListpopfront(&s);
	SepListprint(&s);
	printf("\nͷ��:\n");
	SepListpushfront(&s, 5);
	SepListprint(&s);
	printf("\nβ��:\n");
	SepListpushback(&s, 6);
	SepListprint(&s);

}

int main()
{
	SepList s;
	testSepList();
	return 0;
}