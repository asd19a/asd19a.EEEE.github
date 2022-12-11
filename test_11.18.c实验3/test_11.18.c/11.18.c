#include <stdio.h>
#include <math.h>

//int main()
//{
//	int a, b;
//	float d, e;
//	char c1, c2;
//	double f, g;
//	long m, n;
//	unsigned int p, q;
//	a = 61; b = 32;
//	/*c1 = 'a'; c2 = 'b';
//	d = 3.56; e = -6.87; f = 3157.890121; g = 0.123456789;
//	m = 50000; n = -60000; p = 32768; q = 40000;*/
//	c1 = a; c2 = b;
//
//	f = 3157.890121; g = 0.123456789;
//	d = f; e = g;
//	m = 50000; n = -60000;
//	p = a = m = 50000; q = b = n = -60000;
//	printf("a=%d,b=%d,\nc1=%c,c2=%c\nd=%6.2f,e=%6.2f\n", a, b, c1, c2, d, e);
//	printf("f=%15.6f,g=%15.12f\nm=%ld,n=%ld\np=%u,q=%u\n", f, q, m, n, p, q);
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%ld\n", sizeof(long));
//	printf("%d\n", sizeof(unsigned int));
//	return 0;
//}
//}

//#define PI 3.14;
//int main()
//{
//	double r = 0;
//	double h = 0;
//	printf("请输入半径r:>");
//	scanf_s("%lf", &r);
//	getchar();
//	printf("请输入高h:>");
//	scanf_s("%lf", &h);
//	double l = 0;  l = 2.0 * r * PI;
//	double s = 0;  s = r * r * PI;
//	double S = 0;  S = 4.0 * r * r * PI;
//	double V = 0;  V = (4 / 3.0) * pow(r, 3) * PI;
//	double v = 0;  v = pow(r, 2) * h * PI;
//	printf("l=%4.2f\ns=%4.2f\nS=%4.2f\nV=%4.2f\nv=%4.2f\n", l, s, S, V, v);
//	return 0;
//}
//}
//#define R 0.025
//int main()
//{
//	int input = 0;
//	int b = 0;
//	printf("请输入本金:>");
//	scanf_s("%d", &b);
//	double lx = 0;
//	int tmp = 0;
//	int n = 0;
//	do
//	{
//		printf("请选择存款方式:>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			lx = b * 5.0 * R;
//			printf("利息=%lf", lx);
//			break;
//		case 2:
//			tmp = b;
//			tmp = b * pow(R, 2);
//			lx = b * 2.0 * R + tmp * 3.0 * R;
//			printf("利息=%lf", lx);
//			break;
//		case 3:
//			tmp = b;
//			tmp = b * pow(R, 3);
//			lx = b * 3.0 * R + tmp * 2.0 * R;
//			printf("利息=%lf", lx);
//			break;
//		case 4:
//			for (n = 1; n <= 5; n++)
//			{
//				if (n == 1)
//				{
//					lx = b * 1.0 * R;
//				}
//				else
//				{
//					b = b * pow(1+R, 1);
//					lx = lx + b * 1.0 * R;
//				}
//				
//			}
//			printf("利息=%lf", lx);
//			break;
//		case 5:
//			for (n = 1; n <= 20; n++)
//			{
//				if (n == 1)
//				{
//					lx = b * 0.25 * R;
//				}
//				else
//				{
//					b = b * pow(1 + R, 1);
//					lx = lx + b * 0.25 * R;
//				}
//			}
//			printf("利息=%lf", lx);
//			break;
//		default:
//			printf("选择错误,重新选择\n");
//			break;
//		}
//	} while (input < 1 || input>5);
//	return 0;
//}


//int main()
//{
//	//char c1 = 0; scanf_s("%c", &c1); getchar();
//	//char c2 = 0; scanf_s("%c", &c2); getchar();
//	//char c3 = 0; scanf_s("%c", &c3); getchar();
//	//char c4 = 0; scanf_s("%c", &c4); getchar();
//	//char c5 = 0; scanf_s("%c", &c5); getchar();
//	////int n = 0;
//	char arr[100] = { 0 };
//	char x = 0;
//	int i = 0;
//	char n = 0;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	//x=scanf_s("%c", &n,1);
//	//	//getchar();
//	//	x=gets(arr)
//	//	arr[i] = x;
//	//}
//	gets_s(arr, 100);
//	for (i = 0; i < 5; i++)
//	{
//		if ((arr[i]+4) == 'W')
//		{
//			arr[i] = 'A';
//		}
//		if ((arr[i]+4) == 'X')
//		{
//			arr[i] = 'B';
//		}
//		if ((arr[i] +4)== 'Y')
//		{
//			arr[i] = 'C';
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c", arr[i]+4);
//	}
//	
//	
//
//	return 0;
//}


//int main()
//{
//	char c1 = 0;
//	char c2 = 0;
//	char c3 = 0;
//	int i = 0;
//	char ch = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ch = getchar();
//		putchar(ch);
//	}
//	return 0;
//}

int main()
{
	/*int a = 0;
	int b = 0;
	int c = 0;
	int x = 0;
	x = scanf_s("%d%d%d", &a, &b, &c);
	printf("x=%d\n", x);*/
	int i = 0;
	char arr[10] = { 0 };
	int n = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = getchar();
		getchar();
	}
	return 0;

	return 0;
}