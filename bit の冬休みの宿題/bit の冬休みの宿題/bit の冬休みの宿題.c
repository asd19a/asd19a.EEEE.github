#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <string.h>
#include <math.h>

//day 01
//选择题

//1.C
//2.B
//3.ABCD
//4.B
//5.AB     

//编程题1：

//int main()
//{
//	int n = 0,i=0;
//	scanf("%d", &n);
//	int ret = pow(10, n) - 1;
//	for (i = 1; i <= ret; i++)
//	{
//		printf("%d,", i);
//	}
//	return 0;
//
//}

//编程题2:

//int main()
//{
//	int year = 0, month = 0, day = 0;
//	scanf("%d %d %d", &year, &month, &day);
//	int sum = 31;
//	if (month < 2)
//		printf("%d\n", day);
//	else if (month >= 2 && month < 7)
//	{
//		 int tmp = month;
//		int flag = 0;
//		for (tmp = 1; tmp < month - 2; tmp++)
//		{
//			if (tmp % 2 == 0)
//			{
//				flag = -1;
//			}
//			sum = sum + 31 + flag;
//			flag = 0;
//			
//		}
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d\n", sum + 29+day);
//		}
//		else
//			printf("%d\n", sum + 28+day);
//	}
//	else if (month == 7)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//			printf("%d\n", 182 + day);
//		else
//			printf("%d\n", 181 + day);
//	}
//	else if (month == 8)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//			printf("%d\n", 213 + day);
//		else
//			printf("%d\n", 212 + day);
//	}
//	else
//	{
//		int ret = 0; 
//		int tmp = month;
//		int flag = 0;
//		for (tmp = 9; tmp < month ; tmp++)
//		{
//			if (tmp % 2 == 0)
//			{
//				flag = 1;
//			}
//			ret = ret + 30 + flag;
//			flag = 0;
//		}
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//			printf("%d\n", 244 + day+ret);
//		else
//			printf("%d\n", 243 + day+ret);
//
//	}
//	return 0;
//}






//day 02
//选择题

//1.A
//2.B
//3.C
//4.B
//5.D

//编程题1:

//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int M = pow(m, 3);
//	int i = 0,j=1;
//	int sum = 0;
//	int count = 0;
//	while (1)
//	{
//		sum = 0;
//		count = 0;
//		for (i = j; count < m; count++, i = i + 2)
//		{
//			sum = sum + i;
//		}
//		if (sum == M)
//		{
//			for (count = 0; count < m; count++, j = j + 2)
//			{
//				printf("%d", j);
//				if (count < m - 1)
//					printf("+");
//			}
//			break;
//		}
//		j = j + 2;
//		
//	}
//	return 0;
//}


//编程题2:

//int main()
//{
//	int n = 0, i = 0, sum = 0;
//	int j = 2;
//	while (scanf("%d", &n) != EOF)
//	{
//		sum = 0;
//		for (i = 0,j=2; i < n; i++,j=j+3)
//		{
//			sum = sum + j;
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}
