#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <assert.h>


//void Swap(char* str1, char* str2, int width)
//{
//	while (width)
//	{
//		char tmp = *str1;
//		*str1 = *str2;
//		*str2 = tmp;
//		str1++;
//		str2++;
//		width--;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	assert(base);
//	int i = 0, j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
//void print(int* str, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(str + i));
//	}
//}
//
//int cmp(const void* e1, const void* e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}
//
//int main()
//{
//	int arr[10] = { 2,4,1,3,7,5,8,9,10,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
//	print(arr, sz);
//	return 0;
//}


struct stu
{
	int age;
	char name[20];
};
int cmp_age(const void* e1, const void* e2)
{
	return *((int*)e1) - *((int*)e2);
}
int cmp_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name,((struct stu *)e2)->name);
}

int main()
{
	struct stu s[3] = { {20,"qwer"},{42,"asdf"},{24,"zxcv"} };
	int sz = sizeof(s) / sizeof(s[0]);
	/*qsort(s, sz, sizeof(s[0]), cmp_age);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", s[i].age);
	}*/

	qsort(s, sz, sizeof(s[0]), cmp_name);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s\n", s[i].name);
	}
	return 0;
}