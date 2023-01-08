#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

//int main()
//{
//	char tmp[100];
//	gets(tmp);
//	FILE* pfwrite = fopen("1.8a.txt", "w");
//	if (pfwrite == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	fputs(tmp, pfwrite);
//	
//	FILE* pfcopy = fopen("1.8b.txt", "w");
//	if (pfcopy == NULL)
//	{
//		fclose(pfwrite);
//		pfwrite = NULL;
//		perror("fopen");
//	}
//	char ch = 0;
//	while (ch = fgetc(pfwrite) != EOF)
//
//	{
//		fputc(ch, pfcopy);
//	}
//	fclose(pfwrite);
//	pfwrite = NULL;
//	fclose(pfcopy);
//	pfcopy = NULL;
//	return 0;
//}


//int main()
//{
//	int a[] = { 1,2,3,4 ,5};
//	int* p = a;
//	printf("%d\n", *p);
//	printf("%d\n", *(++p));
//	printf("%d\n", (*p)++);
//	printf("%d\n", *p);
//	printf("%d\n", *p--);
//	printf("%d\n", --(*p));
//	printf("%d\n", *p);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//}

//void print(char* arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%s ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	char* parr[] = { "how","are","you" };
//	int num = sizeof(parr) / sizeof(char);
//	printf("num=%d\n", num);
//	print(parr, num);
//	return 0;
//}

//void input(int* pa, int n)
//{
//	int* tmp = pa;
//	for (; pa < tmp + n; pa++)
//	{
//		scanf("%d", pa);
//
//	}
//}
//void output(int* pa, int n)
//{
//	int* tmp = pa;
//	for (; pa < tmp + n; pa++)
//	{
//		printf("%-4d", *pa);
//	}
//}
//
//int main()
//{
//	int arr[5];
//	input(arr, 5);
//	output(arr, 5);
//	return 0;
//}

//void total(int* pscore, int sum[], float ave[], int m, int n)
//{
//	int i, j;
//	for (i = 0; i < m; i++)
//	{
//		sum[i] = 0;
//		for (j = 0; j < n; j++)
//		{
//			sum[i] = sum[i] + pscore[i * n + j];
//		}
//		ave[i] = (float)sum[i] / n;
//	}
//}
//void print(int* pscore, int sum[], float ave[], int m, int n)
//{
//	int i, j;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%4d\t", pscore[i * n + j]);
//		}
//		printf("%5d\+=t%6.1f\n", sum[i], ave[i]);
//	}
//}
//#define M 2
//#define N 3
//
//int main()
//{
//	int i, j, m, n, score[M][N], sum[M];
//	float ave[M];
//	scanf("%d", &m);
//	scanf("%d", &n);
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &score[i][j]);
//		}
//	}
//	total(score, sum, ave, m, n);
//	print(score, sum, ave, m, n);
//	return 0;
//}

//void input(int* arr, int m, int n)
//{
//	int i = 0, j = 0;
//	int max = 0;
//	int tmp1 = 0, tmp2 = 0;
//	for (i = 0; i < m; i++)
//	{
//		printf("%d班:\n", i + 1);
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d",arr+n*i+j);
//			if (*(arr + n * i + j) > max)
//			{
//				max = *(arr + n * i + j);
//				tmp1 = i+1;
//				tmp2 = j+1;
//			}
//		}
//	}
//	printf("最高分:>%-4d\n", max);
//	printf("%d班的第%d个学生\n", tmp1, tmp2);
//}
//
//int main()
//{
//	int m = 0, n = 0;
//	int i = 0, j = 0;
//	scanf("%d %d", &m, &n);
//	int* arr = (int*)calloc(m * n, sizeof(int));
//	if (arr == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//	input(arr, m, n);
//	free(arr);
//	arr = NULL;
//	return 0;
//	
//}

//struct stu
//{
//	char name[20];
//	char sex[10];
//	char time[20];
//	char job[50];
//};

