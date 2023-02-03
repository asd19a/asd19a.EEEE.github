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
	int i = 0, s = 0;  //s 用来记录椰子的总数量
	while (1)
	{
		sum = s;  // sum 临时变量 ，即使用s的值，但不会改变它
		for (i = 0; i < 4; i++)  //循环4遍是因为第五遍的时候就要判断 sum%5 的结果了
		{
			if (sum % 5 == 1)   //这个是进行下一步计算的条件，如果还没到最后一步前，sum %5 ！=1，那么就不需要进行if里的语句
			{
				sum = (sum - 1) - ((sum - 1)) / 5;
			}
		}
		if (sum % 5 == 1)  //第5次判断 sum%5 的结果，如果 sum%5==1，就跳出循环
		{
			printf("%d", s);
			break;
		}
		s++;   
	}
	return 0;
}
