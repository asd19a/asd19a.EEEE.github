#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr1[3] = { 1,2,4 };
	int arr2[3] = { 1,3,4 };
	int arr3[6] = { 0 };
	int p1 = 0, p2 = 0;
	int k = 0;
	while (p1 < 3 && p2 < 3)
	{
		if (arr1[p1] < arr2[p2])
			arr3[k++] = arr1[p1++];
		else if (arr2[p2] < arr1[p1])
			arr3[k++] = arr2[p2++];
		else
		{
			arr3[k++] = arr1[p1++];
			arr3[k++] = arr2[p2++];
		}
	}
	while (p1 < 3)
	{
		arr3[k++] = arr1[p1++];
	}
	while (p2 < 3)
	{
		arr3[k++] = arr2[p2++];
	}
	for (int i = 0; i < k; i++)
	{
		printf("%d  ", arr3[i]);
	}
	return 0;
}
