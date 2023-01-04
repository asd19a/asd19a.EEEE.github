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