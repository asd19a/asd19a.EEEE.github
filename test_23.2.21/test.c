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
	printf("\nÎ²É¾:\n");
	SepListpopback(&s);
	SepListprint(&s);
	printf("\nÍ·É¾:\n");
	SepListpopfront(&s);
	SepListprint(&s);
	printf("\nÍ·²å:\n");
	SepListpushfront(&s, 5);
	SepListprint(&s);
	printf("\nÎ²²å:\n");
	SepListpushback(&s, 6);
	SepListprint(&s);

}

int main()
{
	SepList s;
	testSepList();
	return 0;
}