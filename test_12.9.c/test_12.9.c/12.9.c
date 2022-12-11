#include <string.h>
#include <stdio.h>
#include <ctype.h>

//int main()
//{
//	char arr1[5] = "asdfg";
//	char arr2[5] = "zxcvb";
//	strcpy_s(arr1, arr2,5);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c", arr1[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	
//	for (i = 0; i < 9; i++)
//	{
//		for (j = i + 1; j < 10; j++)
//		{
//			if (arr[i]> arr[j])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[6] = { 1,2,3,4,5};
//	int i = 0, j= 0;
//	scanf_s("%d", &arr[5]);
//	for (i = 0; i < 5; i++)
//	{
//		for (j = i + 1; j < 6; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

#define n 3
#define m 20

int main()
{
	char arr[n][m] = { 0 };
	int i = 0, j = 0;
	for (i = 0; i < n; i++)
	{
		gets_s(arr[i], 20);
	}
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0,count5=0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < strlen(arr[i]); j++)
		{
			/*if ((isupper(arr[i][j]))!= 0)
				count1++;
			else if ((islower(arr[i][j])) != 0)
				count2++;
			else if ((isdigit(arr[i][j])) != 0)
				count3++;
			else if ((isspace(arr[i][j]))!= 0)
				count4++;
			else
				count5++;*/
			if (arr[i][j] >= 'A' && arr[i][j] <= 'Z')
				count1++;
			else if (arr[i][j] >= 'a' && arr[i][j] <= 'z')
				count2++;
			else if (arr[i][j] >= '0' && arr[i][j] <= '9')
				count3++;
			else if (arr[i][j] == ' ')
				count4++;
			else
				count5++;
		}
	}
	printf("大写字母count1=%d\n", count1);
	printf("小写字母count2=%d\n", count2);
	printf("数字count3=%d\n", count3);
	printf("空格count4=%d\n", count4);
	printf("其他count5=%d\n", count5);
	return 0;

}


//int main()
//{
//	char arr[5] = { 1,2,'a','A','?' };
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		if (isdigit(arr[i]) != 0)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}