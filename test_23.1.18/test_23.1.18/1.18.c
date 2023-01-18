#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>


//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	//printf("%s\n", __STDC__);
//}


//int main()
//{
//	printf("%u\n", sizeof(long));
//
//}


//int my_atoi(const char* s)
//{
//	assert(s);
//	int flag = 0;
//	const char* start = s;
//	if (*s == '-')
//	{
//		flag = 1;
//		s++;
//		start++;
//	}
//	int sum = 0;
//	int len = 0, n = 0;
//	int i = 0;
//	while (*s >= '0' && *s <= '9')
//	{
//		len++;
//		s++;
//	}
//	n = len;
//	for (i = 1; i <= len; i++)
//	{
//		int ret = pow(10, n - 1);
//		sum = sum + (*start - '0') * ret;
//		n--;
//		start++;
//	}
//	if (flag == 1)
//		return -sum;
//	return sum;
//}
//
//int main()
//{
//	const char* p = "-1234aw90";
//	int ret = my_atoi(p);
//	printf("%d\n", ret);
//	return 0;
//}


//给你一个下标从 0 开始的整数数组 nums 和两个整数 key 和 k 。K 近邻下标 是 nums 中的一个下标 i ，并满足至少存在一个下标 j 使得 | i - j| <= k 且 nums[j] == key 。
//
//以列表形式返回按 递增顺序 排序的所有 K 近邻下标。
//示例 1：
//输入：nums = [3, 4, 9, 1, 3, 9, 5], key = 9, k = 1
//输出：[1, 2, 3, 4, 5, 6]
//解释：因此，nums[2] == key 且 nums[5] == key 。
//- 对下标 0 ， | 0 - 2 | > k 且 | 0 - 5 | > k ，所以不存在 j 使得 | 0 - j| <= k 且 nums[j] == key 。所以 0 不是一个 K 近邻下标。
//- 对下标 1 ， | 1 - 2| <= k 且 nums[2] == key ，所以 1 是一个 K 近邻下标。
//- 对下标 2 ， | 2 - 2| <= k 且 nums[2] == key ，所以 2 是一个 K 近邻下标。
//- 对下标 3 ， | 3 - 2| <= k 且 nums[2] == key ，所以 3 是一个 K 近邻下标。
//- 对下标 4 ， | 4 - 5| <= k 且 nums[5] == key ，所以 4 是一个 K 近邻下标。
//- 对下标 5 ， | 5 - 5| <= k 且 nums[5] == key ，所以 5 是一个 K 近邻下标。
//- 对下标 6 ， | 6 - 5| <= k 且 nums[5] == key ，所以 6 是一个 K 近邻下标。
//因此，按递增顺序返回[1, 2, 3, 4, 5, 6] 。


//int* findKDistantIndices(int* nums, int numsSize, int key, int k, int* returnSize)
//{
//	int arr[1000];
//	int i = 0, j = 0;
//	int m = 0, n = 0, count = 0;
//	int* ret = (int *)malloc(numsSize * sizeof(int));
//	if (ret == NULL)
//	{
//		perror("malloc");
//		return NULL;
//	}
//	for (i = 0; i < numsSize; i++)
//	{
//		if (nums[i] == key)
//		{
//			arr[m] = i;
//			m++;
//		}
//	}
//	/*for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < numsSize; j++)
//		{
//			
//			if (fabs(j - arr[i]) <= k)
//			{
//				if (count != 0)
//				{
//					for (n = 0; n < count; n++)
//					{
//						if (j == ret[n])
//						{
//							goto end;
//						}
//					}
//				}
//				ret[count] = j;
//				count++;
//			}
//		end:;
//		}
//	}*/
//
//	for (i = 0; i < numsSize; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (fabs(i - arr[j]) <= k)
//			{
//				ret[count] = i;
//				count++;
//				break;
//			}
//		}
//	}
//	*returnSize = count;
//	return ret;
//
//}
//
//int main()
//{
//	int num[1000];
//	int numsSize = 0, key = 0, k = 0;
//	int returnSize = 0;
//	int n = 0, i = 0;
//	printf("n:>");
//	scanf("%d", &n);
//	printf("num:>");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	printf("key  k:>");
//	scanf("%d%d", &key, &k);
//	int* ret = findKDistantIndices(num, n, key, k, &returnSize);
//	for (i = 0; i < returnSize; i++)
//	{
//		printf("%d  ", ret[i]);
//	}
//	return 0;
//}


