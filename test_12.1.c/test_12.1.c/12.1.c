#include <stdio.h>
#include <string.h>
#include <math.h>

//int main()
//{
	/*int arr[2][3] = { 1,2,3,4,5,6 };
	int(*p)[3] = &arr;
	int i = 0; int j = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d  ", *(*(p + i) + j));
		}
		printf("\n");
	}*/
//int main()
//{
//	char arr[20] = " ";
//	fgets(arr, sizeof(arr), stdin);
//	int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z'))
//			count1++;
//		else if (arr[i] == ' ')
//			count2++;
//		else if (arr[i] >= '0' && arr[i] <= '9')
//			count3++;
//		else
//			count4++;
//	}
//	printf("字母count1=%d\n", count1);
//	printf("空格count2=%d\n", count2);
//	printf("数字count3=%d\n", count3);
//	printf("其他count4=%d\n", count4);
//	return 0;
//}


	/*int n = 0;
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		n=
	}*/




	/*return 0;
}*/


//void Swap(int* x, int* y)
//{
//	/*int* ptmp = NULL;
//	*ptmp = *x;
//	*x = *y;
//	*y = *ptmp;*/
//	int* ptmp = NULL;
//	ptmp = x;
//	x = y;
//	y = ptmp;
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


//void test(int** ppa)
//{
//	**ppa = 20;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* ppa = &pa;
//	test(&pa);
//	printf("a=%d\n", a);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*pf)(int, int)=&Add;
//	int ret = (*pf)(1, 2);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//
//int main()
//{
//	int x = 1;
//	int i = 0;
//	int tmp = 0;
//	while (1)
//	{
//		tmp = x;
//		for (i = 1; i < 10; i++)
//		{
//			tmp= tmp / 2 - 1;
//		}
//		if (tmp==2)
//		{
//			printf("x=%d\n", x++);
//			break;
//		}
//		else
//			x++;
//	}
//	return 0;
//}
//
//int XZ(char* str1, char* str2, int len)
//{
//
//}
//
//int main()
//{
//	char arr1[5] = "abcde";
//	char arr2[5] = "cdeab";
//	int len = strlen(arr1);
//	int ret=XZ(arr1, arr2, len);
//}


//int main()
//{
//	int n = 0;
//	int b1 = 0, b2 = 0, b3 = 0;
//	int sum = 0;
//	for (n = 100; n < 1000; n++)
//	{
//		b1 = n / 100;
//		b2 = (n / 10) % 10;
//		b3 = n % 10;
//		sum = pow(b1, 3) + pow(b2, 3) + pow(b3, 3);
//		if (n == sum)
//		{
//			printf("%d\t", n);
//		}
//	}
//	return 0;
//}