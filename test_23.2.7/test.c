#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>


//int main()
//{
//	int arr[5] = { 1,3,1,2,2 };
//	int i = 0, j = 0;
//	int count = 0;
//	for (i = 0; i < 5; i++)
//	{
//		count = 0;
//		for (j = 0; j < 5; j++)
//		{
//			if (arr[i] == arr[j] && i != j)
//			{
//				count = 1;
//				break;
//			}
//		}
//		if (count == 0)
//		{
//			printf("%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}


//void find_dog(int arr[], int sz, int dog[])
//{
//	assert(arr);
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if ((arr[i] & 1) == 1)
//		{
//			dog[0] = dog[0] ^ arr[i];
//		}
//		else
//		{
//			dog[1] = dog[1] ^ arr[i];
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int dog[2] = { 0 };
//	find_dog(arr, sz, dog);
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		printf("%d  ", dog[i]);
//	}
//	return 0;
//}

int state = 0;  //默认不合法

int my_atoi(char* str)
{
	assert(str);
	long long ret = 0;
	int flag = 1;
	if (*str == '\0')  //是否是空字符串
	{
		return 0;
	}
	while (isspace(*str) > 0)  //跳过空白字符
	{
		str++;
	}
	if (*str == '+')  //判断正负
	{
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			ret = ret * 10 + flag * (*str - '0');
			if (ret > INT_MAX)  //是否超过整型的范围
			{
				return INT_MAX;
			}
			else if (ret < INT_MIN)
			{
				return INT_MIN;
			}
		}
		else
		{
			return (int)ret;
		}
		str++;
	}
	state = 1;
	return (int)ret;
}


int main()
{
	char arr[] = "         a12a34";
	int ret = my_atoi(arr);
	if (state == 0)
	{
		printf("非法转换   %d\n", ret);
	}
	else
	{
		printf("%d\n", ret);
	}
	return 0;
}