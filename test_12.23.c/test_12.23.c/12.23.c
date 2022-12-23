#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <math.h>


//int main()
//{
//	/*float a = 5.5f;
//	int* p = (int*)&a;
//	printf("a=%f\n", a);
//	printf("int*p=%d\n", *p*/);
//
//
//
//
//	/*int a = 9;
//	float* p = (float*)&a;
//	printf("a=%d\n", a);
//	printf("*p=%.64f\n", *p);*/
//
//
//
//
//
//
//	/*float a = 4.2f;*/
//
//
//
//
//
//
//
//
//	return 0;
//}



//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[5] = { 2,3,4,5,6 };
//	int c[5] = { 3,4,5,6,7 };
//	int* parr[3] = { a,b,c };
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d  ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0,j=0;
//	for (i = 0; i < 3; i++)  //初始化数组
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 2; i++)  //从小到大排序
//	{
//		for (j = i + 1; j < 3; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)  //打印数组
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	char arr[3][20];
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		gets(arr[i]);
//	}
//	for (i = 0; i < 2; i++)
//	{
//		for (j = i + 1; j < 3; j++)
//		{
//			if (strcmp(arr[i], arr[j]) > 0)
//			{
//				char tmp[20];
//				strcpy(tmp, arr[i]);
//				strcpy(arr[i], arr[j]);
//				strcpy(arr[j], tmp);
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[3][3];
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	/*int* p = &arr[0][0];
//	int t = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = i; j < 3; j++)
//		{
//			t = *(p + 3 * i + j);
//			*(p + 3 * i + j) = *(p + 3 * j + i);
//			*(p + 3 * j + i) = t;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}*/
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);
//	int* p = &a;
//	*p = 20;
//	printf("a=%d\n", a);
//	printf("p=%p\n", p);
//	return 0;
//
//}

