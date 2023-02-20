#define _CRT_SECURE_NO_WARNINGS


#include "SepList.h"

//void testSepList()
//{
//	SepList s;
//	SepListinit(&s);
//	SepListpushback(&s, 1);
//	SepListpushback(&s, 2);
//	SepListpushback(&s, 3);
//	SepListpushback(&s, 4);
//	SepListpushback(&s, 5);
//	SepListpushback(&s, 6);
//	SepListpushfront(&s, 1);
//	SepListpushfront(&s, 1);
//	SepListpushfront(&s, 1);
//	SepListpushfront(&s, 1);
//	printSepList(&s);
//
//}
//
//int main()
//{
//	//SepList s;
//	testSepList();
//	//SepListinit(&s);
//	return 0;
//}


//int main()
//{
//	int a = 8, b = 5, c;
//	c = a / b + 0.4;
//	printf("%d\n", c);
//	printf("%f\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 1, b = 2, c = 3, d = 4, m = 2, n = 2;
//	int x = (m = a > b) || (n = c > d);
//	printf("%d\n", x);
//	printf("%d\n", n);
//	printf("%d\n", c > d);
//
//	/*int a[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = a;
//	printf("%d\n", *p + 9);*/
//	return 0;
//}
//

//int func(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//
//int main()
//{
//	int x = 6, y = 7, z = 8;
//	int r = func(x + y, --z);
//	printf("%d\n", r);
//	printf("%d\n", z);
//	return 0;
//}

//int main()
//{
//	int m = 5;
//	if (m++ > 5)
//		printf("%d\n", m);
//	else
//		printf("%d\n", m--);
//	return 0;
//}

int main()
{
	int x = 3;
	do
	{
		printf("%d\n", x -= 2);
	} while (!(--x));
	return 0;
}