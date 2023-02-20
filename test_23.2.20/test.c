#define _CRT_SECURE_NO_WARNINGS


#include "SepList.h"

void testSepList()
{
	SepList s;
	SepListinit(&s);
	SepListpushback(&s, 1);
	SepListpushback(&s, 2);
	SepListpushback(&s, 3);
	SepListpushback(&s, 4);
	SepListpushback(&s, 5);
	SepListpushback(&s, 6);
	SepListpushfront(&s, 1);
	SepListpushfront(&s, 1);
	SepListpushfront(&s, 1);
	SepListpushfront(&s, 1);
	printSepList(&s);

}

int main()
{
	//SepList s;
	testSepList();
	//SepListinit(&s);
	return 0;
}