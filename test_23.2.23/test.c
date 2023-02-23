#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	long a = 0;
	scanf("%d", &a);
	long tmp = a;
	int i = 0, j = 0;
	int flag = 0;
	int arr[20] = { 0 };
	while (tmp)
	{
		if ((tmp % 10) % 2 == 0)  //利用取模运算，得到数字的最后一位，如果%2==0，则这一位为偶数，放入数组中
		{
			arr[flag++] = tmp % 10;
		}
		tmp = tmp / 10;  //剥离最后一位
	}
	for (i = 0; i < flag - 1; i++)   //从小到大排序
	{
		for (j = 0; j < flag - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int k = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = k;
			}
		}
	}
	for (i = 0; i < flag; i++)  //打印
	{
		printf("%d", arr[i]);
	}
	return 0;
}
