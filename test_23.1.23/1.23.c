#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>




//给你一个表示某个正整数的字符串 number 和一个字符 digit 。
//
//从 number 中 恰好 移除 一个 等于 digit 的字符后，找出并返回按 十进制 表示 最大 的结果字符串。生成的测试用例满足 digit 在 number 中出现至少一次。
//示例 1：
//
//输入：number = "123", digit = "3"
//输出："12"
//解释："123" 中只有一个 '3' ，在移除 '3' 之后，结果为 "12" 。
//示例 2：
//
//输入：number = "1231", digit = "1"
//输出："231"
//解释：可以移除第一个 '1' 得到 "231" 或者移除第二个 '1' 得到 "123" 。
//由于 231 > 123 ，返回 "231" 。


//char* removeDigit(char* number, char digit)
//{
//	int i = 0, j = 0;
//	int len1 = strlen(number);
//	for (i = 0; i < len1; i++)
//	{
//		if (number[i] == digit)
//		{
//			if (i + 1 == len1)
//			{
//				number[len1 - 1] = '\0';
//				break;
//			}
//			if (number[i] < number[i + 1])
//			{
//				for (j = i + 1; j < len1; j++)
//				{
//					number[j - 1] = number[j];
//				}
//				number[j - 1] = '\0';
//				break;
//			}
//		}
//	}
//
//	return number;
//
//
//}
//
//
//int main()
//{
//	char number[] = "133235";
//	char digit = '3';
//	char* ret = removeDigit(number, digit);
//	int len = strlen(ret);
//	int i = 0, j = 0;
//	int sum = 0;
//	int n = len;
//	for (i = 0 ;i < len; i++)
//	{
//		sum = sum + (ret[i] - '0') * pow(10, n - 1);
//		n--;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//给你两个二维整数数组 items1 和 items2 ，表示两个物品集合。每个数组 items 有以下特质：
//
//items[i] = [valuei, weighti] 其中 valuei 表示第 i 件物品的 价值 ，weighti 表示第 i 件物品的 重量 。
//items 中每件物品的价值都是 唯一的 。
//请你返回一个二维数组 ret，其中 ret[i] = [valuei, weighti]， weighti 是所有价值为 valuei 物品的 重量之和 。
//
//注意：ret 应该按价值 升序 排序后返回。
//
//示例 1：
//
//输入：items1 = [[1, 1], [4, 5], [3, 8]], items2 = [[3, 1], [1, 5]]
//输出： [[1, 6], [3, 9], [4, 5]]
//解释：
//value = 1 的物品在 items1 中 weight = 1 ，在 items2 中 weight = 5 ，总重量为 1 + 5 = 6 。
//value = 3 的物品再 items1 中 weight = 8 ，在 items2 中 weight = 1 ，总重量为 8 + 1 = 9 。
//value = 4 的物品在 items1 中 weight = 5 ，总重量为 5 。
//所以，我们返回 [[1, 6], [3, 9], [4, 5]] 。
//



//int** mergeSimilarItems(int** items1, int items1Size, int* items1ColSize, int** items2, int items2Size, int* items2ColSize, int* returnSize, int** returnColumnSizes)
//{
//
//}


//给你一个四位 正 整数 num 。请你使用 num 中的 数位 ，将 num 拆成两个新的整数 new1 和 new2 。new1 和 new2 中可以有 前导 0 ，且 num 中 所有 数位都必须使用。
//
//比方说，给你 num = 2932 ，你拥有的数位包括：两个 2 ，一个 9 和一个 3 。一些可能的 [new1, new2] 数对为 [22, 93]，[23, 92]，[223, 9] 和 [2, 329] 。
//请你返回可以得到的 new1 和 new2 的 最小 和。
//
//示例 1：
//
//输入：num = 2932
//输出：52
//解释：可行的[new1, new2] 数对为[29, 23] ，[223, 9] 等等。
//最小和为数对[29, 23] 的和：29 + 23 = 52 。


//int minimumSum(int num) 
//{
//	int i = 0, nums[4] = { 0 };
//	int tmp = num;
//	for (i = 0; i < 4; i++)
//	{
//		nums[i] = tmp % 10;
//		tmp = tmp / 10;
//	}
//	int min = 0;
//
//
//}