#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>


//#define N 50
//#define M 50

//void show(char str[][M], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		puts(str[i]);
//	}
//}
//
//void updateinput(char str[][M], int n)
//{
//	int x = 1, y = 1;
//	int exitx = 10, exity = 13;
//	char input = 0;
//	while (x != exitx || y != exity)
//	{
//		if (_kbhit)
//		{
//			input = _getch();
//			if (input == 'a' && str[x][y - 1] != '*')
//			{
//				str[x][y] = ' ';
//				y--;
//				str[x][y] = 'o';
//			}
//			if (input == 'd' && str[x][y + 1] != '*')
//			{
//				str[x][y] = ' ';
//				y++;
//				str[x][y] = 'o';
//			}
//			if (input == 'w' && str[x - 1][y] != '*')
//			{
//				str[x][y] = ' ';
//				x--;
//				str[x][y] = 'o';
//			}
//			if (input == 's' && str[x + 1][y] != '*')
//			{
//				str[x][y] = ' ';
//				x++;
//				str[x][y] = 'o';
//			}
//			
//		}
//		system("cls");
//		show(str, n);
//		Sleep(100);
//	}
//	printf("おめでとうございます！！！\n");
//	printf("君は勝だ！！！\n");
//	system("PAUSE");
//}
//
//int main()
//{
//	char str[N][M] =
//	{
//		"***************",
//		"* o          * ",
//		"*  ************",
//		"*  *         **",
//		"*  *   *  *  **",
//		"*  *   *  *   *",
//		"*  *   *  *   *",
//		"*  *   *  **  *",
//		"*  *   *  **  *",
//		"*  *   *  **  *",
//		"*      *  **   ",
//		"****************"
//	};
//	int n = 12;
//	show(str, n);
//	updateinput(str, n);
//	return 0;
//}

//#define N 50
//#define M 50
//
//
//int flag;

//typedef struct mayoi
//{
//	char a1[N][N];
//	int a2[N][N];
//	int a3[N][N];
//}mayoi;

//char a[N][N] = {
//	{'1','1','1','1','1','1','1','1','1','1','1','1'},
//	{'1','0','0','0','0','0','0','0','0','0','0','1'},
//	{'1','0','1','1','1','1','1','1','1','1','1','1'},
//	{'1','0','1','0','0','0','1','0','0','0','1','1'},
//	{'1','0','1','0','1','0','1','0','1','0','1','1'},
//	{'1','0','1','0','1','0','1','0','1','0','0','1'},
//	{'1','0','1','0','1','0','1','0','1','0','0','1'},
//	{'1','0','1','0','1','0','1','0','1','1','0','1'},
//	{'1','0','1','0','1','0','1','0','1','1','0','1'},
//	{'1','0','1','0','1','0','1','0','1','1','0','1'},
//	{'1','0','0','0','1','0','0','0','1','1','0','0'},
//	{'1','1','1','1','1','1','1','1','1','1','1','1'}
//};
//char a[N][N];
//void show(char arr[][N], int n, int m)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (arr[i][j] == '1')
//			{
//				printf("*");
//			}
//			else if (arr[i][j] == '0')
//			{
//				printf(" ");
//			}
//			else if (arr[i][j] == '2')
//			{
//				printf("o");
//			}
//		}
//		printf("\n");
//	}
//}
//
//int go(int x1, int y1, int x2, int y2)
//{
//	a[x1][y1] = '2';
//	system("cls");
//	show(a, 12, 12);
//	Sleep(150);
//	if (x1 == x2 && y1 == y2)
//	{
//		flag = 1;
//	}
//	if (flag != 1)
//	{
//		if (a[x1 - 1][y1] == '0')
//		{
//			go(x1 - 1, y1, x2, y2);
//		}
//		if (a[x1 + 1][y1] == '0')
//		{
//			go(x1 + 1, y1, x2, y2);
//		}
//		if (a[x1][y1 - 1] == '0')
//		{
//			go(x1, y1 - 1, x2, y2);
//		}
//		if (a[x1][y1 + 1] == '0')
//		{
//			go(x1, y1 + 1, x2, y2);
//		}
//
//	}
//	if (flag != 1)
//	{
//		a[x1][y1] = '0';
//	}
//	return flag;
//
//}
//
//void download(char arr[][N], int n, int m)
//{
//	FILE* pfdown = fopen("mayoi.txt", "r");
//	if (!pfdown)
//	{
//		perror("download");
//		return;
//	}
//	int i = 0, j = 0;
//	char tmp = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			
//			if (fread(&tmp, sizeof(char), 1, pfdown))
//			{
//				arr[i][j] = tmp;
//			}
//		}
//	}
//	fclose(pfdown);
//	pfdown = NULL;
//}
//
//void print(char arr[][N], int n, int m)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int x1, y1, x2, y2 = 0;
//	int n = 12, m = 12;
//	download(a, n, m);
//	print(a, n, m);
//	//show(a, n, m);
//	/*char tmp = 0;
//	int i = 0, j = 0;
//	FILE* pfsave = fopen("mayoi.txt", "w");
//	if (pfsave == NULL)
//	{
//		perror("pfsave");
//		return 0;
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			tmp = a[i][j];
//			fwrite(&tmp, sizeof(char), 1, pfsave);
//		}
//		tmp = '\n';
//		fwrite(&tmp, sizeof(char), 1, pfsave);
//	}
//	fclose(pfsave);*/
//	/*pfsave = NULL;*/
//	/*printf("入口と出口を入力してください：");
//	scanf("%d,%d,%d,%d", &x1, &y1, &x2, &y2);
//	if (go(x1, y1, x2, y2) == 0)
//	{
//		printf("道はないです\n");
//	}
//	else
//	{
//		printf("おめでとうございます！！！\n");
//		printf("君は勝だ！！！\n");
//		system("PAUSE");
//	}*/
//
////
////	return 0;
////}



//int main()
//{
//	FILE* pfread = fopen("source.txt", "a");
//	if (!pfread)
//	{
//		perror("pfread");
//		return 0;
//	}
//	char ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		fputc(ch, pfread);
//	}
//	/*FILE* pfcopy = fopen("copy.txt", "w");
//	if (!pfcopy)
//	{
//		fclose(pfread);
//		pfread = NULL;
//		perror("pfcopy");
//		return 0;
//	}*/
//	char tmp = 0;
//	/*while (fread(&tmp, 1, 1, pfread))
//	{
//		fwrite(&tmp, 1, 1, pfcopy);
//	}*/
//	fclose(pfread);
//	pfread = NULL;
//	/*fclose(pfcopy);
//	pfcopy = NULL;*/
//	return 0;
//
//}