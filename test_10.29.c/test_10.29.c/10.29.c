#include <stdio.h>
#include <string.h>



//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//void reverse(char* str,int n)
//{
//	/*if (n>0)
//	{
//		printf("%c", *(str + n - 1));
//		reverse(str, n - 1);
//	}*/
//	if (*str != '\0')
//	{
//		printf("%c", *(str + n - 1));
//		reverse(str, n - 1);
//	}
//}
//
////void reverse(char* str)
////{
////	int len = strlen(str);
////	char tmp = *str;
////	*str = *(str + len - 1);
////	*(str + len - 1) = '\0';
////	if (strlen(str + 1) >= 2)
////	{
////		reverse(str + 1);
////	}
////	*(str + len - 1) = tmp;
////}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	
//	reverse(arr,len);
//	//printf("%s\n",arr);
//
//	return 0;

//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//
//	*(arr + len - 1) = tmp;
//}


//int Digitsum(int a)
//{
//	if (a > 9)
//	{
//		return a % 10 + Digitsum(a / 10);
//	}
//	else
//	{
//		return a;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	scanf_s("%d", &a);
//	sum=Digitsum(a);
//	printf("sum=%d\n", sum);
//	return 0;
//}


//long Fact(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * Fact(n, k - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	long fact = 0;
//	scanf_s("%d%d", &n, &k);
//	fact = Fact(n, k);
//	printf("fact=%ld\n", fact);
//	return 0;
//
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf_s("%d",&money);
//	total = money;
//	empty = money;
//	while (empty > 1)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//	return 0;
//
//
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 13; i++)
//	{
//
//	}
//}


//void reverse(char* str)
//{
//	int len = strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (str + 1 >= 2)
//	{
//		reverse(str+1);
//	}
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char  arr[6] = "asdfgh";
//	int i = 0;
//	/*for (i = 0; i < 6; i++)
//	{
//		scanf_s("%c", &arr[i],1);
//		getchar();
//	}*/
//	printf("こうかんする前に：\n");
//	printf("%s\n", arr);
//	reverse(arr);
//	printf("こうかんした後で：\n");
//	printf("%s\n", arr);
//	return 0;
//}



