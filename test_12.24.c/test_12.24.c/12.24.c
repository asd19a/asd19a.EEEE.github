#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <string.h>
#include <math.h>

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void move(int arr[], int sz)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			for (j = i + 1; j < sz; j++)
//			{
//				if (arr[j] % 2 == 1)
//				{
//					int tmp = arr[i];
//					arr[i] = arr[j];
//					arr[j] = tmp;
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}



//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("凶手是%c\n", killer);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3)) == 1
//							&& ((b == 2) + (e == 4)) == 1
//							&& ((c == 1) + (d == 2)) == 1
//							&& ((c == 5) + (d == 3)) == 1
//							&& ((e == 4) + (a == 1)) == 1
//							)
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("A=%d  B=%d  C=%d  D=%d  E=%d\n", a, b, c, d, e);
//								break;
//							}
//
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

void menu()
{
	printf("********************************************************\n");
	printf("*********            1.Add     2.Sub          **********\n");
	printf("*********            3.Mul     4.Div          **********\n");
	printf("*********                 0.exit              **********\n");
	printf("********************************************************\n");

}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int input = 0;
	int (*parr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		int x = 0, y = 0, ret = 0;
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			ret = (parr[input])(x, y);
			printf("ret=%d\n", ret);
		}
		else if (input == 0)
		{
			printf("exit\n");
		}
		else
		{
			printf("选择错误，重新选择\n");
		}
	} while (input);

	return 0;
}


//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[5] = { 5,6,7,8,9 };
//	int* parr[2] = { a,b };
//	int i = 0, j = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void print(int(*parr)[5], int row,int col)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(parr+i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	print(arr, 2,5);
//	return 0;
//}


//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	printf("arr=%p\n", arr);
//	printf("&arr=%p\n\n", &arr);
//	printf("arr+1=%p\n", arr + 1);
//	printf("&arr+1=%p\n", &arr + 1);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pf)(int, int) = &Add;
//	int ret = pf(3, 5);
//	printf("ret=%d\n",ret);
//	return 0;
//}
////int main()
//{
//	printf("Add=%p\n", Add);
//	printf("&Add=%p\n", &Add);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*pf[2])(int, int) = { Add,Sub };
//	int add = pf[0](5, 3);
//	int sub = pf[1](5, 3);
//	printf("add=%d\n", add);
//	printf("sub=%d\n", sub);
//	return 0;
//}
