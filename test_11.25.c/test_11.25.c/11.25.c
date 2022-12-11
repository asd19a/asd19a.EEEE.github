#include <stdio.h>
#include <math.h>

//int MaxGrade(int *Grade, int sz)
//{
//	int i = 0;
//	int k = 0;
//	int max = *Grade;
//	for (i = 0; i < sz; i++)
//	{
//		if (*(Grade + i) > max)
//		{
//			max = *(Grade + i);
//			k = i;
//		}
//	}
//	return k;
//}
//
//int main()
//{
//	long long arr[40] = { 0 };
//	int Grade[40] = { 0 };
//	int grade = 0;
//	int i = 0;
//	long long x = 0;
//	int n = 0;
//	int k = 0;
//	printf("请输入学生人数:>");
//	scanf_s("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("请输入第%d位学生的学号:>", i + 1);
//		scanf_s("%lld", &x);
//		arr[i] = x;
//		//printf("\n");
//		printf("请输入该生成绩:>");
//		scanf_s("%d", &grade);
//		Grade[i] = grade;
//		
//		//printf("\n");
//		
//	}
//	k = MaxGrade(Grade, n);
//	printf("最高分max=%d\n", Grade[k]);
//	printf("学号为%lld\n", arr[k]);
//	return 0;
//}

////int Max(int x, int y)
////{
////	if (x > y)
////		return x;
////	else
////		return y;
////}
////int main()
////{
////	int a, b, c;
////	scanf_s("%d%d%d", &a, &b, &c);
////	int num1 = Max(a, b);
////	int num2 = Max(num1, c);
////	printf("max=%d\n", num2);
////	return 0;
////}


//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入x=");
//	scanf_s("%d", &x);
//	if (x < 1)
//	{
//		y = x;
//		printf("y=%d\n", y);
//	}
//	else if (x >= 1 && x < 10)
//	{
//		y = 2 * x - 1;
//		printf("y=%d\n", y);
//	}
//	else if (x >= 10)
//	{
//		y = 3 * x - 11;
//		printf("y=%d\n", y);
//	}
//	return 0;
//
//}


//int main()
//{
//	int x = 0;
//	int y = 0;
//	again:
//	
//		printf("请输入x=");
//		scanf_s("%d", &x);
//		if (x > 1000 || x <= 0)
//		{
//			printf("输入错误,重新输入\n");
//			goto again;
//		}
//		else
//		{
//			y = sqrt(x);
//			printf("x的平方根y=%d\n", y);
//		}
//		return 0;
//	
//		
//
//	
//}


//int main()
//{
//	int grade = 0;
//	while (1)
//	{
//		printf("请输入成绩:>");
//		scanf_s("%d", &grade);
//		if (grade < 0 || grade>100)
//		{
//			printf("输入错误,重新输入\n");
//		}
//		else if (grade > 90)
//		{
//			printf("A\n");
//			break;
//		}
//
//		else if (grade <= 90 && grade >= 80)
//		{
//			printf("B\n");
//			break;
//		}
//		else if (grade >= 70 && grade <= 79)
//		{
//			printf("C\n");
//			break;
//		}
//		else if (grade >= 60 && grade <= 69)
//		{
//			printf("D\n");
//			break;
//		}
//		else
//		{
//			printf("E\n");
//			break;
//		}
//			
//	}
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	do
//	{
//		
//		printf("请输入成绩:>");
//		scanf_s("%d", &x);
//		switch (x)
//		{
//		case 91:
//		case 92:
//		case 93:
//		case 94:
//		case 95:
//		case 96:
//		case 97:
//		case 98:
//		case 99:
//		case 100:
//			printf("A\n");
//			break;
//
//
//		}
//	}
//}



int main()
{
	int i = 0;
	int j = 0;
	int arr[4] = { 0 };
	int x = 0;
	for (i = 0; i < 4; i++)
	{
		scanf_s("%d", &x);
		arr[i] = x;
	}
	//交换排序(冒泡排序)
	/*for (i = 0; i < 3; i++)
	{
		for (j = i + 1; j < 4; j++)
		{
			if (arr[i] > arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}*/

	//选择排序
	for (i = 0; i < 3; i++)
	{
		for (j = i + 1; j < 4; j++)
		{
			int max = arr[i];
			if (arr[j] > arr[i])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (i = 0; i < 4; i++)
	{
		printf("%d  ", arr[i]);

	}
	return 0;
}

//while (1)
//{
//	printf("input a:");
//	scanf("%d", &a);
//	if (a < 0 || a>1000)
//	{
//		printf("输入数据错\n");
//	}
//	else
//	{
//		int y = sqrt(a);
//		printf("%d\n", y);
//		break;
//	}
//	return 0;
//}