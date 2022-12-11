#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



//小学生计算机辅助教学系统

//int main()
//{
//	int a = 0;
//	int b = 0; int m = 0;
//	int guess=0;
//	int n = 0; int x = 0; int y = 0;
//	srand((unsigned int)time(NULL));
//	
//	
//	for (n = 0; n <10; n++)
//	{
//		a = rand() % 10;
//		b = rand() % 10;
//		m =(a+b)*a-b;
//		printf("请作答:>\n");
//		printf("(%d+%d)*%d-%d = ", a,b,a,b);
//		scanf_s("%d", &guess);
//		if (guess == m)
//		{
//			x = rand() % 4;
//			switch (x)
//			{
//			case 1:
//				printf("Very good\n");
//				break;
//			case 2:
//				printf("Excellent\n");
//				break;
//			case 3:
//				printf("Nice work\n");
//				break;
//			case 4:
//				printf("Keep up the good work\n");
//				break;
//			default:
//				printf("RIGHT!!!\n");
//				break;
//			}
//			
//		}
//		else
//		{
//			y = rand() % 4;
//			switch (y)
//			{
//			case 1:
//				printf("No Please try again\n");
//				break;
//			case 2:
//				printf("Wrong Try once more\n");
//				break;
//			case 3:
//				printf("Don't give up\n");
//				break;
//			case 4:
//				printf("Not correct.Keep trying\n");
//				break;
//			default:
//				printf("WRONG！！！\n");
//				break;
//
//			}
//			//printf("WRONG！！！\n");
//		
//		}
//		
//	}
//	//sum = 10 * count1;
//	//p = count1 / 10.0;
//	//printf("sum=%d,p=%lf\n", sum, p);
//
//
//	return 0;
//}


//递归算年龄


//int NL(int x,int y)
//{
//	if ()
//	{
//		x = x + 2;
//		return NL(int x);
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 10;
//	b = NL(a,c);
//}


//struct book
//{
//	char name[20];
//	char ID[20];
//	int price;
//};
//
//int main()
//{
//	struct book b = { "C语言","C191214",55 };
//	struct book* pa = &b;
//	printf("价格:%d\n",pa->price);
//	printf("书名:%s\n",pa->name);
//	printf("书号:%s\n",pa->ID);
//	strcpy_s(pa->name,"C++");
//	printf("书名:%s\n", pa->name);;
//	return 0;
//}


int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int m = a * b + c * d + a * c;
	printf("m=%d\n", m);
	return 0;
}