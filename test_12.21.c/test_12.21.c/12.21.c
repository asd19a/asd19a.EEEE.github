#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <math.h>
#include <string.h>


//int main()
//{
//	/*int a = 10,b=20;
//	int ret1 = a++;
//	int ret2 = ++b;
//	printf("ret1=%d,a=%d\n", ret1,a);
//	printf("ret2=%d,b=%d\n", ret2,b);*/
//
//	/*float a = 3.14;
//	int b = (int)a;
//	printf("a=%f   b=%d\n", a, b);*/
//
//	/*int a = 10, b = 20;
//	int ret = a > b ? a : b;
//	printf("ret=%d\n", ret);*/
//
//	/*int a = 10, b = 20, c = 30;
//	int ret = (a, b, c);
//	printf("ret=%d\n", ret);*/
//
//	//int arr[10];//创建数组
//	//arr[9];  //使用下标引用操作符
//	//[]的两个操作数是arr和9
//	return 0;
//}


struct students
{
	char name[20];
	int age;
}stu;

int main()
{
	struct students stu = { "abcd",20 };
	struct students* p = &stu;
	printf("name :%s\n", stu.name);
	printf("age :%d\n", stu.age);
	
	return 0;
}