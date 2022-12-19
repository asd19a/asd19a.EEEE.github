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

int main()
{
	int arr[20][20];
	int n = 0, i = 0, j = 0,count=1;
	scanf("%d", &n);
	for (j=0; j < n; j++,count++)
	{
		arr[0][j] = count;
	}
	for (i = 1; i < n; i++,count++)
	{
		arr[i][n-1] = count;
	}
	i = n - 1;
	while (i>0)
	{
		for (j = n - 2; j >= 0; j--,count++)
		{
			arr[i][j] = count;
		}
		i--;
		for (j = 0; j <= n - 2; j++, count++)
		{
			arr[i][j] = count;
		}
		i--;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

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