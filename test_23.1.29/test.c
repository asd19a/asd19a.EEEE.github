#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int (*f)(int, int) = { Add };
	int ret = f(8, 9);
	printf("%d\n", ret);
	return 0;
}