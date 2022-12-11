#include <stdio.h>
#include <math.h>


//void Swap(int* str, int sz)
//{
//	int i = 0;
//	int tmp1 = 0; int tmp2 = 0; int tmp = 0;
//	int max = *str;
//	int min = *str;
//	for (i = 0; i < sz; i++)
//	{
//		if (*(str + i) > max)
//		{
//			max = *(str + i);
//			tmp1 = i;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (*(str + i) < min)
//		{
//			min = *(str + i);
//			tmp2 = i;
//		}
//	}
//	printf("max=%d\n", max);
//	printf("min=%d\n", min);
//	tmp = *(str + tmp1);
//	*(str + tmp1) = *(str + tmp2);
//	*(str + tmp2) = tmp;
//}
//
//int main()
//{
//	int arr[10] ={0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int x = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("请输入第%d个数:>", i + 1);
//		scanf_s("%d", &x);
//		arr[i] = x;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	Swap(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}


void Swap(int* str1, int* str2, int sz)
{
	int i = 0;
	int tmp = 0;
	for (i = 0; i < sz; i++)
	{
		tmp = *(str1 + i);
		*(str1 + i) = *(str2 + i);
		*(str2 + i) = tmp;
	}
}

int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 6,7,8,9,10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	printf("arr1:\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", arr1[i]);
	}
	printf("\n");
	printf("arr2:\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", arr2[i]);
	}
	printf("\n");
	Swap(arr1, arr2, sz);
	printf("arr1:\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", arr1[i]);
	}
	printf("\n");
	printf("arr2:\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", arr2[i]);
	}
	return 0;

}