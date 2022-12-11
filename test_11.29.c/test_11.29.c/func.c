
#include "func.h"

int Dayofyear(int year, int month, int day)
{
	int n = 0;
	
	
		if (month <= 2)
		{
			
			n = (month/ 2) * 31 + day;
			return n;
			
		}
		else
		{
			
			for (int i = 3; i < month; i++)
			{
				if (i % 2 == 1)
				{
					n = n + 31;
				}
				else
				{
					n = n + 30;
				}
			}
			if (month >= 8)
			{
				if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
					return n + 61+day;
				else
					return n+60+day;
			}
			else
			{
				if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
					return n + 60+day;
				else
					return n+59+day;
			}
		}
	
}


void MonthDay(int year, int yearday)
{
	printf("%d年", year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		if (yearday >= 1 && yearday <= 31)
			printf("1月%d日\n", yearday);
		else if (yearday > 31 && yearday <= 60)
			printf("2月%d日\n", yearday - 31);
		else if (yearday > 60 && yearday <= 91)
			printf("3月%d日\n", yearday - 60);
		else if (yearday > 91 && yearday <= 121)
			printf("4月%d日\n", yearday - 91);
		else if (yearday > 121 && yearday <= 152)
			printf("5月%d日\n", yearday - 121);
		else if (yearday > 152 && yearday <= 182)
			printf("6月%d日\n", yearday - 152);
		else if (yearday > 182 && yearday <= 213)
			printf("7月%d日\n", yearday - 182);
		else if (yearday > 213 && yearday <= 244)
			printf("8月%d日\n", yearday - 213);
		else if (yearday > 244 && yearday <= 274)
			printf("9月%d日\n", yearday - 244);
		else if (yearday > 274 && yearday <= 305)
			printf("10月%d日\n", yearday - 274);
		else if (yearday > 305 && yearday <= 335)
			printf("11月%d日\n", yearday - 305);
		else
			printf("12月%d日\n", yearday - 335);
	}
	else
	{
		if (yearday >= 1 && yearday <= 31)
			printf("1月%d日\n", yearday);
		else if (yearday > 31 && yearday <= 59)
			printf("2月%d日\n", yearday - 31);
		else if (yearday > 59 && yearday <= 90)
			printf("3月%d日\n", yearday - 59);
		else if (yearday > 90 && yearday <= 120)
			printf("4月%d日\n", yearday - 90);
		else if (yearday > 120 && yearday <= 151)
			printf("5月%d日\n", yearday - 120);
		else if (yearday > 151 && yearday <= 181)
			printf("6月%d日\n", yearday - 151);
		else if (yearday > 181 && yearday <= 212)
			printf("7月%d日\n", yearday - 181);
		else if (yearday > 212 && yearday <= 243)
			printf("8月%d日\n", yearday - 212);
		else if (yearday > 243 && yearday <= 273)
			printf("9月%d日\n", yearday - 243);
		else if (yearday > 273 && yearday <= 304)
			printf("10月%d日\n", yearday - 273);
		else if (yearday > 304 && yearday <= 334)
			printf("11月%d日\n", yearday - 304);
		else
			printf("12月%d日\n", yearday - 334);
	}
	
}