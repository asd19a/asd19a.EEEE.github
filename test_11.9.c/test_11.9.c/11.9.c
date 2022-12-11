#include <stdio.h>
#include <math.h>


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 500; i++)
//	{
//		if ((i % 3 == 2) && (i % 5 == 3))
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int tmp = 0;
//	int sum = 0;
//	for (i = 10; i <= 1000; i++)
//	{
//		tmp = i;
//		if (i % 4 == 2 && i % 7 == 3 && i % 9 == 5)
//		{
//			sum=sum +tmp;
//		}
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//int main()
//{
//	char a = 0;
//	while (1)
//	{
//		printf("文字を入力してください：");
//		scanf_s("%c", &a,1);
//		if (a >= 'a' && a <= 'z')
//		{
//			a = a - 32;
//			printf("%c\n", a);
//			break;
//		}
//		else if (a >= 'A' && a <= 'Z')
//		{
//			a = a + 32;
//			printf("%c\n", a);
//			break;
//		}
//		else
//		{
//			printf("入力エラー、再入力：\n");
//			getchar();
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	long sum = 0;
//	for (i = 1; i <= 120; i++)
//	{
//		sum = sum + pow(i, 2);
//	}
//	printf("sum=%ld\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 4000; i++)
//	{
//		if( (i % 3 == 0 )|| (i % 11 == 0))
//		{
//			count++;
//		}
//
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (1)
//	{
//		printf("正の整数を入力してください：");
//		scanf_s("%d", &i);
//		if (i > 0)
//		{
//			if (i % 5 == 0 && i % 7 == 0)
//			{
//				printf("はい\n");
//				break;
//			}
//			else
//			{
//				printf("いいえ\n");
//				break;
//			}
//		}
//		else
//		{
//			printf("入力エラー、再入力\n");
//		}
//	}
//	return 0;

//}


//int main()
//{
//	int i = 0;
//	int sum = 0;
//	while (1)
//	{
//		i = i + 2;
//		sum = sum + i;
//		if (i > 3000)
//		{
//			break;
//		}
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

int main()
{
	int i = 1;
	int count = 0;
	while (i <= 100)
	{
		if (i % 7 == 0)
		{
			count++;
		}
		i++;
	}
	printf("count=%d\n", count);
	return 0;
}