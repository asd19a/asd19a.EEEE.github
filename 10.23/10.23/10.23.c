#include <stdio.h>



//指针-指针strlen

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}



//计数器strlen

//int my_strlen(char* x)
//{
//	int count = 0;
//	while (*x != '\0')
//	{
//		count++;
//		x++;
//	}
//	return count;
//}

//递归strlen

//int my_strlen(char const* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//int main()
//{
//	//char arr = "abc";
//	int a = 0;
//	a = my_strlen("abc");
//	printf("%d\n", a);
//	
//	return 0;
//}




//冒泡排序

//void Bubble(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	//趟数
//	
//	for (i = 0; i < sz; i++)
//	{	//交换次数
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("已有序，无需排序\n");
//			break;
//		}
//	}
//}
//
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a = 0;
//	Bubble(arr,sz);
//	for (a = 0; a < sz; a++)
//	{
//		printf("%d  ", arr[a]);
//	}
//	return 0;
//
//}
//




//int main()
//{
//	int input = 0;
//	int n = 0;
//	int count = 0;
//	printf("input:>");
//	scanf_s("%d", &input);
//	printf("\n");
//	for (n = 1; n <= input; n++)
//	{
//		printf("*");
//		count++;
//		if (count%5==0)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//} 


#define sqr(x) ((x)*(y))

int main()
{
	int m = 0;
	double n = 0.0;
	int a = 0;
	printf("请输入一个整数:>");
	scanf_s("%d", &m);
	a = sqr(m);
	printf("这个数的平方=%d\n", a);
}