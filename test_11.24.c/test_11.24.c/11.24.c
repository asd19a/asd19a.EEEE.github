#include <stdio.h>
#include <math.h>



//void print(int* ptr, int sz)
//{
//	printf("%p\n", ptr);
//	printf("%d\n", *ptr);
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = arr;
//	printf("%p\n", arr);
//	print(p, 5);
//
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 6,3,8,1,9 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = i + 1; j < 5; j++)
//		{
//			if (arr[i + 1] > arr[i])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d  ", arr[i]);
//
//	}
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 4,2,8,1,5 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = i + 1; j < 5; j++)
//		{
//
//		}
//	}
//}


//int prime(int i)
//{
//	int j = sqrt(i);
//	for (int n = 2; n <= j; n++)
//	{
//		if (i % n == 0)
//		{
//			return -1;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		int x=prime(i);
//		if (x == 1)
//		{
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}

//int LowCount(int arr[], int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] < 60)
//			count++;
//	}
//	return count;
//}

//double Average(int arr[], int n)
//{
//	double sum = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum = sum + arr[i];
//	}
//	return (double)(sum / n);
//}

//int highAve(int arr[], int n, double ave)
//{
//	int i = 0;
//	int count2 = 0;
//	for (i = 0; i < n; i++)
//	{
//		if ((double)arr[i] > ave)
//			count2++;
//	}
//	return count2;
//}

//int main()
//{
//	int n = 0;
//	int arr[40] = { 0 };
//	int count1 = 0; int count2 = 0;
//	int x = 0;
//	int i = 0;
//	printf("请输入人数:>");
//	scanf_s("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("请输入第%d位学生成绩:>",i+1);
//		scanf_s("%d", &x);
//		arr[i] = x;
//		
//	}
//	count1 = LowCount(arr, n);
//	double ave=Average(arr, n);
//	count2 = highAve(arr, n,ave);
//	/*for (i = 0; i < n; i++)
//	{
//		if (arr[i] < 60)
//		{
//			count++;
//		}
//	}*/
//	printf("平均分ave=%4.2lf\n", ave);
//	printf("不及格人数count=%d\n", count1);
//	printf("高于平均分人数count=%d", count2);
//	return 0;
//
//}


//int MaxGrade(int arr[], int n)
//{
//	int i = 0;
//	int j = 0;
//	int max = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			j = i;
//		}
//	}
//	return j;
//}
//
//int main()
//{
//	char num[40] = { 0 };
//	int arr[40] = { 0 };
//	int n = 0;
//	printf("请输入人数:>");
//	scanf_s("%d", &n);
//	int i = 0; int m = 0;
//	int grade = 0;
//	for (i = 0; i < n; i++)
//	{
//		
//		printf("请输入第%d位学生的学号\n", i + 1);
//		gets_s(num, 40);
//		
//		
//	}
//	
//	int j = MaxGrade(arr, n);
//	printf("最高分max=%d\n", arr[j]);
//	printf("学号为%s\n", num[j]);
//	return 0;
//}



//void FindMax(int arr[], int sz)
//{
//	int i = 0;
//	int k1 = 0; int k2 = 0;
//	int max = arr[0];
//	int min = arr[1];
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//			k1 = i;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] < min)
//			k2 = i;
//	}
//	int tmp = arr[k1];
//	arr[k1] = arr[k2];
//	arr[k2] = tmp;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int x = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &x);
//		arr[i] = x;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	FindMax(arr, 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//
//}


//long long Fact(int n)
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	char arr[200] = " ";
//	long long ret = 0;
//	int i = 0;
//	for (n = 1; n <= 40; n++)
//	{
//		ret = Fact(n);
//		i = 0;
//		while (ret / 10 != 0)
//		{
//			arr[i] = ret % 10-'0';
//			i++;
//			ret = ret / 10;
//		}
//		printf("%d的阶乘:>", n);
//		for (i = 0; i < 100; i++)
//		{
//			printf("%c", arr[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char ch = '1';
//	printf("%d\n", ch);
//	return 0;
//}



int main()
{
	int jw, w = 1, t, a[5000];
	int i, j, z;
	a[0] = 1;
	for (i = 1; i <= 50; i++)
	{
		for (j = 1, jw = 0; j <= w; j++)
		{
			t = a[j - 1] * i + jw;
			a[j - 1] = t % 10;
			jw = t / 10;
		}
		while (jw)
		{
			a[++w - 1] = jw % 10;
			jw = jw / 10;
		}
		for (z = w; z >= -1; z--)
		{
			printf("%d", a[z - 1]);
		}
		printf("\n");
	}
}