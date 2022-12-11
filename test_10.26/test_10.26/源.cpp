#include <stdio.h>
#include <math.h>
#include <string.h>
#include <assert.h>


//int main()
//{
//	long i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int tmp = i;
//		int n = 1;
//		//判断几位数
//		while (tmp/10)
//		{
//			n++;
//			tmp = tmp/ 10;
//		}
//		//判断和
//		tmp = i;
//		int sum = 0;
//		//int ret = 0;
//		while (tmp)
//		{
//			//ret = i % 10;
//			sum+=pow(tmp%10, n);
//			tmp = tmp / 10;
//		}
//
//		//判断是否相等
//		if (sum == i)
//		{
//			printf("%ld  ", i);
//		}
//	}
//
//
//	return 0;
//}



//void reverse(char* p, int x)
//{
//	int i = 0;
//	
//	for (i = 0; i <= x; i++)
//	{
//		printf("%c" ,* (p + x - i));
//	}
//		
//	
//	 
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = strlen(arr) - 1;
//	char* p = arr;
//	int i = 0;
//	/*for (i = 0; i <= sz; i++)
//	{
//		printf("%c", *(p + sz - i));
//	}*/
//
//	reverse(arr, sz);
//	return 0;
//}



//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char*left = str;
//	char*right =str+len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//
//	}
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}

struct A
{
	int x;
	int y;
	int z;
};
struct B
{
	struct A a;
	char name[10];
	int age;
	char gender;
};
int main()
{
	struct B *b = { {1,2,3} ,"www",24,'g'};
	//struct B b = { {1,2,3} ,"www",24,'g' };
	printf("%d  %d  %d  %s  %d  %c\n", b->a.x, b->a.y, b->a.z, b->name, b->age, b->gender);
	//printf("%d  %d  %d  %s  %d  %c\n", b.a.x, b.a.y, b.a.z, b.name, b.age, b.gender);
	return 0;
}