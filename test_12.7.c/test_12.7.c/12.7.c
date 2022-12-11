#include <stdio.h>

int main()
{
	int x = 1, i = 0,sum=0,tmp=1;
	while (1)
	{
		tmp = x;
		for (i = 1; i < 10; i++)
		{
			tmp= tmp/ 2 - 1;
		}
		if (tmp == 1)
		{
			printf("第一天共摘了%d个桃子\n", x);
			break;
		}
		else
			x++;
	}
	return 0;
}


//int main()
//{
//	int x = 1, i = 0;
//	while (1)
//	{
//		for (i = 0; i < 10; i++)
//		{
//			x = x /2- 1;
//		}
//		if (x == 1)
//		{
//			printf("第一天共摘了%d个桃子\n", x);
//		}
//		else
//			x++;
//	}
//	return 0;
//}