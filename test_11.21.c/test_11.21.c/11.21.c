#include <stdio.h>
#include <math.h>


int main()
{
	int line = 0;
	scanf_s("%d", &line);
	int i = 0;
	
	int n = 0;
	for (n = 1; n <= line / 2; n++)
	{
		for (i = 1; i <= (line -(2*n-1)) / 2; i++)
		{
			printf(" ");
		}
		for (i = 1; i <= (2*n-1); i++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (n = 1; n <= line; n++)
	{
		printf("*");
	}
	printf("\n");
	//int m = line/2;
	for (n = line / 2; n > 0; n--)
	{
		for (i = 1; i <= (line - (2 * n - 1)) / 2; i++)
		{
			printf(" ");
		}
		for (i = 1; i <= 2 * n - 1; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}