#include <stdio.h>
#include <string.h>
#include <math.h>

//void CR(char str[], int len)
//{
//	int i = 2;
//	char* ptmp = str;
//	while (i <= 2 * len - 2)
//	{
//		str[i] = *(ptmp + i - 1);
//		str[i - 1] = ' ';
//		i = i + 2;
//	}
//	
//
//}
//
//int main()
//{
//	char arr[20] = "asdfgh";
//	int i = 0;
//	int len = strlen(arr);
//	CR(arr, len);
//	puts(arr);
//	return 0;
//}

//void reverse(char* str, int len)
//{
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[20] = "abcdefgh";
//	int len = strlen(arr);
//	reverse(arr, len);
//	puts(arr);
//	return 0;
//}

//void mystrcat(char* str1, char* str2)
//{
//	int i = 0;
//	while (*(str1 + i) != '\0')
//	{
//		printf("%c", *(str1 + i));
//		i++;
//	}
//	i = 0;
//	while (*(str2 + i) != '\0')
//	{
//		printf("%c", *(str2 + i));
//		i++;
//	}
//}
//
//int main()
//{
//	char arr1[20] = "asdfgh";
//	char arr2[20] = "zxcvb";
//	mystrcat(arr1, arr2);
//	return 0;
//
//}


//int main()
//{
//	char arr[20][20];
//	int n = 0;
//	printf("请输入国家数:>");
//	scanf_s("%d", &n);
//	int i = 0,j=0;
//	char tmp[20];
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%s", arr[i], 20);
//		//getchar();
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (strcmp(arr[i], arr[j]) > 0)
//			{
//				strcpy_s(tmp, 20, arr[i]);
//				strcpy_s(arr[i], 20, arr[j]);
//				strcpy_s(arr[j], 20, tmp);
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		puts(arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	char arr[7][20] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
//	char input[20];
//	printf("请输入:>");
//	scanf_s("%s", input, 20);
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		if (strcmp(input, arr[i]) == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	if (i >= 7)
//	{
//		printf("输入错误,找不到\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int* p = a;
//	printf("%d\n", *p);
//	printf("%d\n", *(++p));
//	printf("%d\n", (*p)++);
//	printf("%d\n", *p);
//	printf("%d\n", *p--);
//	printf("%d\n", --(*p));
//	printf("%d\n", *p);
//	return 0;
//}

//int Fact(int n)
//{
//	int i = 1,ret=1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = i * ret;
//	}
//	return ret;
//}

//int Fact(int n)
//{
//	if (n == 1||n==0)
//		return 1;
//	else
//		return n * Fact(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = Fact(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//F{ n + 2 } = F{ n + 1 } + F{ n } ，（ F1 = F2 = 1 ）


//int Fbnq(int n)
//{
//	int b1 = 1, b2 = 1, b3 = 1;
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		b3 = b1 + b2;
//		b1 = b2;
//		b2 = b3;
//	}
//	return b3;
//}

//int Fbnq(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//
//		return Fbnq(n - 1) + Fbnq(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = Fbnq(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    scanf_s("%d", &n);
//    int arr[20] = { 0 };
//    int i = 0, j = 0;
//    if (n < 16)
//    {
//        printf("%d", n);
//    }
//    else
//    {
//        for (i = 1;; i++)
//        {
//            if (n >= pow(16, i) && n <= pow(16, i + 1))
//            {
//                break;
//            }
//        }
//        for (j = i; j <(i+1) && j >= 0; j--)
//        {
//            arr[j] = n % 16;
//            n = n / 16;
//        }
//        for (j = 0; j < i+1; j++)
//        {
//            printf("%d", arr[j]);
//        }
//    }
//    return 0;
//}


int main()
{
	/*int arr[2][3] = { 1,2,3,4,5,6 };
	int* p = &arr[0][0];
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d ", *(p + i + j * 3));
		}
		printf("\n");
	}
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }*/
    int arr[20][20];
    int n = 0, m = 0, i = 0, j = 0;
    scanf_s("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf_s("%d", &arr[i][j]);
        }
    }
    int* p = &arr[0][0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", *(p + i + j * 20));
        }
        printf("\n");
    }
   
	return 0;
}


//int fib(int n)
//{
//    if (n == 1)
//        return 1;
//    else if (n == 2)
//        return 2;
//    else
//        return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//    int n = 0;
//    scanf_s("%d", &n);
//    int ret = fib(n);
//    printf("%d", ret);
//    return 0;
//    
//
//}



//int main()
//{
//    int n = 0, m = 0;
//    //scanf_s("%d %d", &n, &m);
//    int arr[12] = { 31,0,31,30,31,30,31,31,30,31,30,31 };
//    while (1);
//    {
//        scanf_s("%d %d", &n, &m);
//        if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//        {
//            if (m == 2)
//                printf("29\n");
//            else
//            {
//                printf("%d\n", arr[m - 1]);
//            }
//        }
//        else
//        {
//            if (m == 2)
//                printf("28\n");
//            else
//            {
//                printf("%d\n", arr[m - 1]);
//            }
//        }
//    }
//
//    return 0;
//}

//void my_strcpy(char* str1, char* str2)
//{
//    while ((*str1++ = *str2++) != '\0')
//    {
//        ;
//    }
//}
//
//int main()
//{
//    char arr1[20] = "asdfg";
//    char arr2[20] = "zxcvb";
//    my_strcpy(arr1, arr2);
//    puts(arr1);
//    return 0;
//}

//int my_strlen(char* str)
//{
//    int i = 0;
//    while ((*str++) != '\0')
//    {
//        i++;
//    }
//    return i;
//}
//
//int main()
//{
//    char arr[20] = "qwert";
//    int len = my_strlen(arr);
//    printf("len=%d\n", len);
//    return 0;
//}