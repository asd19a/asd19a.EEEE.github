#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//int main()
//{
//	int x = 1, y = 0;
//	int n = 5;
//	while (1)
//	{
//		n = 5;
//		y = x / 5;
//		while (n>2)
//		{
//			y = (4 * y) / 5;
//			if (y == 0 && n > 1)
//			{
//				goto end;
//			}
//			n--;
//		}
//		if (y % 5 == 1)
//		{
//			printf("x=%d\n", x);
//			break;
//		}
//	end:
//		x++;
//	}
//	return 0;
//}

//int main()
//{
//	int sum = 0;
//	int i = 0, s = 0;  //s 用来记录椰子的总数量
//	while (1)
//	{
//		sum = s;  // sum 临时变量 ，即使用s的值，但不会改变它
//		for (i = 0; i < 4; i++)  //循环4遍是因为第五遍的时候就要判断 sum%5 的结果了
//		{
//			if (sum % 5 == 1)   //这个是进行下一步计算的条件，如果还没到最后一步前，sum %5 ！=1，那么就不需要进行if里的语句
//			{
//				sum = (sum - 1) - ((sum - 1)) / 5;
//			}
//		}
//		if (sum % 5 == 1)  //第5次判断 sum%5 的结果，如果 sum%5==1，就跳出循环
//		{
//			printf("%d", s);
//			break;
//		}
//		s++;   
//	}
//	return 0;
//}


//int main()
//{
//	int t[3][2] = { 0 };
//	printf("%p\n", t[2]);
//	printf("%p\n", &t[0][0]);
//	return 0;
//}

//int main()
//{
//	extern int a;
//	printf("%d\n", a);
//	return 0;
//}
//int a;

//int main()
//{
//    int a[] = { 4, 0, 2, 3, 1 }, i, j, t;
//    for (i = 1; i < 5; i++) 
//    {
//        t = a[i];
//        j = i - 1;
//        while (j >= 0 && t > a[j])
//        {
//            a[j + 1] = a[j];
//            --j;
//        }
//        a[j + 1] = t;
//    }
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", a[i]);
//    }
//    return 0;
//}


//int maxCount(int m, int n, int** ops, int opsSize, int* opsColSize)
//{
//
//}


//int cmp(const void* e1, const void* e2)
//{
//    int ret = *((int*)e2) - *((int*)e1);
//    return ret;
//}
//char** findRelativeRanks(int* score, int scoreSize, int* returnSize)
//{
//    int i = 0, j = 0, k = 0;
//    int* tmp = (int*)malloc(scoreSize * sizeof(int));
//    for (i = 0; i < scoreSize; i++)
//    {
//        tmp[i] = score[i];
//    }
//    qsort(tmp, scoreSize, sizeof(tmp[0]), cmp);
//    *returnSize = scoreSize;
//    char** result = (char**)malloc(1000);
//    for (i = 0; i < scoreSize; i++)
//    {
//        for (j = 0; j < scoreSize; j++)
//        {
//            if (score[i] == tmp[j])
//            {
//                break;
//            }
//        }
//        if (j == 0)
//        {
//            *result[i] = "Gold Medal";
//        }
//        else if (j == 1)
//        {
//            *result[i] = "Silver Medal";
//        }
//        else if (j == 2)
//        {
//            *result[i] = "Bronze Medal";
//        }
//        else
//        {
//            *result[i] = ;
//        }
//    }
//    return result;
//}
//
//
//int main()
//{
//    int score[] = { 5,4,3,2,1 };
//    int Size = sizeof(score) / sizeof(score[0]);
//    int returnSize = 0;
//    char **ch = findRelativeRanks(score, Size, &returnSize);
//    int i = 0;
//    for (i = 0; i < returnSize; i++)
//    {
//        printf("%s\n", ch[i]);
//    }
//
//    return 0;
//}


int main()
{
	/*int arr[2][3] = { 0 };
	int** p = arr;
	printf("%p\n", p);
	printf("%p\n", arr);*/
	//printf("%p\n", *p);
	//printf("%p\n", **p);
	//printf("%d\n", *p);
	//printf("%d\n", **p);
	//printf("%d\n", p[0][0]);
	char arr[3][10] = { "qwer","asxcdf","tyip" };
	char** p = arr;
	printf("%s\n", p[0]);
	return 0;
}