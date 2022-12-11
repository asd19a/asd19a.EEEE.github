#include <stdio.h>

//#define PT 5.5
//#define S(x) PT*x*x
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("%lf\n",S(3) );
//
//	return 0;
//
//}

//int FUNC(int A, int B)
//{
//	int C;
//	C = A + B;
//	return C;
//}
//
//int main()
//{
//	int X = 6, Y = 7, Z = 8, R;
//	int r = 0;
//	R = FUNC(X + Y, Z--);
//	r = R;
//	printf("%d\n", R);
//	printf("%d\n", r);
//	return 0;
//}

//int main()
//{
//	int* p, a = 10, b = 1;
//	p = &a;
//	a = *p + b;
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i++ < 4;)//++优先级大于<
//	{
//		;
//	}
//	printf("%d\n", i);
//	return 0;
//}

#define f(x) x*x

int main()
{
	int a = 6;
	int b = 2;
	int c = 0;
	c = f(a) / f(b);
	printf("%d\n", c);
	return 0;
}