#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//int main()
//{
//	int x = 1, y = 0;
//	int n = 5;
//	while (1)
//	{
//		n = 5;
//		y = x / 5;
//		while (n>2)
//		{
//			y = (4 * y) / 5;
//			if (y == 0 && n > 1)
//			{
//				goto end;
//			}
//			n--;
//		}
//		if (y % 5 == 1)
//		{
//			printf("x=%d\n", x);
//			break;
//		}
//	end:
//		x++;
//	}
//	return 0;
//}

int main()
{
	int sum = 0;
	int i = 0, s = 0;  //s ������¼Ҭ�ӵ�������
	while (1)
	{
		sum = s;  // sum ��ʱ���� ����ʹ��s��ֵ��������ı���
		for (i = 0; i < 4; i++)  //ѭ��4������Ϊ������ʱ���Ҫ�ж� sum%5 �Ľ����
		{
			if (sum % 5 == 1)   //����ǽ�����һ������������������û�����һ��ǰ��sum %5 ��=1����ô�Ͳ���Ҫ����if������
			{
				sum = (sum - 1) - ((sum - 1)) / 5;
			}
		}
		if (sum % 5 == 1)  //��5���ж� sum%5 �Ľ������� sum%5==1��������ѭ��
		{
			printf("%d", s);
			break;
		}
		s++;   
	}
	return 0;
}
