#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>


void rot(int* n1, int n,int x)
{
	assert(n1);
	int left = x, right = n;
	while (left < right)
	{
		int tmp = *(n1 + left);
		*(n1 + left) = *(n1 + right);
		*(n1 + right) = tmp;
		left++;
		right--;
	}

}

void rotate(int* nums, int numsSize, int k)
{
	//int i = 0, j = 0;
	rot(nums,  numsSize - 1,0);
	rot(nums, k - 1,0);
	rot(nums, numsSize - 1,k);
}


int main()
{
	int num[7] = { 1,2,3,4,5,6,7 };
	int sz = sizeof(num) / sizeof(num[0]);
	int k = 0;
	printf("k:>");
	scanf("%d", &k);
	rotate(num, sz, k);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", num[i]);
	}
	return 0;
}