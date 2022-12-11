#include <stdio.h>


int main()
{
	//int arr[2][3] = { 1,2,3,4,5,6 };
	///*int(*arr1)[0];
	//printf("%p\n", (*arr)[0]);
	//printf("%p\n", &((*arr)[0]))*/
	///*printf("%p\n", &(arr*1+1));
	//printf("%p\n", &(arr[0][0]));*/
	//int a = 0x11223344;
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("Ð¡¶Ë\n");
	}
	else
	{
		printf("´ó¶Ë\n");
	}
	return 0;
}