#include <stdio.h>


//int main()
//{
//	//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//	int n = 0;
//	scanf_s("%d", &n);
//	printf("%d \n", 2 * n - 1);
//
//	return 0;
//}
#define N 3
int main() {
    int arr[N][N] = { 0 };
    int i = 0, j = 0, x = 0;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &x);
        arr[0][i] = x;
    }
    for (i = 1; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &x);
            arr[i][j] = x;
        }
    }
    int count = 0;
    for (i = 1; i < N; i++)
    {
        for (j = 0; j <= i - 1; j++)
        {
            if (arr[i][j] != 0)
            {
                count++;
                break;
            }
        }
    }
    if (count == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }
    return 0;
}