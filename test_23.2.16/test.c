#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



//int f(int n)
//{
//	static int a = 1;
//	n += a++;
//	return n;
//}
//
//
//int main()
//{
//	int b = 3, s;
//	s = f(b);
//	s = s + f(b);
//	printf("%d\n", s);
//	return 0;
//}


//void fun(char* s, int m1, int m2)
//{
//	char t, * p;
//	p = s + m1;
//	s = s + m2;
//	while (s < p)
//	{
//		t = *s;
//		*s = *p;
//		*p = t;
//		s++;
//		p--;
//	}
//}
//
//
//int main()
//{
//	char ss[10] = "876543210";
//	int n = 6;
//	fun(ss, 0, n - 1);
//	fun(ss, 9, n);
//	fun(ss, 0, 9);
//	printf("%s\n", ss);
//	return 0;
//}

int missingNumber(int* nums, int numsSize)
{
    int* arr = (int*)malloc((3 * numsSize) * sizeof(int));
    if (arr == NULL)
        return 0;
    int i = 0, j = 0, ret = 0;
    for (i = 0; i < numsSize; i++)
    {
        arr[i] = nums[i];
    }
    for (i = numsSize; i <= 2 * numsSize; i++, j++)
    {
        arr[i] = j;
    }
    for (i = 0; i <= 2 * numsSize; i++)
    {
        ret ^= arr[i];
    }
    free(arr);
    arr = NULL;
    return ret;
   /* nums = arr;
    int i = 0, j = 0;
    for (i = numsSize; i <= 2 * numsSize; i++, j++)
    {
        nums[i] = j;
    }
    int ret = 0;
    for (i = 0; i <= 2 * numsSize; i++)
    {
        ret ^= nums[i];
    }
    free(arr);
    arr = NULL;
    return ret;*/
}

int main()
{
    int n = 0;
    printf("n:>");
    scanf("%d", &n);
    /*int* nums = (int*)calloc(n, sizeof(int));
    if (nums == NULL)
    {
        perror("calloc");
        return 0;
    }*/
    int arr[3] = { 3,0,1 };
    int ret = missingNumber(arr, n);
    printf("%d\n", ret);
    return 0;
}