#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <windows.h>

//int main()
//{
//	/*char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d\n", a, b, c);*/
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}


//int main()
//{
//	unsigned int i = 0;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d\n", i); Sleep(1000);
//	}
//	return 0;
//}


//int main()
//{
//	 unsigned char a = -1;
//	int b = 2;
//	printf("%d\n", a + b);
//	
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//		printf("���\n");
//	return 0;
//}


//���ݵ�����ż������

//��ӡ����
void print(int arr[])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}
void sort(int arr[])
{
	int i = 0,j=0,m=0;
	int count = 0;
	//ȷ�������ĸ���
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 != 0)
			count++;
	}
	while (m < count)
	{
		for (i = m; i < 9; i=i+2)
		{
			if (arr[i] % 2 == 0)
			{
				for (j = i + 1; j < 10; j++)
				{
					if (arr[j] % 2 != 0)
					{
						int tmp = arr[i];
						arr[i] = arr[j];
						arr[j] = tmp;
						break;
					}
				}
			}
		}
		m++;
		if (m != count)  //���һ�鲻��ӡ
		{
			print(arr);
			printf("\n");
		}
	}
	//���������ֽ�������
	for (i = 0; i < count - 1; i++)
	{
		for (j = i + 1; j < count; j++)
		{
			if (arr[i] > arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	//��ż�����ֽ�������
	for (i = count; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (arr[i] > arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	print(arr);
}

int main()
{
	int arr[10];
	int i = 0, j = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	sort(arr);
	return 0;
}