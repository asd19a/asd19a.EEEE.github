#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


//void Max_word(char* str)
//{
//	int i = 0, j = 0;
//	int k = 0, p = 0;
//	int word[100][2] = {0};
//	int flag = 0;
//	while (*(str + i) != '\0')
//	{
//		flag = 0;
//		while (isalpha(*(str + i)) > 0)
//		{
//			k = p;
//			i++;
//			flag = 1;
//		}
//		if (flag == 1)
//		{
//			word[j][0] = i - k;
//			word[j][1] = k;
//			j++;
//		}
//		i++;
//		p = i;
//	}
//	int max1 = word[0][0];
//	int max2 = 0;
//	for (i = 0; i < j; i++)
//	{
//		if (word[i][0] > max1)
//		{
//			max1 = word[i][0];
//			max2 = i;
//		}
//	}
//	for (i = 0; i < max1; i++)
//	{
//		printf("%c", *(str+ word[max2][1] + i));
//	}
//	
//}
//
//int main()
//{
//	char arr[100];
//	gets(arr);
//
//	Max_word(arr);
//	return 0;
//}


void Max_word(char* str)
{
	int i = 0, j = 0;
	int max = 0;
	int k = 0;
	int p1 = 0, p2 = 0;
	int flag = 0;
	while (*(str + i) != '\0')
	{
		flag = 0;
		while (isalpha(*(str + i)) > 0)
		{
			k = p1;
			i++;
			flag = 1;
		}
		if (flag ==1)
		{
			if (i - k > max)
			{
				max = i - k;
			}
		}
		i++;
		p1 = i;
	}
	for (i = 0; i < max; i++)
	{
		printf("%c", *(str + k + i));
	}
	//return 0;
}

int main()
{
	char arr[100];
	gets(arr);
	Max_word(arr);
	return 0;
}