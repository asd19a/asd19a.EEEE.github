#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <math.h>


void menu()
{
	printf("**********************************************\n");
	printf("****** 　　　  1.遊ぶ　　０.　終了　　　******\n");
	printf("**********************************************\n");
}
void game()
{
	int count = 0;
	int guess = 0;
	int x = rand() % 100 + 1;
	while (1)
	{
		
		printf("数字を当ててみてください：");
		scanf_s("%d", &guess);
		if (guess == x)
		{
			printf("おめでとう、当たった！！！   ");
			printf("count=%d\n", count);
			break;
		}
		else if (guess < x)
		{
			printf("とても小さい、も一度ください\n");
			count++;
			printf("君はまだ%d回チャンスです\n", 10 - count);
		}
		else if(guess>x)
		{
			printf("とても大きい、も一度ください\n");
			count++;
			printf("君はまだ%d回チャンスです\n", 10 - count);
		}
		 if (count == 10&&guess!=x)
		{
			printf("チャンスはもうありませんよ、ゲームに失敗しました\n");
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
		printf("選択してください：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("ゲームを終了する\n");
			break;
		default:
			printf("選択エラー、再選択\n");
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