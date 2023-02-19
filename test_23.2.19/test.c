#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	int flag = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0, right = sz - 1;
//	int k = 0;
//	printf("k:>");
//	scanf("%d", &k);
//	int mid = 0;
//	while (left <= right)
//	{
//		flag = 0;
//		mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			flag = 1;
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("找不到\n");
//	return 0;
//}


//int main()
//{
//	int i = 0, j = 0;
//	int exchange = 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz - 1; i++)
//	{
//		exchange = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[i] < arr[j])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//				exchange = 1;
//			}
//		}
//		if (exchange == 0)
//			break;
//	}
//	printf("exchange:> %d\n", exchange);
//	for (i = 0; i < sz; i++)
//	{
//
//		printf("%d  ", arr[i]);
//
//	}
//	return 0;
//}