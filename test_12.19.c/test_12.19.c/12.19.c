#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <string.h>


//int main()
//{
//	float a = 0.0f;
//	printf("%f\n", log(10));
//	return 0;
//}


//float fun(float x)
//{
//	if (x < 0)
//		return pow(x, 3) + 1;
//	else if (x >= 0 && x <= 5)
//		return 3 * cos(2 * x) + 1;
//	else
//		return log(x);
//}
//
//int main()
//{
//	float x = 0;
//	scanf("%f", &x);
//	float ret = fun(x);
//	printf("ret=%f\n", ret);
//	return 0;
//}



//int main()
//{
//	int arr[20][20]={ 0 };
//	int n = 0, i = 0, j = 0, tmp = 0,m=1;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		tmp = 0;
//		m = 1;
//		for (j = 0; j < n; j++,m++)
//		{
//			for (; tmp < i; tmp++)
//			{
//				arr[i][j] = 0;
//				j++;
//			}
//			arr[i][j] = m;
//		}
//		
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//	
//}


//ÉßÐÎ¾ØÕó

//int main()
//{
//	int arr[20][20];
//	int n = 0, i = 0, j = 0,count=1;
//	scanf("%d", &n);
//	for (j=0; j < n; j++,count++)
//	{
//		arr[0][j] = count;
//	}
//	for (i = 1; i < n; i++,count++)
//	{
//		arr[i][n-1] = count;
//	}
//	i = n - 1;
//	while (i>0)
//	{
//		for (j = n - 2; j >= 0; j--,count++)
//		{
//			arr[i][j] = count;
//		}
//		i--;
//		for (j = 0; j <= n - 2; j++, count++)
//		{
//			arr[i][j] = count;
//		}
//		i--;
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//¾ØÕóÐý×ª

//int main()
//{
//	int arr1[20][20];
//	int arr2[20][20];
//	int n = 0, i = 0, j = 0,flag=0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//
//}

//
//#include <stdio.h>
//#include <string.h>
//char fun(char c)
//{
//	if (c >= 'A' && c <= 'Z')
//		return c + 32;
//	else if (c >= 'a' && c <= 'z')
//		return c - 32;
//	else if (c >= '1' && c <= '9')
//		return c - 1;
//	else if (c == '0')
//		return '9';
//	else
//		return c;
//}
//int main()
//{
//	char a = 0;
//	scanf("%c", &a);
//	char ch = fun(a);
//	printf("%c", ch);
//	return 0;
//
//}

//int main()
//{
//	char c=3;
//	int a=1;
//	float x=2.3;
//	double m=4.9;
//	//printf("%f", 0.3 + a + c + x + m * a);
//	printf("%f", m*a);
//	return 0;
//}


//int main()
//{
//	/*int arr[][3] = { 2 * 3 };
//	int i = 0,j=0;
//	for (i = 0; i < 1; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//	}*/
//
//	int i = 0;
//	for i in range(10);
//	print(i);
//	return 0;
//}


//int main()
//{
//	int arr[20][20];
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	/*int* p = &arr[0][0];
//	for (i = 0; i < m; i++)
//	{   
//		
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ",*(p+i+j*m));
//		}
//		printf("\n");
//	}*/
//	return 0;
//
//}



//void main()
//{
//	printf("%d", 1 + 2);
//	return;
//}

//int main()
//{
//    float a = 0;
//    scanf("%f", &a);
//    if (fabs((a - (int)a)) >= 0.5)
//    {
//        if (a < 0)
//            printf("%d", (int)a - 1);
//        else
//            printf("%d", (int)a + 1);
//    }
//    else
//        printf("%d", (int)a);
//    return 0;
//}


//int main() {
//    char arr[20];
//    float a = 0, b = 0, c = 0;
//    scanf("%s;%f,%f,%f", arr, &a, &b, &c);
//    printf("The each subject score of No. %s is %.2f, %.2f, %.2f\n", arr, a, b, c);
//    return 0;
//}


//int main() {
//    char arr[20];
//    gets(arr, 20);
//    printf("year=%c%c%c%c\n", arr[0], arr[1], arr[2], arr[3]);
//    printf("month=%c%c\n", arr[4], arr[5]);
//    printf("date=%c%c\n", arr[6], arr[7]);
//    return 0;
//}


//int main()
//{
//    int a, b, c;
//    scanf("%4d%2d%2d", &a, &b, &c);
//    printf("year=%d\nmonth=%02d\ndate=%02d\n", a, b, c);
//    return 0;
//}

//int main() {
//    int a = 0, b = 0;
//    scanf("%d,%d", &a, &b);
//    int tmp = a;
//    a = b;
//    b = tmp;
//    printf("a=%d,b=%d", a, b);
//    return 0;
//}

//int main()
//{
//	int a = 0xABCDEF;
//	int b1 = 10 * pow(16, 5);
//	int b2 = 11 * pow(16, 4);
//	int b3 = 12 * pow(16, 3);
//	int b4 = 13 * pow(16, 2);
//	int b5 = 14 * 16;
//	int b6 = 15;
//	printf("%d\n", b1 + b2 + b3 + b4 + b5 + b6);
//	return 0;
//}



int main()
{
	int N, V;
	int arr1[20][2];
	scanf("%d %d", &N, &V);
	int i = 0, j = 0,m=0;
	int arr2[20] = { 0 };
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	for (i = 0; i < N-1; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			if (arr1[i][0] + arr1[j][0] == V)
			{
				arr2[m] = arr1[i][1] + arr1[j][1];
				m++;
			}
		}
	}
	int max = arr2[0];
	for (i = 0; i < m; i++)
	{
		if (arr2[i] > max)
		{
			max = arr2[i];
		}
	}
	printf("%d\n", max);
	return 0;

}