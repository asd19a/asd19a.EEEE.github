#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>



//int main()
//{
//	int x;
//	printf("%x\n", ~(x ^ x));
//	return 0;
//}

//void sort(char* str,int n)
//{
//	assert(str);
//	int i = 0, j = 0;
//	char ptmp = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = i + 1; j < n+1; j++)
//		{
//			if (*(str + i) > *(str + j))
//			{
//				ptmp = *(str + i);
//				*(str + i) = *(str + j);
//				*(str + j) = ptmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	char arr[1000];
//	char tmp[1000];
//	gets(arr);
//	int  i = 0, j = 0;
//	int digit = 0, lower = 0, upper = 0;
//	int len = strlen(arr);
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] >= '0' && arr[i] <= '9')
//		{
//			digit++;
//		}
//		else if (arr[i] >= 'a' && arr[i] <= 'z')
//		{
//			lower++;
//		}
//		else if (arr[i] >= 'A' && arr[i] <= 'Z')
//		{
//			upper++;
//		}
//	}
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] >= '0' && arr[i] <= '9')
//		{
//			tmp[j] = arr[i];
//			j++;
//		}
//	}
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] >= 'a' && arr[i] <= 'z')
//		{
//			tmp[j] = arr[i];
//			j++;
//		}
//	}
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] >= 'A' && arr[i] <= 'Z')
//		{
//			tmp[j] = arr[i];
//			j++;
//		}
//		
//	}
//	sort(tmp, digit);
//	sort(tmp + digit , lower-1);
//	sort(tmp + lower + digit, upper-1);
//	for (i = 0; i < len; i++)
//	{
//		printf("%c", tmp[i]);
//	}
//	return 0;
//}


//int pivotIndex(int* nums, int numsSize)
//{
//    int sum1 = 0, sum2 = 0;
//    int i = 0, j = 0;
//    for (i = 1; i < numsSize; i++)
//    {
//        sum1 = sum1 + nums[i];  //最左边
//    }
//    for (j = numsSize - 2; j >= 0; j--)
//    {
//        sum2 = sum2 + nums[j];  //最右边
//    }
//    if (sum1 == 0)
//        return 0;
//    if (sum2 == 0)
//        return numsSize - 1;
//    int flag = 0;
//    for (flag = 1; flag < numsSize - 1; flag++)
//    {
//        sum1 = 0;
//        sum2 = 0;
//        for (i = 0; i < flag; i++)
//        {
//            sum1 = sum1 + nums[i];
//        }
//        for (j = numsSize - 1; j > flag; j--)
//        {
//            sum2 = sum2 + nums[j];
//        }
//        if (sum1 == sum2)
//        {
//            return flag;
//        }
//    }
//    return -1;  //找不到
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int* arr = (int*)calloc(n, sizeof(int));
//    if (!arr)
//    {
//        perror("main");
//        return 0;
//    }
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//    int ret = pivotIndex(arr, n);
//    printf("ret=%d\n", ret);
//    free(arr);
//    arr = NULL;
//    return 0;
//}


//int main()
//{
//	char arr[500];
//	gets(arr);
//	int len = strlen(arr);
//	int i = 0, j = 0;
//	int count = 0;
//	int flag = 0;
//	int duibi[500];
//	for (i = 0; i < len; i++)
//	{
//		duibi[i] = 1;
//	}
//	for (i = 0; i < len-1; i++)
//	{
//		for (j = i + 1; j < len; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				duibi[j] = 2;
//			}
//		}
//	}
//	for (i = 0; i < len; i++)
//	{
//		if (duibi[i] == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

int majorityElement(int* nums, int numsSize)
{
    int m = numsSize / 2;
    int i = 0, count = 1, j = 0;
    int result= 0;
	int flag = 1;
	for (i = 0; i < numsSize - 1; i++)
	{
		for (j = flag; j < numsSize; j++)
		{
			if (nums[i] == nums[j])
			{
				count++;
			}
		}

		
		
    }
    return result;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int* arr = (int*)calloc(n, 4);
	if (!arr)
	{
		perror("main");
		return 0;
	}
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
    int ret = majorityElement(arr, n);
    printf("%d\n", ret);
    free(arr);
    arr = NULL;
    return 0;
}