#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int prim(int k)
{
	int i = 1;
	for (i = 2; i < k; i++)
	{
		if (k % i == 0)
			return 0;
	}
	return 1;
}

//int main()
//{
//	int k = 0 ;
//	while (scanf("%d", &k) != EOF)
//	{
//		int ret = prim(k);
//		if (ret == 1)
//			printf("素数\n");
//		else
//			printf("不是素数\n");
//	}
//	return 0;
//
//}


//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (prim(i) == 1)
//			printf("%d  ", i);
//	}
//	printf("\n");
//	return 0;
//}


//void print(char arr1[], char arr2[], int len)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (arr1[i] == 'a' || arr1[i] == 'A' ||
//			arr1[i] == 'e' || arr1[i] == 'E' ||
//			arr1[i] == 'i' || arr1[i] == 'I' ||
//			arr1[i] == 'o' || arr1[i] == 'O' ||
//			arr1[i] == 'u' || arr1[i] == 'U')
//		{
//			arr2[j] = arr1[i];
//			j++;
//		}
//	}
//	arr2[j] = '\0';
//}
//
//int main()
//{
//	char arr1[100];
//	printf("arr1:>");
//	gets(arr1);
//	char arr2[100];
//	//int i = 0, j = 0;
//	int len = strlen(arr1);
//	print(arr1, arr2, len);
//	//arr2[j] = '\0';
//	puts(arr2);
//	return 0;
//}


//#define M 10
//#define N 5
//
//char arr[5][10] = {"语", "数", "外", "物", "生"};
//void scan(int grade[][N])
//{
//	int i = 0, j = 0;
//	
//	//printf("\t\t%-6s%-6s%-6s%-6s%-6s\n", "语", "数", "外", "物", "生");
//	for (i = 0; i < M; i++)
//	{
//		printf("第%d位学生:\n", i + 1);
//		for (j = 0; j < N; j++)
//		{
//			printf("%s:>", arr[j]);
//			scanf("%d", &grade[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void Ave_stu(int grade[][N], double ave_stu[])
//{
//	int i = 0, j = 0;
//	double sum = 0;
//	for (i = 0; i < M; i++)
//	{
//		sum = 0;
//		for (j = 0; j < N; j++)
//		{
//			sum = sum + grade[i][j];
//		}
//		ave_stu[i] = sum / N;
//	}
//}
//
//void Ave_class(int grade[][N], double ave_class[])
//{
//	int i = 0, j = 0;
//	double sum = 0;
//	for (i = 0; i < N; i++)
//	{
//		sum = 0;
//		for (j = 0; j < M; j++)
//		{
//			sum = sum + grade[j][i];
//		}
//		ave_class[i] = sum / M;
//	}
//}
//
//void Max_grade_class(int grade[][N])
//{
//	int i = 0, j = 0;
//	int max = grade[0][0];
//	int stu_class[2] = { 0 };
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			if (grade[i][j] > max)
//			{
//				max = grade[i][j];
//				stu_class[0] = i;
//				stu_class[1] = j;
//			}
//		}
//	}
//	printf("最高分:> %d\n", max);
//	printf("第%d位同学\n", stu_class[0] + 1);
//	printf("学科:> %s\n", arr[stu_class[1]]);
//}
//
//int main()
//{
//	int grade[M][N];
//	int i = 0, j = 0;
//	scan(grade);
//	double ave_stu[M];
//	double ave_class[N];
//	Ave_stu(grade, ave_stu);
//	printf("学生平均分\n");
//	for (i = 0; i < M; i++)
//	{
//		printf("第%d位学生   %.2lf\n", i + 1, ave_stu[i]);
//	}
//	printf("\n\n");
//	Ave_class(grade, ave_class);
//	printf("学科平均分\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("%s  %.2lf\n", arr[i], ave_class[i]);
//	}
//	printf("\n\n");
//	Max_grade_class(grade);
//	return 0;
//
//}