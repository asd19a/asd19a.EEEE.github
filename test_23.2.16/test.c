#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


//int f(int n)
//{
//	static int a = 1;
//	n += a++;
//	return n;
//}
//
//
//int main()
//{
//	int b = 3, s;
//	s = f(b);
//	s = s + f(b);
//	printf("%d\n", s);
//	return 0;
//}


void fun(char* s, int m1, int m2)
{
	char t, * p;
	p = s + m1;
	s = s + m2;
	while (s < p)
	{
		t = *s;
		*s = *p;
		*p = t;
		s++;
		p--;
	}
}


int main()
{
	char ss[10] = "876543210";
	int n = 6;
	fun(ss, 0, n - 1);
	fun(ss, 9, n);
	fun(ss, 0, 9);
	printf("%s\n", ss);
	return 0;
}