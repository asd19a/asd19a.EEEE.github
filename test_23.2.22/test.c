#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;
//	int* pb = &b;
//	printf("pa : %p\n", pa);
//	printf("pb : %p\n", pb);
//	printf("&a : %p\n", &a);
//	printf("&b : %p\n", &b);
//	printf("交换:\n");
//	int* tmp = pa;
//	pa = pb;
//	pb = tmp;
//	printf("pa : %p\n", pa);
//	printf("pb : %p\n", pb);
//	printf("&a : %p\n", &a);
//	printf("&b : %p\n", &b);
//	printf("a: %d\n", a);
//	printf("b: %d\n", b);
//	printf("交换: \n");
//	int m = a;
//	a = b;
//	b = m;
//	printf("a: %d\n", a);
//	printf("b: %d\n", b);
//
//	/*int a = 10;
//	int b = 20;
//	int* p = &a;
//	&a = &b;
//	&b = p;*/
//	return 0;
//}


//void swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前:\n");
//	printf("a:> %d\n", a);
//	printf("b:> %d\n", b);
//	swap(&a, &b);
//	printf("交换后:\n");
//	printf("a:> %d\n", a);
//	printf("b:> %d\n", b);
//	return 0;
//}


//# include <stdio.h>

//int main() 
//{
//	void swi(int*);
//	int a[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
//	int* p;
//	p = &a[0][0];
//	swi(p);
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		printf("\n");
//		for (j = 0; j < 3; j++)
//			printf("%d", a[i][j]);
//	}
//}
//
//void swi(int* p) 
//{
//	int i, j, t;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = i; j < 3; j++)
//		{
//			t = *(p + (3 * i) + j);
//			*(p + (3 * i) + j) = *(p + (3 * j) + i);
//			*(p + (3 * j) + i) = t;
//		}
//	}
//}

#define M 4
#define N 5

char num[M][20] = { 0 };

double Ave_1(int arr[][N])
{
	int i = 0;
	double sum = 0;
	for (i = 0; i < M; i++)
	{
		sum = sum + arr[i][0];
	}
	return sum / M;
}

void Fail(int arr[][N])
{
	int i = 0, j = 0;
	int count = 0, flag = 0;
	int fail[M] = { 0 };
	double sum = 0;
	for (i = 0; i < M; i++)
	{
		count = 0;
		for (j = 0; j < N; j++)
		{
			if (arr[i][j] < 60)
				count++;
		}
		if (count > 2)
			fail[flag++] = i;
	}
	printf("两门以上课程不及格 :\n");
	for (i = 0; i < flag; i++)
	{
		sum = 0;
		printf("学号 : %s\n", num[fail[i]]);
		printf("各科成绩:> ");
		for (j = 0; j < N; j++)
		{
			printf("%d  ", arr[fail[i]][j]);
			sum = sum + arr[fail[i]][j];
		}
		printf("\n");
		printf("平均成绩 :> %.2lf\n", sum / N);
	}
}

void Great(int arr[][N])
{
	int i = 0, j = 0;
	double sum = 0;
	int tmp[M] = { 0 };
	int flag = 1, k = 0;
	for (i = 0; i < M; i++)
	{
		flag = 1;
		sum = 0;
		for (j = 0; j < N; j++)
		{
			if (arr[i][j] < 85)
				flag = 0;
			sum = sum + arr[i][j];
		}
		if ((sum / N) > 90 || flag == 1)
		{
			tmp[k++] = i;
		}
	}
	printf("平均成绩在90分以上或平均成绩在85分以上的学生:>\n");
	for (i = 0; i < k; i++)
	{
		printf("学号 :> %s\n", num[tmp[i]]);
	}
}

int main()
{
	int arr[M][N] = { 0 };
	int i = 0, j = 0;
	for (i = 0; i < M; i++)
	{
		printf("第%d位学生的学号 :>",i+1);
		gets(num[i]);
	}
	for (i = 0; i < M; i++)
	{
		printf("第%d位学生 :\n", i + 1);
		for (j = 0; j < N; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	double ave_1 = Ave_1(arr);
	printf("第一门课程的平均分 :>%.2lf\n", ave_1);
	Fail(arr);
	Great(arr);
	return 0;
}