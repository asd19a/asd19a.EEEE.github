#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <windows.h>

//int main()
//{
//	/*char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d\n", a, b, c);*/
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}


//int main()
//{
//	unsigned int i = 0;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d\n", i); Sleep(1000);
//	}
//	return 0;
//}


//int main()
//{
//	 unsigned char a = -1;
//	int b = 2;
//	printf("%d\n", a + b);
//	
//	return 0;
//}

int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("Ð¡¶Ë\n");
	}
	else
		printf("´ó¶Ë\n");
	return 0;
}