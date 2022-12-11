#include <stdio.h>
#include <math.h>


//int main()
//{
//	int arr[10] = { 0 };
//	//printf("%p\n", arr);//数组名是数组首元素的地址
//	//printf("%p\n", &arr[0]);
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p  <==>  %p\n", &arr[i], p + i);
//		*(p + i) = i;
//		printf("%d  ", *(p + i));
//	}
//	return 0;
//}


//#define sqr(x) ((x)*(x))
//
//int main()
//{
//	int         m;
//	printf("请输入一个整数:>");
//	scanf_s("%d", &m);
//	printf("%d\n", sqr(m));
//	return 0;
//}

//int main()
//{
//	printf("these values are:\n");
//	float x = 2.5;
//	float y = 2.5;
//	float z = 2.5;
//	printf("x=%f\n", x);
//	printf("y=%f\n", y);
//	printf("z=%f\n", z);
//	return 0;
//
//}


//题3.2

//int main()
//{
//	int a = 0;
//	int b1 = 0;
//	int b2 = 0;
//	int b3 = 0;  int x = 0;
//	scanf_s("%d", &a);
//	x = fabs(a);
//	b1 = x/100;
//	b2 = (x - b1 * 100) / 10;
//	b3 = x % 10;
//	printf("%d%d%d\n", b3, b2, b1);
//	return 0;
//
//}

//题3.3


#define rate 0.025

//double Deposit(double x, int y)
//{
//	//int i = 0;
//	
//	if (y >0)
//	{
//		double z = 0.0;
//		z = x * (1 + rate);
//		//i++;
//		return z + Deposit(x, y-1);
//	}
//}

//int main()
//{
//	//double rate = 0.025;
//	int n = 0; double i = 0.0;
//	double capital = 0.0;
//	double deposit = 0.0;
//	printf("请输入本金capital:>");
//	scanf_s("%lf", &capital);
//	//capital = 3.0;
//	printf("请输入存款期n:>");
//	scanf_s("%d", &n);
//	//n = 2;
//	/*for (i = 1; i <= n; i++)
//	{
//		deposit = capital * (1 + i*rate);
//	}
//	printf("本利之和deposit=%lf\n", deposit);*/
//	deposit = capital * pow(1 + rate, n);
//	printf("本利之和deposit=%lf\n", deposit);
//
//	/*i=Deposit(capital, n);
//	printf("deposit=%lf\n", i);*/
//	return 0;
//}




//题4.4

int main()
{
	char a = 0;
	
	while (1)
	{
		printf("请输入一个小写字母:>");
		scanf_s("%c", &a,1);
		if (a >= 'a' && a <= 'z')
		{
			a = a - 32;
			printf("%c   %d\n", a, a);
			break;
		}
		else
		{
			printf("输入错误,请重新输入\n");
			getchar();

		}
	}


	return 0;
}


//int main()
//{
//	int i = 0;
//	int n = 0;
//	long ret = 1;
//	int sum = 0;
//	scanf_s("%d", &n);
//	/*for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d的阶乘=%ld\n", n, ret);*/
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

