#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <math.h>


void menu()
{
	printf("**********************************************\n");
	printf("****** ������  1.�[�֡�����.���K�ˡ�����******\n");
	printf("**********************************************\n");
}
void game()
{
	int count = 0;
	int guess = 0;
	int x = rand() % 100 + 1;
	while (1)
	{
		
		printf("���֤򵱤ƤƤߤƤ���������");
		scanf_s("%d", &guess);
		if (guess == x)
		{
			printf("����ǤȤ��������ä�������   ");
			printf("count=%d\n", count);
			break;
		}
		else if (guess < x)
		{
			printf("�ȤƤ�С��������һ�Ȥ�������\n");
			count++;
			printf("���Ϥޤ�%d�إ���󥹤Ǥ�\n", 10 - count);
		}
		else if(guess>x)
		{
			printf("�ȤƤ�󤭤�����һ�Ȥ�������\n");
			count++;
			printf("���Ϥޤ�%d�إ���󥹤Ǥ�\n", 10 - count);
		}
		 if (count == 10&&guess!=x)
		{
			printf("����󥹤Ϥ⤦����ޤ���衢���`���ʧ�����ޤ���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	system("color 9E");
	do
	{
		menu();
		printf("�x�k���Ƥ���������");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("���`���K�ˤ���\n");
			break;
		default:
			printf("�x�k����`�����x�k\n");
			break;
		}
	} while (input);

	return 0;
}


//long Fact(int n)
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int i = 1;
//	/*int n = 0;*/
//	double sum = 0;
//	system("color 9E");
//	while (1)
//	{
//		sum = sum + 1.0 / Fact(i);
//		i++;
//		if (Fact(i) < 1e-5)
//		{
//			break;
//		}
//	}
//	printf("sum=%lf\n", sum);
//	printf("i=%d\n", i);
//	
//	return 0;
//}