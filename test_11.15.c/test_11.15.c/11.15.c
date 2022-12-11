#include <stdio.h>
#include <math.h>

//#define  Amountstu 40
//#define  Amountsub 3
//
//int Sum1(int* str, int n)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum = sum + *(str + i);
//	}
//	return sum;
//}
//
//int Sum2(int str[][Amountsub], int n)
//{
//	int sum = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < Amountsub; j++)
//		{
//			sum = sum + str[i][j];
//		}
//	}
//	return sum;
//}
//double Ave1(int* str, int n)
//{
//	double ave = (double)(Sum1(str, n) / n);
//	return ave;
//}
//
//double Ave2(int str[][Amountsub], int n)
//{
//	double ave = 0;
//	ave = (double)(Sum2(str, n) / n);
//	return ave;
//}
//int main()
//{
//	int arr1[Amountstu][Amountsub] = { 0 };
//	int sum1[40] = { 0 }; int sum2[40] = { 0 };
//	double ave1[40] = { 0 }; double ave2[40] = { 0 };
//	int i = 0;
//	int j = 0; int n = 0;
//	int grade = 0; int x = 0; char y[9] = {0};
//	int sum = 0; double ave = 0;
//	
//	printf("请输入学生数:>");
//	scanf_s("%d", &n);
//	int tmp = 0;
//	for (i = 0; i < n; i++)
//	{
//		//printf("请输入第%d位学生的ID:>", i+1);
//		//scanf_s("%s", y);
//		printf("请输入第%d位学生的成绩:>",i);
//		for (j = 0; j < Amountsub; j++)
//		{
//			x=scanf_s("%d", &grade);
//			arr1[j][tmp] = x;
//		}
//		tmp++;
//		//第一位学生的总分与平均分
//		sum1[i] = Sum1(arr1, n);
//		ave1[i] = Ave1(arr1, n);
//	}
//	//计算每个学科的总分和平均分
//	for (i = 0; i < n; i++)
//	{
//		sum2[i] = Sum2(arr1, n);
//		ave2[i] = Ave2(arr1, n);
//	}
//	
//	printf("\n");
//	printf(" MT\t  EN\t  PH\t  SUM\t  AVE\t\n");
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < Amountsub; j++)
//		{
//			printf("%2d\t  ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 5,2,6,4,7,9,12,56,10,42 };
//	int n = 0;
//	int i = 0;
//	int tmp = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (n = 1; n < sz; n++)
//	{
//		for (i = 0; i < sz - 1-n ; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}
//

//int main()		
//
//{
//	int arr[10] = { 2,4,3,5,1,9,8,7,18,24 };
//	int n = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (n = 0; n < sz-2; n++)
//	{
//		for (i = n+1; i < sz; i++)
//		{
//			if (arr[i] < arr[n])
//			{
//				int tmp = arr[n];
//				arr[n] = arr[i];
//				arr[i] = tmp;
//			}
//		}
//	}
//	for (n = 0; n < sz; n++)
//	{
//		printf("%d  ", arr[n]);
//	}
//	return 0;
//}


int main()
{
	int arr[10] = { 2,8,4,9,5,1,14,89,36,20 };
	int i = 0;
	int j = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int tmp = 0;
	for (i = 1; i < sz; i++)
	{
		/*if (i == sz - 1)
		{
			for (j = i; j > 0; j--)
			{
				if (arr[i] < arr[j - 1])
				{
					tmp = arr[i];
					arr[i] = arr[j - 1];
					arr[j - 1] = tmp;
				}
			}
		}
		j = i - 1;*/
		for (j = i - 1; j >=0; j--)
		{
			if (arr[i] < arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}

		}
			
		

	}
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}