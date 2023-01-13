#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


//struct S
//{
//	char a : 2;
//};
//
//int main()
//{
//	struct S s;
//	s.a = 1;
//	int ret = s.a;
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}


//自除数

//int* selfdiv(int left, int right, int* num, int n)
//{
//	int i = 0;
//	int j = 0;
//	int ret = 0, flag = 0;
//	int* start = num;
//	for (i = left; i <= right; i++)
//	{
//		int tmp = i;
//		flag = 0;
//		while (tmp)
//		{
//			ret = tmp % 10;
//			if (ret == 0)
//			{
//				flag = 1;
//				break;
//			}
//			if (i % ret)
//			{
//				flag = 1;
//				break;
//			}
//			tmp = tmp / 10;
//		}
//		if (flag == 0)
//		{
//			num[j] = i;
//			j++;
//		}
//	}
//	return start;
//}
//
//int main()
//{
//	int n = 100;
//	//scanf("%d", &n);
//	int* num = (int*)calloc(n, sizeof(int));
//	if (num == NULL)
//	{
//		perror("calloc");
//		return 0;
//	}
//	int left = 0, right = 0;
//	scanf("%d%d", &left, &right);
//	int* ret = selfdiv(left, right, num, n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (ret[i] != 0)
//		{
//			printf("%d ", ret[i]);
//		}
//	}
//	free(num);
//	num = NULL;
//	return 0;
//}


//void reverse(char* str1,int len)
//{
//	int left = 0;
//	int right = len - 1;
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}

//void reverse(char* str1, char* str2)
//{
//	int left = 0;
//	int right = str2 - str1-1;
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = *(str1 + left);
//		*(str1 + left) = *(str1 + right);
//		*(str1 + right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[1000] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	reverse(arr, arr + len);
//	int i = 0, j = 0;
//	while (i < len)
//	{
//		while (arr[i] != ' '||arr[i]=='\0')
//		{
//			i++;
//		}
//		reverse(arr + j, arr + i);
//		while (arr[i] == ' ')
//		{
//			i++;
//		}
//		j = i;
//	}
//	puts(arr);
//	return 0;
//}


//int main()
//{
//	char arr[1000];
//	gets(arr);
//	int i = 0;
//	int flag = 0;
//	int j = 0;
//	int len = strlen(arr);
//	for (i = 0; i < len; i++)
//	{
//		flag = 0;
//		if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z'||arr[i]==' ')
//		{
//			flag = 1;
//		}
//		if (flag == 0)
//		{
//			arr[i] = 1;
//		}
//	}
//
//	whlie(i > 0)
//	{
//		
//	}
//	return 0;
//}


//int main()
//{
//	char arr[1000];
//	gets(arr);
//	char* ptr = arr;
//	char* word[1000] = {NULL};
//	int row = 0;
//	while (*ptr!='\0')
//	{
//		if (*ptr >= 'a' && *ptr < 'z' || *ptr >= 'A' && *ptr <= 'Z')
//		{
//			word[row++] = ptr;
//			if (*ptr >= 'a' && *ptr < 'z' || *ptr >= 'A' && *ptr <= 'Z')
//			{
//				ptr++;
//			}
//			continue;
//
//		}
//		
//		*ptr = '\0';
//		ptr++;
//	}
//	int i = 0;
//	for (i = row - 1; i >= 0; i--)
//	{
//		printf("%s", word[i]);
//	}
//	return 0;
//}


//int main()
//{
//	char str[1000] = { 0 };//字符串最长1000
//	int row = 0;
//	while (gets(str) > 0)
//	{
//		char* ptr = str;
//		char* word[1000] = { NULL };
//		while (*ptr != '\0') 
//		{
//			//如果是个字母字符，则是单词的起始字符
//			if (('z' >= *ptr && *ptr >= 'a') || ('Z' >= *ptr && *ptr >= 'A'))
//			{
//				word[row++] = ptr;//保存每个单词的起始地址
//				//把本次的单词字母字符走完，直到遇到非字母字符
//				while (*ptr != '\0' &&
//					(('z' >= *ptr && *ptr >= 'a') || ('Z' >= *ptr && *ptr >= 'A'))) 
//				{
//					ptr++;
//				}
//				continue;//不能继续向下，因为下边的ptr++会跳过当前的非字母字符
//			}
//			*ptr = '\0';//把非字母的数据全部替换为结尾标志
//			ptr++;
//		}
//		for (int i = row - 1; i >= 0; i--)
//		{
//			printf("%s ", word[i]);//针对所有单词的起始地址逆序开始打印即可
//		}
//		printf("\n");
//	}
//}


