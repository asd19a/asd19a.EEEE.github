#include <stdio.h>
#include <string.h>
#include <math.h>



//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int i = 0;
//	printf("奇数位:");
//	for (i = 30; i >= 0; i = i - 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位:");
//	for (i = 31; i >= 0; i = i - 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}

int main()
{
    int n = 0, m = 0, i = 0, count = 0;
    scanf_s("%d %d", &n, &m);
    for (i = 1; i < 32; i++)
    {
        if (((n >> i) & 1) == ((m >> i) & 1))
        {
        count++;
        }

    }
    printf("%d\n", count);
    return 0;
}