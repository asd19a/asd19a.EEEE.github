#include <stdio.h>
#include <string.h>
#include <limits.h>

//int main()
//{
//	int a, b, c;
//	for (a = 0;; a++)
//	{
//		for (b = 0;; b++)
//		{
//			for (c = 0;; c++)
//			{
//				if (29 * a + 30 * b + 31 * c == 366)
//				{
//					goto end;
//				}
//			}
//		}
//	}
//end:
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//	return 0;
//}


//int main()
//{
//	// int arr[40] = { 0 };
//	int i, j, x;
//	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0, count10 = 0;
//	int str[10] = { 0 };
//	for (i = 0; i < 40; i++)
//	{
//		again:
//		printf("请第%d位学生打分:>",i+1);
//		scanf_s("%d", &x);
//		if (x < 1 || x>10)
//		{
//			printf("さい入力:>\n");
//			goto again;
//		}
//		else
//		{
//			switch (x)
//			{
//			case 1:
//				count1++;
//				str[0] = count1; break;
//			case 2:
//				count2++;
//				str[1] = count2; break;
//			case 3:
//				count3++;
//				str[2] = count3; break;
//			case 4:
//				count4++;
//				str[3] = count4; break;
//			case 5:
//				count5++;
//				str[4] = count5; break;
//			case 6:
//				count6++;
//				str[5] = count6; break;
//			case 7:
//				count7++;
//				str[6] = count6; break;
//			case 8:
//				count8++;
//				str[7] = count8; break;
//			case 9:
//				count9++;
//				str[8] = count9; break;
//			case 10:
//				count10++;
//				str[9] = count10; break;
//			default:
//				break;
//			}
//		}
//
//	}
//	printf("Grade			Count			Histogram\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf(" %d ", i + 1);
//		printf("\t\t\t");
//		printf(" %d ", str[i]);
//		printf("\t\t\t");
//		for (j = 0; j < str[i]; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


int main()
{
	char arr[] = "一二三\0";
	int i = strlen(arr);
	printf("%d\n", i);
	
	return 0;
}