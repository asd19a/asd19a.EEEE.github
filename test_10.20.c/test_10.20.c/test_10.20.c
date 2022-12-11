#include <stdio.h>
#include <math.h>


int SUM(int y)
{
	int sum = 0;
	sum = sum + y;
	return  sum;
}

int IsPrime(int x)
{
	int i = 0;
	int j = 0;
	int m = 0;
	for (i = 2; i <=sqrt(x); i++)
	{
		j = x % i;
		if (j!= 0)
		{
			m=SUM(i);
			return m;
		}
	}
	
}


int main()
{
	int a = 5;
	int b = 0;
	//scanf_s("%d", &a);
	b = IsPrime(a);
	printf("sum=%d\n", b);
	return 0;

}