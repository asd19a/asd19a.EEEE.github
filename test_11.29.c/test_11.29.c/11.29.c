#include "func.h"



//#define n 2
//#define m 4
//
//int main()
//{
//	/*int a = 10;
//	int* p = &a;
//	printf("%d\n", a);
//	printf("%d\n", *p);
//	printf("%p\n", &a);
//	printf("%p\n", p);*/
//	int arr[n][m] = { 0 };
//	double str[n] = { 0 };
//	int x = 0;
//	int i = 0;
//	int j = 0;
//	int a, b;
//	double ave = 0;
//	double sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("请为第%d位选手打分:>\n",i+1);
//		for (j = 0; j < m; j++)
//		{
//			printf("请第%d位评委打分:>", j + 1);
//			scanf_s("%d", &x);
//			arr[i][j] = x;
//		}
//		//int max = arr[i][0];
//		/*for (a = 0; a < m-1; a++)
//		{
//			for (b = a+1; b < m; b++)
//			{
//				if (arr[i][a] < arr[i][b])
//				{
//					int tmp = arr[i][a];
//					arr[i][a] = arr[i][b];
//					arr[i][b] = tmp;
//				}
//			}
//		}*/
//		int max = arr[i][0]; int min = arr[i][0];
//		int k = 0; int p = 0;
//		for (a = 0; a < m; a++)
//		{
//			if (arr[i][a] > max)
//			{
//				k = a;
//			}
//		}
//		for (a = 0; a < m; a++)
//		{
//			if (arr[i][a] < min)
//			{
//				p = a;
//			}
//		}
//		//double sum = 0;
//		/*for (a = 1; a < m - 1; a++)
//		{
//			 sum = sum+arr[i][a];
//		}*/
//		for (a = 0; a < m; a++)
//		{
//			if (a != k && a != p)
//			{
//				sum = sum + arr[i][a];
//			}
//		}
//		str[i] = (double)(sum / (m - 2));
//		printf("average%d=%6.2lf\n", i + 1, (double)(sum / (m - 2)));
//		
//	}
//	int max = str[0];
//	for (i = 0; i < m - 1; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (str[j] < max)
//			{
//				int tmp = max;
//				max = str[j];
//				str[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%6.2lf\n", str[i]);
//	}
//


//int main()
//{
//	int arr[6] = { 1,5,3,7,2,4 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = i + 1; j < 6; j++)
//		{
//			int max = arr[i];
//			if (arr[j] > arr[i])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	int j = 0;
//	int arr[2][3] = { 2,5,1,4,3,6 };
//	int x = 0;
//	for (x = 0; x < 2; x++)
//	{
//		for (j = x + 1; j < 3; j++)
//		{
//			if (arr[i][x] > arr[i][j])
//			{
//				int tmp = arr[i][x];
//				arr[i][x] = arr[i][j];
//				arr[i][j] = tmp;
//			}
//
//		}
//	}
//	for (j = 0; j < 3; j++)
//	{
//		printf("%d  ", arr[1][j]);
//	}
//	return 0;
//}


//int Max_Min(int *str, int sz,int x)
//{
//	int i = 0;
//	if (x == 1)
//	{
//		int max = *str;
//		for (i = 0; i < sz; i++)
//		{
//			if (*(str + i) > max)
//			{
//				max = i;
//			}
//		}
//		return max;
//	}
//	else
//	{
//		int min = 0;
//		for (i = 0; i < sz; i++)
//		{
//			if (*(str + i) < min)
//			{
//				min = i;
//			}
//		}
//		return min;
//	}
//}

//void Swap(int *str,int max, int min)
//{
//	int tmp = *(str + max);
//	*(str + max) = *(str + min);
//	*(str + min) = tmp;
//}
//int main()
//{
//	int x = 0;
//	int i = 0; int j = 0;
//	int arr[10] = {0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf_s("%d", &x);
//		arr[i] = x;
//	}
//	int max = Max_Min(arr, sz,1);
//	int min = Max_Min(arr, sz,0);
//	Swap(arr,max,min);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//
//}

//int Dayofyear(int year, int month, int day)
//{
//	int n = 0;
//	
//	
//		if (month <= 2)
//		{
//			
//			n = (month/ 2) * 31 + day;
//			return n;
//			
//		}
//		else
//		{
//			
//			for (int i = 3; i < month; i++)
//			{
//				if (i % 2 == 1)
//				{
//					n = n + 31;
//				}
//				else
//				{
//					n = n + 30;
//				}
//			}
//			if (month >= 8)
//			{
//				if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//					return n + 61+day;
//				else
//					return n+60+day;
//			}
//			else
//			{
//				if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//					return n + 60+day;
//				else
//					return n+59+day;
//			}
//		}
//	
//}
//
//int main()
//{
//	int i = 0;
//	int y = 0, m = 0, d = 0;
//	printf("请输入年月日:>");
//	scanf_s("%d%d%d", &y, &m, &d);
//	int n = Dayofyear(y, m, d);
//	printf("%d\n", n);
//	return 0;
//}


//void MonthDay(int year, int yearday)
//{
//	int count = 0;
//	int i = 0;
//	int tmp =0;
//	if (yearday <= 31)
//	{
//		printf("%d月%d日\n", count++, yearday);
//	}
//	else 
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			if (yearday > 31 && yearday <= 60)
//			{
//				printf("2月%d日\n", yearday - 31);
//				
//			}
//			
//			else
//			{
//				count = 2;
//				for (i = 3; i < 12; i++)
//				{
//					if (i % 2 == 1)
//					{
//						tmp = 60 + 31;
//						yearday = yearday - 31;
//						if (tmp != yearday)
//							count++;
//						else
//							break;
//					}
//					else
//					{
//						tmp = tmp + 30;
//						yearday = yearday - 30;
//						if (tmp != yearday)
//							count++;
//						else
//							break;
//					}
//
//				}
//			}
//			printf("%d月%d日\n", count, yearday);
//		}
//	}
//
//}


//int main()
//{
//	int y = 0;
//	int d = 0;
//	scanf_s("%d%d", &y, &d);
//	MonthDay(y,d);
//	
//}


void menu()
{
	printf("			1.year/month/day->yearday			\n");
	printf("			2.yearday->year/month/day			\n");
	printf("			3.exit								\n");
	printf("			请选择:>							\n");
}

int main()
{
	int input = 0;
	int i = 0; int y = 0, m = 0, d = 0;
	do
	{
		menu();
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			
			printf("请输入年月日:>");
			scanf_s("%d%d%d", &y, &m, &d);
			int n = Dayofyear(y, m, d);
			printf("%d\n", n);
			break;
		case 2:
			printf("请输入年,日:>");
			scanf_s("%d%d", &y, &d);
			MonthDay(y,d);
			break;
		case 3:
			printf("exit\n");
			break;
		default :
			printf("选择错误,重新选择\n");
			break;
		}
	} while (input < 1 || input>3);
	return 0;

}