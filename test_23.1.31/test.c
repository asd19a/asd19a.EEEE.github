#define _CRT_SECURE_NO_WARNINGS

#include "game.h"


void menu()
{
	printf("**********************************************\n");
	printf("*********    1.É¨À×       0.exit    **********\n");
	printf("**********************************************\n");

}


void saolei()
{
	init();
	buzhi();
	show();
	print();
	//printboard();
	//É¨À×
	while (1)
	{
		int result=souji();
		if (result == 1)
		{
			printboard();
			break;
		}
		else
		{
			print();
		}
	}


}

//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("ÇëÑ¡Ôñ:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			saolei();
//			break;
//		case 0:
//			printf("exit\n");
//			break;
//		default:
//			printf("Ñ¡Ôñ´íÎó£¬ÖØĞÂÑ¡Ôñ\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}


int main()
{
	double flag = 1;
	double i = 1;
	double j = 1;
	double sum = 0;
	int count = 0;
	while (fabs(i / j) >= 10e-4)
	{
		sum = sum + (i / j)*flag;
		j = j + 2;
		flag = -flag;
		count++;
	}
	printf("%lf  %d\n", sum * 4.0,count);
	return 0;
}


//Çó½×³ËµÄº¯Êı
double fact(int x)
{
	int i = 0;
	double sum = 1;
	for (i = 1; i <= x; i++)
	{
		sum = sum * i;
	}
	return sum;
}

int main()
{
	double i = 1;
	double j = 1;
	int x = 1;
	double sum = 0;
	int count = 0;
	while ((i / j) >= 10e-5)
	{
		sum = sum + i / j;
		j = fact(x);
		x++;
		count++;
	}
	printf("%lf   %d\n", sum, count);
	return 0;
}