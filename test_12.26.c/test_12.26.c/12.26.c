#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	//int arr[5] = { 1,2,3,4,5 };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr[0]));






	///*printf("arr=%p\n", arr);
	//printf("arr+1=%p\n\n", arr + 1);
	//printf("&arr=%p\n", &arr);
	//printf("&arr+1=%p\n", &arr + 1);*/

	/*int a[] = { 1,2,3,4 };
	   printf("%d\n", sizeof(a));
	   printf("%d\n", sizeof(a + 0));
	   printf("%d\n", sizeof(*a));
	   printf("%d\n", sizeof(a + 1));
	   printf("%d\n", sizeof(a[1]));
	   printf("%d\n", sizeof(&a));
	   printf("%d\n", sizeof(*&a));
	   printf("%d\n", sizeof(&a + 1));
	   printf("%d\n", sizeof(&a[0]));
	   printf("%d\n", sizeof(&a[0] + 1));*/

	/*char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr + 1));
	printf("%d\n", sizeof(&arr[0] + 1));*/

	/*char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr + 1));
	printf("%d\n", sizeof(&arr[0] + 1));*/


	/*char* p = "abcdef";*/
	/*printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(p + 1));
	printf("%d\n", sizeof(*p));
	printf("%d\n", sizeof(p[0]));
	printf("%d\n", sizeof(&p));*/
	/*printf("%p\n", &p);
	printf("%p\n", &p + 1);
	printf("%p\n", &p[0] + 1);
	printf("%p\n", &p[1]);*/
	/*printf("%d\n", sizeof(&p + 1));
	printf("%d\n", sizeof(&p[0] + 1));*/

	//¶þÎ¬Êý×é
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a[0] + 1));
	printf("%d\n", sizeof(*(a[0] + 1)));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(*(a + 1)));
	printf("%d\n", sizeof(&a[0] + 1));
	printf("%d\n", sizeof(*(&a[0] + 1)));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[3]));



	/*int a = 3;
	int s = 1;
	printf("%d\n", sizeof(s = a + 7));
	printf("s=%d\n", s);*/
	return 0;
}