#include <stdio.h>
#include <math.h>
#include <string.h>



//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	int Len = 50;
//	/*for (n = 0; n < Len; n++)
//	{
//		arr[n] = " ";
//	}*/
//	int i = 0;
//	int ret = 1;
//	int len = Len;
//	int tmp = 0;
//	for (i = 1; i <= 40; i++)
//	{
//		ret = ret * i;
//		
//		tmp = ret;
//			arr[len-1] = (tmp % 10);
//			tmp = tmp / 10;
//			for (n = 0; n < Len ; n++)
//			{
//				printf("%d", arr[n]);
//			}
//			printf("\n");
//			len--;
//			
//		
//		
//		
//	}
//	return 0;
//}


int Max_Min(int* str, int sz,int n)
{
	int i = 0;
	if (n == 1)
	{
		int max = *str;
		for (i = 0; i < sz; i++)
		{
			if (*(str + i) > max)
			{
				max = *(str + i);
			}
		}
		return max;
	}
	if (n == 0)
	{
		int min = *str;
		for (i = 0; i < sz; i++)
		{
			if (*(str + i) < min)
			{
				min = *(str + i);
			}
		}
		return min;
	}
}

double Average(int x1, int x2, int x3)
{
	double x = (x1 + x2 + x3) / 3.0;
	return x;
}

int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	int x = 0, x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0;
	double arr1[5] = { 0.0 };
	int arr2[5] = { 0 };
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	double ave = 0;
	for (i = 1; i <= 3; i++)
	{
		printf("请评委们为第%d位选手打分\n", i);
		for (j = 1; j <= 5; j++)
		{
			printf("请第%d位评委打分:>", j);
			scanf_s("%d", &x);
			arr2[j - 1] = x;
			
		}
		/*arr2[0] = x1; arr2[1] = x2; arr2[2] = x3; arr2[3] = x4; arr2[4] = x5;*/
		/*int max = Max_Min(arr2, sz, 1);
		int min = Max_Min(arr2, sz, 0);*/
		int left = 0;
		int tmp = 0;
		for (n = 0; n < sz; n++)
		{
			for (left = tmp; left < sz; left++)
			{
				if (arr2[left] > arr2[left + 1]);
				{
					arr2[left] = arr2[left + 1];
				}
			}
			tmp++;
		}
		ave = (arr2[1] + arr2[2] + arr2[3]) / 3.0;
		printf("第%d位选手的平均分位%lf", i, ave);
		printf("\n");
		
	}
	return 0;
}