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
		if ((tmp % 10) % 2 == 0)  //����ȡģ���㣬�õ����ֵ����һλ�����%2==0������һλΪż��������������
		{
			arr[flag++] = tmp % 10;
		}
		tmp = tmp / 10;  //�������һλ
	}
	for (i = 0; i < flag - 1; i++)   //��С��������
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
	for (i = 0; i < flag; i++)  //��ӡ
	{
		printf("%d", arr[i]);
	}
	return 0;
}
