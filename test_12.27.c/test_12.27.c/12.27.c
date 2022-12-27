#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <math.h>


//杨氏矩阵
//方法1：二分查找
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = &arr[0][0];
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0][0]);
//	int right = sz - 1;
//	int mid = 0,flag=0;
//	int k = 10000;
//	while (left < right)
//	{
//		mid = (left + right)/2;
//		if (*(p + mid) > k)
//		{
//			right--;
//		}
//		else if (*(p + mid) < k)
//		{
//			left++;
//		}
//		else
//		{
//			flag = 1;
//			printf("找到了\n");
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("找不到\n");
//	return 0;
//}


//方法2：
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	printf("请输入要查询的数:>");
//	scanf("%d", &k);
//	int i = 0, j = 0,flag=0;
//	for (i = 0; i < 3; i++)
//	{
//		if (arr[i][2] > k)
//		{
//			for (j = 2; j >= 0; j--)
//			{
//				if (arr[i][j] == k)
//				{
//					flag = 1;
//					printf("找到了,位置是arr[%d][%d]\n",i,j);
//					goto end;
//				}
//				else if (arr[i][j] < k)
//				{
//					break;
//				}
//			}
//		}
//	}
//end:
//	if (flag == 0)
//		printf("找不到\n");
//	return 0;
//
//}


//int main()
//{
////	//printf("%d\n", strlen('a'));
////	char arr[] = { 'a','b','c','d','e','f' };
////	printf("%d\n", strlen(arr));
////	printf("%d\n", strlen(arr + 0));
////	//printf("%d\n", strlen(*arr));
////	//printf("%d\n", strlen(arr[1]));
////	printf("%d\n", strlen(&arr));
////	printf("%d\n", strlen(&arr + 1));
////	printf("%d\n", strlen(&arr[0] + 1));
////
////	/*printf("%d\n", strlen(arr));
////	printf("%d\n", strlen(&arr));*/
//
//   //char arr[] = "abcdef";
//   //printf("%d\n", strlen(arr));
//   //printf("%d\n", strlen(arr + 0));
//   ////printf("%d\n", strlen(*arr));
//   ////printf("%d\n", strlen(arr[1]));
//   //printf("%d\n", strlen(&arr));
//   //printf("%d\n", strlen(&arr + 1));
//   //printf("%d\n", strlen(&arr[0] + 1));
//
//	char* p = "abcdef";
//	
//	printf("%d\n", strlen(p));
//	printf("%d\n", strlen(p + 1));
//	//printf("%d\n", strlen(*p));
//	//printf("%d\n", strlen(p[0]));
//	printf("%d\n", strlen(&p));
//	printf("%d\n", strlen(&p + 1));
//	printf("%d\n", strlen(&p[0] + 1));
//	return 0;
//}



//左旋字符串

void string_left_rotate(char arr[], int k,int len)
{
	char tmp1[10]={0};
	char tmp2[100] = { 0 };
	int i = 0,j=0;
	for (i = 0; i < len; i++)    //将arr内的元素存到 tmp2 中
	{
		tmp2[i] = arr[i];
	}
	for (i = 0; i < k; i++)   //将要旋转的字符存到 tmp1 中
	{
		tmp1[i] = arr[i];  
	}
	for (i = 0; i < len - k; i++)  //利用 tmp2 使 arr 内未旋转的字符前移 k 位
	{
		arr[i] = tmp2[i + k];
	}
	for (i = len-k; i < len; i++,j++)   //将旋转的字符接在 arr 后面
	{
		arr[i] = tmp1[j];
	}
	
}

int main()
{
	char arr[100] = {0};
	printf("请输入需要操作的字符串:>");
	gets(arr);
	//getchar();
	int k = 0;
	int len = strlen(arr);
	printf("请输入需要旋转的字符个数:>");
	scanf("%d", &k);
	string_left_rotate(arr, k,len);
	puts(arr);
	return 0;
}