#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <math.h>



//int main()
//{
//	int n = 0;
//	char arr[20][100];
//	int i = 0, j = 0;
//	scanf("%d", &n);
//	getchar();
//	for (i = 0; i < n; i++)
//	{
//		gets(arr[i]);
//	}
//	int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i][0] >= '0' && arr[i][0] <= '9')
//		{
//			printf("NO\n");
//			continue;
//		}
//		if (strlen(arr[i]) < 8)
//		{
//			printf("NO\n");
//			continue;
//		}
//		count1 = 0;
//		count2 = 0;
//		count3 = 0;
//		count4 = 0;
//		for (j = 0; j < strlen(arr[i]); j++)
//		{
//			if (arr[i][j] >= 'a' && arr[i][j] <= 'z')
//				count1 = 1;
//			else if (arr[i][j] >= 'A' && arr[i][j] < 'Z')
//				count2 = 1;
//			else if (arr[i][j] >= '0' && arr[i][j] <= '9')
//				count3 = 1;
//			else
//				count4 = 1;
//			if (count4 != 0)
//			{
//				printf("NO\n");
//				break;
//			}
//			
//		}
//		if (((count1 + count2 + count3) >= 2)&&count4==0)
//		{
//			printf("YES\n");
//		}
//		else
//			printf("NO\n");
//	}
//	return 0;
//
//}


//int main()
//{
//    int A = 29;
//    int B = 15;
//    int count = 0;
//    int i = 0;
//    int tmp = A ^ B;
//    /*for (i = 1; i <= 32; i++)
//    {
//        if ((B & (B-1)) != (A & (A-1)))
//        {
//            count++;
//        }
//        A=A >> i;
//        B=B >> i;
//    }*/
//    while (tmp)
//    {
//        tmp = tmp & (tmp - 1);
//        count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 4;
//	int ret = 0;
//	int count1 = 0, count2 = 0;
//	for (i = 0; i < 32; i++)
//	{
//		ret = a & 1;
//		if (ret == 1)
//			count1++;
//		else
//			count2++;
//		printf("%d ", ret);
//		a = a >> i;
//	}
//	printf("\n");
//	printf("count1=%d  count2=%d\n", count1, count2);
//	return 0;
//}


//int main()
//{
//	int a = 29;
//	int b = 15;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		int ret1 = (a >> i) & 1;
//		int ret2 = (b >> i) & 1;
//		if (ret1 != ret2)
//			count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	int d;
//};
//int main()
//{
//	//printf("%d\n", sizeof(struct S1));
//	//printf("%d\n", sizeof(struct S2));
//	//printf("%d\n", sizeof(struct S3));
//	printf("%d\n", sizeof(struct S4));
//	retu.  rn 0;
//}


//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 5;
//	int i = 0, j = 0;
//	int flag = 0;
//	
//		for (i = 0; i < 3; i++)
//		{
//			if (arr[i][2] > k)
//			{
//				for (j = 1; j >= 0; j--)
//				{
//					if (arr[i][j] == k)
//					{
//						flag = 1;
//						printf("找到了，位置是arr[%d][%d]\n", i, j);
//					}
//					else if (arr[i][j] < k)
//					{
//						break;
//					}
//				}
//			}
//		}
//		if (flag == 0)
//		{
//			printf("找不到\n");
//		}
//		return 0;
//}

//void reverse(char* str1, char* str2)
//{
//	while (str1 < str2)
//	{
//		char tmp = *str1;
//		*str1 = *str2;
//		*str2 = tmp;
//		str1++;
//		str2--;
//	}
//}
//void string_left_rotate(char* str, int k)
//{
//	int len = strlen(str);
//	reverse(str, str + k - 1);
//	reverse(str + k, str + len - 1);
//	reverse(str, str + len - 1);
//}
//
//int main()
//{
//	char arr[7] = "ABCDEF";
//	int k = 0;
//	scanf("%d", &k);
//	string_left_rotate(arr, k);
//	puts(arr);
//	return 0;
//}

//int is_string_rotate(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	else
//	{
//		strncat(str1, str1, len1);
//		char* p = strstr(str1, str2);
//		if (p == NULL)
//			return 0;
//		else
//			return 1;
//
//	}
//}
//
//int main()
//{
//	char arr1[20] = "ABCDEF";
//	char arr2[20] = "BCDEFA";
//	int ret=is_string_rotate(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("YES\n");
//	}
//	else
//		printf("NO\n");
//	return 0;
//
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	getchar();
//	char arr[20][100];
//	int i = 0, j = 0;
//	for (i = 0; i < n + 1; i++)
//	{
//		gets(arr[i]);
//	}
//	int len = strlen(arr[n]);
//	for (i = 0; i < n; i++)
//	{
//		if (strncmp(arr[i], arr[n], len) == 0)
//		{
//			printf("%s\n", arr[i]);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0, q = 0;
//	scanf("%d %d", &n, &q);
//	int arr1[100];
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	int arr2[20][2];
//	int arr3[20];
//	int count = 0;
//	for (i = 0; i < q; i++)
//	{
//		scanf("%d %d", &arr2[i][0], &arr2[i][1]);
//		count = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (arr1[j] >= arr2[i][0] && arr1[j] <= arr2[i][1])
//			{
//				count++;
//			}
//		}
//		arr3[i] = count;
//	}
//	for (i = 0; i < q; i++)
//	{
//		printf("%d\n", arr3[i]);
//	}
//	return 0;
//
//}


int main()
{
	int n = 0;
	scanf("%d", &n);
	getchar();
	int arr[20]={0};
	int i = 0, j = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int size = 1;
	int max = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	int Max[20]={0};
	int count = 0;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (size = 1; size <= n; size++)
	{
		max = 0;
		for (i = n-1,count=0; count < size; i--,count++)
		{
			max = max + arr[i];
		}
		Max[size - 1] = max;
	}
	int r_max = Max[0];
	for (i = 0; i < n; i++)
	{
		if (Max[i] > r_max)
		{
			r_max = Max[i];
		}
	}
	printf("%d\n", r_max);
	return 0;
}