//typedef struct time
//{
//	int h;
//	int min;
//	int ma;
//
//}tm;
//
//void update(tm* t)
//{
//	t->ma++;
//	if (t->ma == 60)
//	{
//		t->ma = 0;
//		t->min++;
//	}
//	if (t->min == 60)
//	{
//		t->min = 0;
//		t->h++;
//	}
//	if (t->h == 24)
//	{
//		t->h = 0;
//	}
//}
//void display(tm* t)
//{
//	printf("%d:%d:%d", t->h, t->min, t->ma);
//}
//
//int main()
//{
//	tm t = { 0,0,0 };
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		update(&t);
//		display(&t);
//		Sleep(1000);
//		system("cls");
//	}
//	return 0;
//}


//typedef struct candidate
//{
//	char Can1[10];
//	char Can2[10];
//	char Can3[10];
//	int can1;
//	int can2;
//	int can3;
//	int other;
//
//}candi;
//
//int main()
//{
//	candi c = { "zhang","li","wang",0 };
//	printf("候选人名单:\n");
//	printf("1.%s\n2.%s\n3.%s\n", c.Can1, c.Can2, c.Can3);
//	int input = 0;
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("请第%d位选民投票:>", i);
//		scanf("%d", &input);
//		if (input == 1)
//			c.can1++;
//		else if (input == 2)
//			c.can2++;
//		else if (input == 3)
//			c.can3++;
//		else
//			c.other++;
//	}
//	printf("最终投票结果:\n");
//	printf("%s\t\t%d\n", c.Can1, c.can1);
//	printf("%s\t\t%d\n", c.Can2, c.can2);
//	printf("%s\t\t%d\n", c.Can3, c.can3);
//	printf("废票数:>\t%d\n", c.other);
//	return 0;
//}

//typedef struct Card
//{
//	char suit[4][10] = { {"黑桃"},{"红桃"},{"草花" },{"方块"} };
//	char face[13];
//}Card;
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int ret1 = 0;
//	int ret2 = 0;
//	int i = 0, input = 0;
//	Card* card=NULL ;
//	*card->suit[0] = "黑桃";
//	*card->suit[1] = "红桃";
//	*card->suit[2] = "草花";
//	*card->suit[3] = "方块";
//	card->face[0] = 'A';
//	for (i = 1; i < 10; i++)
//	{
//		card->face[i] = i+1;
//	}
//	card->face[10] = 'J';
//	card->face[11] = 'Q';
//	card->face[12] = 'K';
//	
//	printf("请选择要发几张牌:>");
//	scanf("%d", &input);
//	for (i = 1; i <= input; i++)
//	{
//		ret1 = rand() % 4 ;
//		ret2 = rand() % 13 ;
//		printf("发到的第%d张牌:> %s\t\t%c\n", i,card->suit[ret1],card->face[ret2]);
//
//	}
//	return 0;
//	
//}
//


//int main()
//{
//	srand((unsigned int)time(NULL));
//	char suit[4][10] = { {"黑桃"},{"红桃"},{"草花"},{"方块"} };
//	char face[13] = { 'A','2','3','4','5','6','7','8','9','10','J','Q','K' };
//	int ret1 = 0, ret2 = 0;
//	int input = 0;
//	int i = 0;
//	again:
//	for (i = 1; i <= 5; i++)
//	{
//		ret1 = rand() % 4;
//		ret2 = rand() % 13;
//		printf("发到的第%d张牌:>  %s\t %c\n", i, suit[ret1], face[ret2]);
//	}
//	printf("            1.继续              0.结束\n");
//	printf("是否继续发牌:>");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		goto again;
//	}
//	else
//	{
//		printf("结束发牌\n");
//	}
//	return 0;
//
//}

int dominantIndex(int* nums, int numsSize)
{
    int i = 0;
    int max = nums[0];
    int ret = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
            ret = i;
        }
    }

    for (i = 0; i < numsSize; i++)
    {
        if (i != ret)
        {
            if ((nums[i] != 0) && ((max / nums[i]) < 2))
            {

                return -1;
            }
        }
    }
    return ret;


}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        perror("main");
        return 0;
    }
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    int ret=dominantIndex(arr, n);
    printf("%d\n", ret);
    free(arr);
    arr = NULL;
    return 0;
}