//int maximumCount(int* nums, int numsSize)
//{
//	int i = 0;
//	int count1 = 0, count2 = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		if (nums[i] > 0)
//			count1++;
//		else if (nums[i] < 0)
//			count2++;
//	}
//	return count1 > count2 ? count1 : count2;
//}


//我们要把给定的字符串 S 从左到右写到每一行上，每一行的最大宽度为100个单位，如果我们在写某个字母的时候会使这行超过了100 个单位，那么我们应该把这个字母写到下一行。我们给定了一个数组 widths ，这个数组 widths[0] 代表 'a' 需要的单位， widths[1] 代表 'b' 需要的单位，...， widths[25] 代表 'z' 需要的单位。
//
//现在回答两个问题：至少多少行能放下S，以及最后一行使用的宽度是多少个单位？将你的答案作为长度为2的整数列表返回。
//
//示例 1:
//输入:
//widths = [10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10]
//S = "abcdefghijklmnopqrstuvwxyz"
//输出 : [3, 60]
//解释 :
//	所有的字符拥有相同的占用单位10。所以书写所有的26个字母，
//	我们需要2个整行和占用60个单位的一行。



//int* numberOfLines(int* widths, int widthsSize, char* s, int* returnSize)
//{
//	*returnSize = 2;
//	int sum = 0;
//	char ch = 0;
//	int i = 0, line = 0;
//	int arr[1000] = { 0 };
//	while (*s != '\0')
//	{
//		for (ch = 'a',i=0; ch <= 'z'; ch++,i++)
//		{
//			if (*s == ch)
//				break;
//		}
//		sum = sum + widths[i];
//		s++;
//		if (sum >= 100)
//		{
//			arr[line] = 100;
//			line++;
//			sum = 0;
//			
//		}
//		if (*s == '\0')
//		{
//			arr[line] = sum;
//			
//		}
//		//s++;
//		
//	}
//	returnSize[0] = line+1;
//	returnSize[1] = arr[line];
//	return returnSize;
//}

//#define MAX_WIDTH 100
//
//int* numberOfLines(int* widths, int widthsSize, char* s, int* returnSize) {
//    int lines = 1;
//    int width = 0;
//    int len = strlen(s);
//    for (int i = 0; i < len; i++) {
//        int need = widths[s[i] - 'a'];
//        width += need;
//        if (width > MAX_WIDTH) {
//            lines++;
//            width = need;
//        }
//    }
//    int* ans = (int*)malloc(sizeof(int) * 2);
//    *returnSize = 2;
//    ans[0] = lines;
//    ans[1] = width;
//    return ans;
//}
//
//
//
//int main()
//{
//	int widths[26] = { 4,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10 };
//	char s[] = "bbbcccdddaaa";
//	int returnSize[2];
//	int* ret = numberOfLines(widths, 26, s, returnSize);
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		printf("%d  ", ret[i]);
//	}
//	return 0;
//
//
//}

//给你一个二进制字符串 s 。如果字符串中由 1 组成的 最长 连续子字符串 严格长于 由 0 组成的 最长 连续子字符串，返回 true ；否则，返回 false 。

//例如，s = "110100010" 中，由 1 组成的最长连续子字符串的长度是 2 ，由 0 组成的最长连续子字符串的长度是 3 。
//注意，如果字符串中不存在 0 ，此时认为由 0 组成的最长连续子字符串的长度是 0 。字符串中不存在 1 的情况也适用此规则。
//示例 1：
//
//输入：s = "1101"
//输出：true
//解释：
//由 1 组成的最长连续子字符串的长度是 2："1101"
//由 0 组成的最长连续子字符串的长度是 1："1101"
//由 1 组成的子字符串更长，故返回 true 。

//int cmp(const void* e1, const void* e2)
//{
//	int ret = *((int*)e1) - *((int*)e2);
//	return ret;
//}
//
//bool checkZeroOnes(char* s)
//{
//	int count1 = 0, count0 = 0;
//	int max1[1000], max0[1000];
//	int n = 0, k = 0;
//	int len = strlen(s);
//	
//		
//	while (*s != '\0')
//	{
//		count1 = 0;
//		count0 = 0;
//		while (*s == '1')
//		{
//			count1++;
//			s++;
//		}
//		max1[n] = count1;
//		n++;
//		while (*s == '0')
//		{
//			count0++;
//			s++;
//		}
//		max0[k] = count0;
//		k++;
//	}
//	qsort(max1, n, sizeof(int), cmp);
//	qsort(max0, k, sizeof(int), cmp);
//	if (max1[n - 1] > max0[k - 1])
//		return true;
//	else
//		return false;
//}