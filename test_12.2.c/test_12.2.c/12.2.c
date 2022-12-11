#include <stdio.h>
#include <math.h>


//#define	 ROW 3
//#define  COL 4
//
//int main()
//{
//	int arr[ROW][COL] = { 0 };
//	int i = 0;
//	int j = 0; int x = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			printf("请输入a[%d][%d]的数:>", i, j);
//			scanf_s("%d", &x);
//			arr[i][j] = x;
//		}
//	}
//	int a = 0, b = 0, count=0;
//	for (i = 0; i < ROW; i++)
//	{
//		
//		for (j = 0; j < COL; j++)
//		{
//			count = 0;
//			for (a = 0; a < ROW; a++)
//			{
//				if (arr[i][j] < arr[i][a])
//				{
//					count++;
//					goto end;
//				}
//			}
//			for (b = 0; b < COL; b++)
//			{
//				if (arr[i][j] > arr[b][j])
//				{
//					count++;
//					goto end;
//				}
//			}
//			if (count == 0)
//				goto END;
//		end:
//			;
//		
//		}
//	
//		
//	}
//	END:
//	if (count==0)
//	{
//		printf("有鞍点\n");
//	}
//	else
//		printf("无鞍点\n");
//	return 0;
//}



//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0, j = 0;
//	int x = 0;
//	//初始化数组
//	for (i = 0; i < 4; i++)
//	{
//		scanf_s("%d", &x);
//		arr[i] = x;
//	}
//	//对数组内的元素排序
//	for (i = 0; i < 3; i++)
//	{
//		for (j = i + 1; j < 4; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	//打印数组
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int(*pfarr[])(int, int) = { Add,Sub };
//	int add = pfarr[0](1, 2);
//	int sub = pfarr[1](2, 1);
//	printf("add=%d\n", add);
//	printf("sub=%d\n", sub);
//	return 0;
//}


int main()
{
	int a = 1, b = 2;
	int arr[2] = { 1,1 };
	int i = 0;
	for (i = 0; i < 2; i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}