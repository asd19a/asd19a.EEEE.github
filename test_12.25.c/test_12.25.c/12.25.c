#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <String.h>
#include <math.h>
#include <stdlib.h>


//打印数组
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int cmp_int(void* e1, void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_by_age(void *e1,void *e2)
//{
//	return ((struct Stu*)e2)->age - ((struct Stu*)e1)->age;
//}
//void test2()
//{
//	struct Stu s[] = { {"zhangsan",36},{"lisi",24},{"wangwu",42} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_by_age);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", s[i].age);
//	}
//}
//int cmp_by_name(void* e1,void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e1)->name);
//}
//void test3()
//{
//	struct Stu s[] = { {"zhangsan",36},{"lisi",24},{"wangwu",42} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_by_name);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s\n", s[i].name);
//	}
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *((int*)e2) - *((int*)e1);
//} 
////交换函数
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
////模拟实现冒泡算法，并使它可以排任何类型的数据
//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0, j = 0;
//	for (i = 0; i < sz - 1; i++)  //确定趟数
//	{
//		for (j = 0; j < sz - 1 - i; j++) //一趟比较
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width); //交换
//			}
//		}
//	}
//}
//void test4()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//}
//int main()
//{
//	test4();
//	return 0;
//}
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();
//	return 0;
//}


//int cmp_int(const void* e1, const void* e2)   //这个函数的解释请参看下图
//{
//    return (*(int*)e1 - *(int*)e2);
//}
//
//int main()
//{
//    int i;
//    int arr[] = { 88, 56, 100, 2, 25 };
//    printf("排序之前的列表：\n");
//    for (i = 0; i < 5; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    qsort(arr, 5, sizeof(int), cmp_int);  //调用 qsort 函数
//
//    printf("\n排序之后的列表：\n");
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return(0);
//}


//int main()
//{
//    char  arr[30][150];
//	int n = 0, i = 0, j = 0;
//	scanf("%d", &n);
//	getchar();
//	char* parr[30];
//	for (i = 0; i < n; i++)
//	{
//		parr[i] = arr[i];
//		gets(arr[i]);
//	}
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (strcmp(parr[i], parr[j]) > 0)
//			{
//				/*char tmp[150];
//				strcpy(tmp, *(parr[i]));
//				strcpy(*(parr[i]), *(parr[j]));
//				strcpy(*(parr[j]), tmp);*/
//				char* p = NULL;
//				p = parr[i];
//				parr[i] = parr[j];
//				parr[j] = p;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		puts(parr[i]);
//	}
//	return 0;
//
//}

//int main()
//{
//	//char a[] = "asdfg";
//	//char b[] = "qwert";
//	//char c[] = "zxcvb";
//	//char* p[3] = { a,b,c };
//	////printf("%c\n", *(p[0]));
//	//puts(p[0]);
//	//puts(*(p[0]));
//	char arr[2][3] = { "as","zx" };
//	printf("%s\n", arr[0]);
//	printf("%s\n", &arr[0]);
//	return 0;
//}


//int cmp_char(const void* e1, const void* e2)
//{
//	return strcmp((*(char(*)[])e1), * ((char(*)[])e2));
//}
//int cmp_char_parr(const void* e1, const void* e2)
//{
//	//char* p[3] = { NULL };
//	return strcmp((*(char( *) [])e1), *((char( *) [])e2));
//}
//int main()
//{
//	
//	int i = 0;
//	char* parr[3] = { "abc","zxc","qwe"};
//	
//	qsort(parr, 3, 3, cmp_char_parr);
//	/*qsort(arr, 3, 20, cmp_char);
//	for (i = 0; i < 3; i++)
//	{
//		puts(arr[i]);
//	}*/
//	for (i = 0; i < 3; i++)
//	{
//		puts(parr[i]);
//	}
//	return 0;
//}


//int main()
//{
//
//}


//int main()
//{
//	int input = 0;
//	char* p[13] = { "00","yiyue","eryue","sanyue","siyue","wuyue","liuyue","qiyue","bayue","jiuyue","shiyue","shiyiyue","shieryue" };
//	do
//	{
//		printf("请输入月份:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			puts(p[input]);
//			break;
//		case 2:
//			puts(p[input]);
//			break;
//		case 3:
//			puts(p[input]);
//			break;
//		case 4:
//			puts(p[input]);
//			break;
//		case 5:
//			puts(p[input]);
//			break;
//		case 6:
//			puts(p[input]);
//			break;
//		case 7:
//			puts(p[input]);
//			break;
//		case 8:
//			puts(p[input]);
//			break;
//		case 9:
//			puts(p[input]);
//			break;
//		case 10:
//			puts(p[input]);
//			break;
//		case 11:
//			puts(p[input]);
//			break;
//		case 12:
//			puts(p[input]);
//			break;
//		case 0:
//			printf("exit\n");
//			break;
//		default:
//			printf("输入错误。重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//#define N 10
//
//void print(int arr[][N], int n)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d  ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void Transpose(int arr[][N], int n)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//}

//void Transpose(int(*a)[N], int n)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d  ", *(a[j]+i));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入:>");
//	scanf("%d", &n);
//	int arr[10][N] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	Transpose(arr, n);
//	//print(arr, n);
//
//}


//找二维数组的最大值

int main()
{
	int arr[20][20] = { 0 };
	int n = 0, m = 0;
	int i = 0, j = 0;
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int* p = &arr[0][0];
	int max = arr[0][0];
	
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if ((*(p+i*20+j))> max)
			{
				max = (*(p + i*20+ j));
			}
		}
	}
	printf("max=%d\n", max);
	return 0;
}