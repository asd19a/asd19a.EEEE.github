#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>

//int main()
//{
//	char arr1[6] = "abcdef";
//	char arr2[6];
//	int left = 0;
//	int len = strlen(arr1);
//	int i = 0, j = 0,tmp=0;
//	for (i = 0; i <= tmp; i++)
//	{
//		for (j = 0; j <= tmp; j++)
//		{
//			arr
//		}
//	}
//}



//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "                 ";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		puts(arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	puts(arr2);
//	return 0;
//}

//int main()
//{
//	char password[] = "zy07230328";
//	char input[20];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		gets(input);
//		if (strcmp(password, input) != 0)
//		{
//			if (i == 2)
//			{
//				continue;
//			}
//			else
//			printf("密码错误,你还有%d次机会\n", 2 - i);
//		}
//		else
//		{
//			printf("恭喜你,密码正确!!\n");
//			break;
//		}
//	}
//	if (i == 3)
//	{
//		printf("很遗憾,你已经没有机会了");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int arr[100] = { 0 };
//	 int N = 0, L = 0, R = 0;
//	scanf("%d %d %d", &N, &L, &R);
//	 int i = 0, j = 0;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < N - 1; i++)
//	{
//		for (j = i + 1; j < N; j++)
//		{
//			if (fabs(arr[i]) >fabs( arr[j]))
//			{
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//			else if (fabs(arr[i]) == fabs(arr[j]))
//				{
//					if (arr[j] < 0)
//					{
//						int tmp = arr[i];
//						arr[i] = arr[j];
//						arr[j] = tmp;
//					}
//				}
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[1000]={0};
//	char arr2[1000]={0};
//	int i = 0, j = 0, n = 0, len1 = 0, len2 = 0;
//	gets(arr1);
//	gets(arr2);
//	len1 = strlen(arr1);
//	len2 = strlen(arr2);
//	scanf("%d", &n);
//	char arr3[1000]={0};
//	for (i = 0; i < len1 -1; i++)
//	{
//		for (j = i + 1; j < len1 ; j++)
//		{
//			if (arr1[j] < arr1[i])
//			{
//				char tmp = arr1[i];
//				arr1[i] = arr1[j];
//				arr1[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		arr3[i] = arr1[i];
//	}
//	for (i = 0; i < len2 - 1; i++)
//	{
//		for (j = i + 1; j < len2; j++)
//		{
//			if (arr2[j] < arr2[i])
//			{
//				char tmp = arr2[i];
//				arr2[i] = arr2[j];
//				arr2[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		arr3[i+n] = arr2[i];
//	}
//	for (i = 0; i <2*n-1; i++)
//	{
//		for (j = i + 1; j < 2*n; j++)
//		{
//			if (arr3[j] < arr3[i])
//			{
//				char tmp = arr3[i];
//				arr3[i] = arr3[j];
//				arr3[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < len1 + len2; i++)
//	{
//		printf("%c", arr3[i]);
//	}
//	return 0;
//}


int main()
{
	int arr[20][20];
	int n = 0, m = 0;
	printf("请输入行和列:>");
	scanf("%d %d", &n, &m);
	int i = 0, j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	//由行数控制循环
	int tmp1 = 0,tmp2=0,flag=0;  
	while (tmp1 < n)
	{
		flag = 0;
		int max = arr[i][0];
		for (j = 0; j < m; j++)	//寻找行上的最大值
		{
			if (arr[tmp1][j] > max)
			{
				max = arr[tmp1][j];
				tmp2 = j;
			}
		}
		//将行上的最大值与该列比较，看是否是最小值
		for (i = 0; i < n; i++)
		{
			if (arr[i][tmp2] < max)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			printf("有鞍点\n");
			break;
		}
		tmp1++;
	}
	if (flag != 0)
	{
		printf("无鞍点\n");
	}
	return 0;
}


//int main()
//{
//	int arr[1000][1000];
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	return 0;
//}