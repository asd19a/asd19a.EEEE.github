#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>


int main()
{
	char a[7] = "abcdef";
	char b[4] = "ABC";
	strcpy(a, b);
	printf("%c\n", a[5]);
	return 0;
}