//int fib(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	int n = 0, m = 0;
//	double arr[1000] = { 0 };
//	int i = 1;
//	double sum = 0;
//	while (scanf("%d%d", &n, &m) != EOF)
//	{
//		arr[0] = n;
//		sum = arr[0];
//		for (i = 1; i < m; i++)
//		{
//			arr[i] = pow(arr[i - 1], 0.5);
//			sum = sum + arr[i];
//		}
//		printf("%.2lf\n", sum);
//	}
//	return 0;
//}


//int main()
//{
//	int* p = 0;
//}


int* masterMind(char* solution, char* guess, int* returnSize)
{
    returnSize = (int*)malloc(2 * sizeof(int));
    if (!returnSize)
    {
        perror("malloc");
        return NULL;
    }
    int count1 = 0, count2 = 0;
    int i = 0, j = 0;
    for (i = 0; i < 4; i++)
    {
        if (solution[i] == guess[i])
        { 
            count1++;
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (guess[j] == solution[i])
            {
                count2++;
                break;
            }
        }
    }
    returnSize[0] = count1;
    returnSize[1] = count2-count1;
    return returnSize;

}

//int main()
//{
//    char solu[5];
//    char gue[5];
//    scanf("%s", solu);
//    getchar();
//    scanf("%s", gue);
//    int* size = NULL;
//    int* ret = masterMind(solu, gue, size);
//    int i = 0;
//    for (i = 0; i < 2; i++)
//    {
//        printf("%d ", ret[i]);
//    }
//    return 0;
//}

//int main()
//{
//    int arr1[10] = { 1,3,5,7,9,2,4,8,1,3 };
//    int arr2[10] = { 1,5,5,7,6,3,3,5,8,4 };
//    int tmp1[10] = { 0 };
//    int tmp2[10] = { 0 };
//    int i = 0, j = 0, k = 0;
//    int count = 0, row = 0;
//    int flag = 0;
//    for (i = 0; i < 10; i++)
//    {
//        for()
//    }
//    
//
//}


//int main()
//{
//    int arr[10] = { 0,0,1,1,1,2,2,3,4,5 };
//    //int* fast = NULL;
//    //int* slow = arr;
//    ///*for (fast = slow + 1; fast < arr + 10; fast++)
//    //{
//    //    if (*fast == *slow)
//    //    {
//    //        *slow = *fast;
//    //        slow++;
//    //    }
//    //}*/
//    //int i = 0, j = 0;
//    //for (fast = slow + 1; j < 10; j++)
//    //{
//    //    for()
//    //}
//
//    int tmp[10] = { 0 };
//    int count = 0;
//    int i = 0, j = 0;
//    for (i = 0; i < 9; i++)
//    {
//        //count = 0;
//        for (j = i + 1; j < 10; j++)
//        {
//            if (arr[j] == arr[i])
//            {
//                tmp[count++] = arr[i];
//                break;
//            }
//        }
//    }
//
//}

//int cmp(const void* e1, const void* e2)
//{
//    return *((int*)e1) - *((int*)e2);
//}
//
//int* twoSum(int* numbers, int numbersLen, int target, int* returnSize)
//{
//    // write code here
//    int i = 0, j = 0;
//    int row = 0;
//    for (i = 0; i < numbersLen-1; i++)
//    {
//        for (j =i+1; j < numbersLen; j++)
//        {
//            if (numbers[i] + numbers[j] == target)
//            {
//                returnSize[row++] = i + 1;
//                returnSize[row++] = j + 1;
//            }
//        }
//    }
//    qsort(returnSize, row-1, sizeof(int), cmp);
//    return returnSize;
//}
//
//int main()
//{
//    int num[4] = { 0,4,3,0};
//    int target = 0;
//    int returnSize[3] = { 0 };
//    int* ret = twoSum(num, 4, target, returnSize);
//    int i = 0;
//    for (i = 0; i < 2; i++)
//    {
//        printf("%d ", ret[i]);
//    }
//    return 0;
//}