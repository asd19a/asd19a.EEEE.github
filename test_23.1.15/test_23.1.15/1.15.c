#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
//#include <graphics.h>
//#include <conio.h>


//判断大小端

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//union un
//{
//	char a;
//	int b;
//};
//
//int main()
//{
//	union un u;
//	u.b = 1;
//	if (u.a == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}

//struct S
//{
//	char  a : 2;
//};
//
//int main()
//{
//	struct S s;
//	s.a = 1;
//	if (s.a == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//IMAGE;
//
//int main()
//{
//	Initgraph(1000, 600);
//	loadimage(&IMAGE, "D:\\JT\\太宰3.png", 1000, 600);
//	putimage(0, 0,0,0, &IMAGE,0,0);
//	
//}



//牛牛以前在老师那里得到了一个正整数数对(x, y), 牛牛忘记他们具体是多少了。

//但是牛牛记得老师告诉过他x和y均不大于n, 并且x除以y的余数大于等于k。
//牛牛希望你能帮他计算一共有多少个可能的数对。

//int main()
//{
//	int n = 0, k = 0;
//	int i = 0, j = 0, count = 0;
//	scanf("%d%d", &n, &k);
//	for (i = 0; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			if (i % j >= k)
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	char arr[1000];
//	gets(arr);
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	arr[n] = '\0';
//	puts(arr);
//	return 0;
//}

//typedef struct test
//{
//	char arr1[20];
//	int k;
//	char arr2[20];
//	char arr3[20];
//	char arr4[20];
//}test;
//
//void menu()
//{
//	printf("         1.add           0.exit\n");
//}
//void save(test* pt,int sz)
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("save");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		fprintf(pf, "%s %d %s %s %s\n", pt[i].arr1, pt[i].k, pt[i].arr2, pt[i].arr3, pt[i].arr4);
//	}
//	fclose(pf);
//	pf = NULL;
//
//}
//
//int main()
//{
//	test t[10] = { 0 };
//	int input = 0;
//	int i = 0;
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		perror("fopen");
//		return 0;
//	}
//	while (fscanf(pf, "%s %d %s %s %s", t[i].arr1, &(t[i].k), t[i].arr2, t[i].arr3, t[i].arr4))
//	{
//		i++;
//		if (i > 2)
//		{
//			break;
//		}
//	}
//	fclose(pf);
//	pf = NULL;
//	/*do
//	{
//		menu();
//
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			scanf("%s %d %s %s %s", t[i].arr1, &(t[i].k), t[i].arr2, t[i].arr3, t[i].arr4);
//			i++;
//			break;
//		case 0:
//			save(&t,i);
//			printf("退出\n");
//			break;
//		default:
//			printf("重新输入\n");
//			break;
//		}
//	} while (input);*/
//	int j = 0;
//	for (j = 0; j < i; j++)
//	{
//		printf("%s %d %s %s %s\n", t[j].arr1, t[j].k, t[j].arr2, t[j].arr3, t[j].arr4);
//	}
//	return 0;
//}



//int main()
//{
//	int* arr = (int*)malloc(1000000000000000);
//	*arr = 1;
//	printf("%d\n", *arr);
//	free(arr);
//	arr = NULL;
//	return 0;
//}


//int main()
//{
//	int* arr = (int*)malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	free(arr);
//	arr = NULL;
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 0;
//	}
//	*p++ = 1;
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(20);
//	free(p);
//	free(p);
//	p = NULL;
//	return 0;
//}


//int my_atoi(char* str)
//{
//	assert(str);
//	char* start = str;
//	int n = 0, i = 0, flag = 0;
//	if (*str == '-')
//	{
//		flag = 1;
//		str++;
//		start++;
//	}
//	while (*str >= '0' && *str <= '9')
//	{
//		*str = *str - '0';
//		str++;
//		n++;
//	}
//	int tmp = n;
//	int sum = 0, ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = pow(10, tmp-1);
//		sum = sum + (*(start + i)) * ret;
//		tmp--;
//	}
//	if (flag == 1)
//		return 0-sum;
//	return sum;
//	
//}
//
//int main()
//{
//	char arr[] = "-1234a567";
//	int ret = my_atoi(arr);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//int main()
//{
//
//}

//int* printNumbers(int n, int* returnSize)
//{
//	int i = 0;
//	*returnSize = 0;
//	int* arr = NULL;
//	for (i = 1; i < pow(10, n); i++)
//	{
//		arr[*returnSize++] = i;
//	}
//	return arr;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int *arr=printNumbers(n,)
//}


//int main()
//{
//	int m = 0, i = 0, j = 0, n = 0;
//	scanf("%d", &m);
//	int sum = 0;
//	for (i = 1;; i=i+2)
//	{
//		sum = 0;
//		for (j = i; j <= i+2 * (m - 1); j=j+2)
//		{
//			sum = sum + j;
//		}
//		if (sum == m*m*m)
//		{
//			break;
//		}
//	}
//	int x = 0;
//	for (x = i; x <=i+ 2 * (m - 1); x = x + 2)
//	{
//		if (x < i+ 2 * (m - 1))
//		{
//			printf("%d+", x);
//		}
//		else
//			printf("%d", x);
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int x = 2, sum = 0;
//	scanf("%d", &n);
//	for (; n > 0; n--, x = x + 3)
//	{
//		sum = sum + x;
//	}
//	printf("%d\n", sum);
//	return 0;
//
//}


//int main()
//{
//	int n = 0, i = 0;
//	int x = 0, count1 = 0, count2 = 0;
//	float ave = 0, sum = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &x);
//		if (x < 0)
//			count1++;
//		else if (x > 0)
//		{
//			count2++;
//			sum = sum + x;
//		}
//	
//	}
//	if (count2 != 0)
//	{
//		ave = sum / count2;
//		printf("%d %.1f\n", count1, ave);
//	}
//	else
//		printf("%d 0.0\n", count1);
//	return 0;
//}

//int minNumberInRotateArray(int* rotateArray, int rotateArrayLen)
//{
//    int i = 0, j = 0;
//    int min = *rotateArray;
//    for (i = 0; i < rotateArray; i++)
//    {
//        if (rotateArray[i] < min)
//            min = rotateArray[i];
//    }
//    return min;
//}