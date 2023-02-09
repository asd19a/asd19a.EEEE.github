#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stddef.h>


//#define OFFSET(type,name) (size_t)&(((type*)0)->name)
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	printf("%zu\n", OFFSET(struct S, c2));
//	return 0;
//}


//#define SWAP(x) ((((x)&0x55555555)<<1)+(((x)&0xaaaaaaaa)>>1))
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	a = SWAP(a);
//	printf("%d\n", a);
//	return 0;
//}


//#define MOD(x,y) x*y
//
//int main()
//{
//	int m = MOD(2+3,2);
//	printf("%d\n", m);
//	return 0;
//}

//#define MAX(x,y) ((x)>(y)?(x):(y))
//
//int main()
//{
//	int a = 4;
//	int b = 6;
//	int m = MAX(a++, b++);
//	printf("m=%d\n", m);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//int main()
//{
//#if 1    //如果这个常量表达式为真，则执行后面的语句，反之则不执行
//	printf("haha\n");
//#endif
//	return 0;
//}

//#define M 10
//
//int main()
//{
//#if M==5
//	printf("mafumafu\n");
//#elif M==10
//	printf("Eve\n");
//#elif M==7
//	printf("Sou\n");
//#elif M==2
//	printf("amatsuki\n");
//#else 
//	printf("soraru");
//#endif
//	return 0;
//}


//#ifndef __TEST_H__   //如果没有定义  TEST_H__  则执行下一句代码  定义 __TEST_H__
//#define __TEST_H__
//#endif


//#define	OFFSET(type,member) &(((type*)0)->member)
//
//struct S
//{
//	int i;
//	float f;
//	char ch;
//};
//int main()
//{
//	printf("%d\n", OFFSET(struct S, f));
//	return 0;
//}


#define SWAP(x) ((((x)&0x55555555)<<1)+(((x)&0xaaaaaaaa)>>1))

int main()
{
	int x = 10;
	printf("%d\n", x);
	x = SWAP(x);
	printf("%d\n", x);
	return 0;
}