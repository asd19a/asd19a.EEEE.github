#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include <math.h>
#include <assert.h>


void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		//*((char*)dest)++ = *((char*)src)++;
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}

void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	if (dest > src)
	{
		//从后往前
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	else if (dest < src)
	{
		//从前往后
		while (num--)
		{
			//*((char*)dest)++ = *((char*)src)++;
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	return ret;
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	int i = 0;
	//my_memcpy(arr1, arr1+2, 20);
	/*my_memmove(arr1+2, arr1, 20);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}*/
	int ret=memcmp(arr1, arr2, 4);
	if (ret > 0)
		printf("arr1>arr2\n");
	else if (ret < 0)
		printf("arr1<arr2\n");
	else
		printf("arr1=arr2\n");
	return 0;
}