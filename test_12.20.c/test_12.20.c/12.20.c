#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <string.h>
#include <math.h>


//int main()
//{
//	printf("%d", printf("%d", printf("1")));
//	return 0;
//}

//void print(unsigned int num)
//{
//	if (num < 10)
//		printf("%u ", num);
//	else
//	{
//		printf("%u ", num % 10);
//		print(num / 10);
//	}
//	
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return  0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//int main() {
//    int a = 6, b = 4, c; ��� b = ((c = a) > b);
//    return 0;
//}

//ˮ�ɻ���

//int main()
//{
//	int i = 0;
//	int n, m;
//	printf("�����뷶Χ:>");
//	scanf("%d %d", &n, &m);
//	for(i=n;i<=m;i++)
//	{
//		n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10 != 0)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		int count = 0;
//		for (tmp = i, count = n; count > 0; count--)
//		{
//			sum = sum + pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//������

//int main()
//{
//	int n, m;	//���뷶Χ
//	int i,j, count; //i����n - m֮�������count��¼λ��
//	int tmp1, tmp2;	//tmp1ʹ��ǰ�������tmp2ʹ�ú������
//	printf("�����뷶Χ:>");
//	scanf("%d %d", &n, &m);
//	int flag = 0;
//	for (i = n; i <= m; i++)
//	{
//		flag = 0;
//		count = 1;  
//		tmp1 = i;
//		while (tmp1 / 10 != 0)
//		{
//			count++;
//			tmp1 = tmp1 / 10;
//		}
//		int a = count / 2;
//		for (j=count,tmp1=i,tmp2=i; a > 0; j--,a--)
//		{
//			int b1 = tmp1 / (pow(10, j - 1));
//			if(b1==tmp2%10)
//			{
//				flag++;
//				int p1 = pow(10, j-1);
//				tmp1 = tmp1 % p1;
//				tmp2 = tmp2 / 10;
//			}
//			
//		}
//		if (flag == count / 2)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 123456;
//	int tmp = i, n = 1;
//	while (tmp / 10 != 0)
//	{
//		n++;
//		tmp = tmp / 10;
//	}
//	return 0;
//}

int main()
{
	int i = 123456;
	int tmp = i,n=6;
	while (n > 0)
	{
		tmp = i / (pow(10, n-1));
		printf("%d ", tmp);
		int p = pow(10, n-1);
		i = i % p;
		n--;
	}
}

//int main()
//{
//	int i = 123456;
//	int tmp = i, n = 6;
//	while (n>0)
//	{
//		tmp = i % 10;
//		printf("%d ", tmp);
//		i = i / 10;
//		n--;
//	}
//	return 0;
//}