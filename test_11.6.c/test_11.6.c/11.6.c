#include <stdio.h>
#include <math.h>
#include <assert.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d", &a, &b);
//	int ret = a ^ b;
//	int count = 0;
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int i = 0;
//	//scanf_s("%d", &n);
//	printf("ż��λ:");
//	for (i = 31; i >= 1; i = i - 2)
//	{
//		//n = ((n>>i) & 1);
//		printf("%d  ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("����λ:");
//	for (i = 30; i >= 0; i=i-2)
//	{
//		//n = ((n >> i) & 1);
//		printf("%d  ", (n >> i) & 1);
//	}
//	return 0;
//}

//int Num(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = Num(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//
//���磺2 + 22 + 222 + 2222 + 22222
//


//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf_s("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	while (n)
//	{
//		a = i * 10 + 2;
//		sum = sum + a;
//		n--;
//		i=a;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//���0��100000֮������С�ˮ�ɻ������������
//
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int tmp = 0;
//	int count = 0;
//	while (1)
//	{
//		tmp = i;
//		n = 1;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		
//		
//		count = n;
//		sum = 0; tmp = i;
//		while (count)
//		{
//			sum = sum + pow(tmp % 10, n);
//			tmp = tmp / 10;
//			if (sum == i)
//			{
//				printf("%d  ", i);
//			}
//			count--;
//		}
//		i++;
//		if (i > 100000)
//		{
//			break;
//		}
//			
//	}
//	return 0;
//}


//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//
//arr��һ������һά���顣


//void print(int* str, int sz)
//{
//	assert(str != NULL);
//	int i = sz;
//	while (i)
//	{
//		printf("%d  ", *(str + sz - i));
//		i--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


//����һ���������飬ʵ��һ��������
//
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//
//����ż��λ������ĺ�벿�֡�
//

//void P(int * const str, int sz)
//{
//	int i = 0;
//	int j = 0;
//	int* tmp = str;
//	for (i = 0; i < sz; i++)
//	{
//		if (*(tmp + i) % 2 == 1)
//		{
//			*(tmp + j) = *(tmp + i);
//			j++;
//		}
//		
//		
//	}
//	j = sz / 2 ;
//	for (i = 0; i < sz; i++)
//	{
//		if (*(str + i) % 2 == 0)
//		{
//			*(str + j) = *(str + i);
//			j++;
//		}
//
//		
//	}
//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	P(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}



void P(int* str, int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;
	while (left < right)
	{
		while (*(str + left) % 2 == 1)
		{
			left++;
		}
		while (*(str + right) % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			tmp = *(str + left);
			*(str + left) = *(str + right);
			*(str + right) = tmp;
		}
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	P(arr, sz);
	for (i = 0; i < sz; i++)
	{
		
		printf("%d  ", arr[i]);
		
	}
	return 0;
}