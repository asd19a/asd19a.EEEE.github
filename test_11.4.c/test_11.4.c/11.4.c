#include <stdio.h>
#include <assert.h>

int my_strlen(const char *str)
{
	assert(str != NULL);
	int n = 0;
	while (*str++!='\0')
	{
		n++;
	}
	return n;

}

int main()
{
	char arr[5] = "abcde";
	int len = 0;
	len=my_strlen(arr);
	printf("len=%d\n", len);
	return 0;
}