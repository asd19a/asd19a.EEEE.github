#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


#include <stdio.h>
#include <string.h>

int main()
{
	char arr[100];
	gets(arr);
	int digit = 0, space = 0;
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < len; i++)
	{
		if (arr[i] >= '0' && arr[i] <= '9')
		{
			digit++;
		}
		else if (arr[i] == ' ')
		{
			space++;
		}
	}
	printf("����:> %d\n", digit);
	printf("�ַ�:> %d\n", len);
	printf("�ո�:> %d\n", space);
	return 0;
}