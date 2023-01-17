#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <String.h>
#include <stdlib.h>


//int arrayStringsAreEqual(char *word1[10],char *word2[10])
//{
//	
//	int i = 0, j = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (*(*(word1+i)+j)!=*(*(word2+i)+j))
//				return 0;
//		}
//	}
//	return 1;
//}
//
//
//int main()
//{
//	char word1[2][10] = { "ab","c" };
//	char word2[2][10] = { "a","cd" };
//	int ret = arrayStringsAreEqual(word1, word2);
//	if (ret == 1)
//		printf("true\n");
//	else
//		printf("false\n");
//	return 0;
//
//}


//bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size)
//{
//	int i = 0, j = 0;
//	int p1 = 0, p2 = 0;
//	while (p1 < word1Size && p2 < word2Size)
//	{
//		if (word1[p1][i] != word2[p2][j])
//			return false;
//		if (word1[p1][i] == '\0')
//		{
//			p1++;
//			i = 0;
//		}
//		if (word2[p2][j] == '\0')
//		{
//			p2++;
//			j = 0;
//		}
//		i++;
//		j++;
//	}
//	return p1 == word1Size && p2 == word2Size;
//}


//描述
//小明同学最近开发了一个网站，在用户注册账户的时候，需要设置账户的密码，为了加强账户的安全性，小明对密码强度有一定要求：
//
//1. 密码只能由大写字母，小写字母，数字构成；
//
//2. 密码不能以数字开头；
//
//3. 密码中至少出现大写字母，小写字母和数字这三种字符类型中的两种；
//
//4. 密码长度至少为8
//
//现在小明受到了n个密码，他想请你写程序判断这些密码中哪些是合适的，哪些是不合法的。
//
//输入描述：
//输入一个数n，接下来有n(n≤100)行，每行一个字符串，表示一个密码，输入保证字符串中只出现大写字母，小写字母和数字，字符串长度不超过100。
//输出描述：
//输入n行，如果密码合法，输出YES，不合法输出NO



//int main()
//{
//	char arr[100];
//	int n = 0, i = 0;
//	int count1 = 0, count2 = 0, count3 = 0;
//	int other = 0;
//	int flag = 1;
//	scanf("%d", &n);
//	while (n)
//	{
//		scanf("%s", arr);
//		getchar();
//		other = 0; count1 = 0; count2 = 0; count3 = 0;
//		flag = 1;
//		if (arr[0] >= '0' && arr[0] <= '9')
//		{
//			printf("NO\n");
//			continue;
//		}
//		if (strlen(arr) < 8)
//		{
//			printf("NO\n");
//			continue;
//		}
//		for (i = 0; i < strlen(arr); i++)
//		{
//			if (arr[i] >= '0' && arr[i] <= '9')
//				count1 = 1;
//			else if (arr[i] >= 'a' && arr[i] <= 'z')
//				count2 = 1;
//			else if (arr[i] >= 'A' && arr[i] <= 'Z')
//				count3 = 1;
//			else
//				other = 1;
//			if (other != 0)
//			{
//				flag = 0;
//				printf("NO\n");
//				break;
//			}
//		}
//		if ((count1 + count2 + count3) < 2)
//		{
//			flag = 0;
//			printf("NO\n");
//		}
//		if (flag == 1)
//			printf("YES\n");
//		n--;
//	}
//	return 0;
//}

//给定一个长度为 n 的非降序数组和一个非负数整数 k ，要求统计 k 在数组中出现的次数



//int main()
//{
//	int arr[1000];
//	int k = 0;
//
//}

//int GetNumberOfK(int* data, int dataLen, int k)
//{
//	/*int left = 0;
//	int right = dataLen - 1;
//	int mid = (left + right) / 2;*/
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < dataLen; i++)
//	{
//		if (data[i] == k)
//			count++;
//	}
//	return count;
//
//}


//int convertInteger(int A, int B)
//{
//	int ret1 = 0, ret2 = 0;
//	int i = 0;
//	int a = (unsigned int)A;
//	int b = (unsigned int)B;
//	int count = 0;
//	for (i = 1; i <= 32; i++)
//	{
//		ret1 = a & 1;
//		ret2 = b & 1;
//		if (ret1 != ret2)
//		{
//			count++;
//		}
//		a = a >> 1;
//		b = b >> 1;
//	}
//	return count;
//}

//给你一个整数数组 nums ，其中总是存在 唯一的 一个最大整数 。

//请你找出数组中的最大元素并检查它是否 至少是数组中每个其他数字的两倍 。如果是，则返回 最大元素的下标 ，否则返回 - 1

//int dominantIndex(int* nums, int numsSize)
//{
//	int i = 0, j = 0;
//	int max = nums[0];
//	int pos = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		if (nums[i] > max)
//		{
//			max = nums[i];
//			pos = i;
//		}
//	}
//	for (i = 0; i < numsSize; i++)
//	{
//		if (nums[i] != 0 && (max / nums[i]) < 2)
//			return -1;
//	}
//	return pos;
//}


//给定两个数组 nums1 和 nums2 ，返回 它们的交集 。输出结果中的每个元素一定是 唯一 的。我们可以 不考虑输出结果的顺序 。

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
	int i = 0, j = 0;
	int k = 0, m = 0;
	int* arr = (int*)malloc(nums1Size * sizeof(int));
	*returnSize = 0;
	int tmp[100];
	for (i = 0; i < nums1Size; i++)
	{
		for (j = 0; j < nums2Size; j++)
		{
			if (*returnSize != 0)
			{
				for (m = 0; m < k; m++)
				{
					if (nums1[i] == tmp[m])
					    goto end;
				}
			}
			if (nums1[i] == nums2[j])
			{
				arr[*returnSize] = nums1[i];
				tmp[k] = nums1[i];
				k++;
				*returnSize = *returnSize + 1;
				break;
			}
		}
	end:;
	}
	return arr;

}

int main()
{
	int arr1[100];
	int arr2[100];
	int n1 = 0, n2 = 0, returnSize = 0;
	printf("n1 n2:");
	scanf("%d%d", &n1, &n2);
	int i = 0;
	printf("arr1:>");
	for (i = 0; i < n1; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("arr2:>");
	for (i = 0; i < n2; i++)
	{
		scanf("%d", &arr2[i]);
	}
	int* arr = intersection(arr1, n1, arr2, n2, &returnSize);
	for (i = 0; i < returnSize; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}