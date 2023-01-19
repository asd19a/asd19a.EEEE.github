#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//int* find(int* nums, int sz, int* returnSize)
//{
//	*returnSize = 0;
//	int* arr = (int*)malloc(2 * sizeof(int));
//	int i = 0, j = 0, count = 0;
//	for (i = 0; i < sz; i++)
//	{
//		count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (nums[i] == nums[j]&&i!=j)
//			{
//				count = 1;
//				break;
//			}
//		}
//		if (count == 0)
//		{
//			arr[*returnSize] = nums[i];
//			*returnSize = *returnSize + 1;
//		}
//	}
//	return arr;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int returnSize = 0;
//	int* ret = find(arr, sz, &returnSize);
//	for (int i = 0; i < returnSize; i++)
//	{
//		printf("%d ", ret[i]);
//	}
//	return 0;
//}


typedef struct A
{
	char *a;
}A;

typedef struct B
{
	A* data;
	int sz;
}B;

void init(B* pb)
{
	pb->data = (A*)calloc(5, sizeof(A));

	pb->sz = 0;
}

void test(B* pb)
{
	pb->data[pb->sz].a = "abc";
}

int main()
{
	B b;
	init(&b);
	test(&b);
	printf("%s\n", b.data[0].a);
	return 0;
	
}