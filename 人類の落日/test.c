#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>



//typedef struct time
//{
//	char arr[5][10];
//	int x[5];
//	int mem[5];
//}time;
//
//int main()
//{
//	printf("\t\t这是人类的落日\n");
//	printf("\t\t消灭人类暴政，世界属于三体\n");
//	//int year = 400;
////	int month = 0, day = 0, minute = 0, second = 0;
//	//char time[5][10]={"year",""}
//	time t = { .arr[0] = "year",.arr[1] = "month",.arr[2] = "day",.arr[3] = "minute",.arr[4] = "second"};
//	int i = 0;
//	t.x[0] = 400;
//	for (i = 1; i < 5; i++)
//	{
//		t.x[i] = 0;
//	}
//	/*t.mem[0] = 12;
//	t.mem[1] = 12;
//	t.mem[2] = 30;
//	t.mem[3] = 1440;
//	t.mem[4] = 60;*/
//	printf("\t\t距离毁灭还有  %d  年  %d  月  %d  日  %d  分  %d  秒\n", year, month, day, minute, second);
//	while (1)
//	{
//		if (t.x[4]==0)
//		{
//			t.x[4] = 59;
//		}
//		if (t.mem[4] == 60)
//		{
//			if (t.x[3] == 0)
//			{
//				t.x[3] = 59;
//			}
//			else
//			{
//				t.x[3] = t.x[3] - 1;
//			}
//		}
//		if (t.mem[3] == 1440)
//		{
//			if (t.x[2] == 0)
//			{
//				t.x[2] = 29;
//			}
//			else
//			{
//				t.x[2] = t.x[2] - 1;
//			}
//		}
//		if (t.mem[2] == 30)
//		{
//			if (t.x[1] == 0)
//			{
//				t.x[1] = 11;
//			}
//			else
//			{
//				t.x[1] = t.x[1] - 1;
//			}
//		}
//		printf("\t\t距离毁灭还有  %d  年  %d  月  %d  日  %d  分  %d  秒\n", year, month, day, minute, second);
//	}
//}



void show()
{
	printf("\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t这是人类的落日\n\n");
	printf("\t\t\t\t\t消灭人类暴政，世界属于三体\n\n");
}

int main()
{
	//printf("\t\t这是人类的落日\n");
	//printf("\t\t消灭人类暴政，世界属于三体\n");
	//show();
	long long time = 12614400000;
	while (time)
	{
		show();
		printf("\t\t\t\t\t距离毁灭还有  %lld  秒", time);
		time--;
		Sleep(1000);
		system("cls");
		//Sleep(1000);
	}
	return 0;
}