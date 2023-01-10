#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <time.h>


//int main()
//{
//	int n = 0;
//	int i = 0, j = 0, m = 0;
//	scanf("%d", &n);
//	int* arr = (int*)calloc(n, sizeof(int));
//	if (arr == NULL)
//	{
//		perror("calloc");
//		return 0;
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("请选择删去几个数:>");
//	scanf("%d", &m);
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//
//		}
//	}
//
//}

//输出最先出现的最长回文串
//int hw(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	while (str1 < str2)
//	{
//		if (*str1 != *str2)
//		{
//			return 0;
//		}
//		str1++;
//		str2--;
//	}
//	return 1;
//}
//int my_strlen(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	return str2 - str1;
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int i = 0, j = 0;
//	int ret = 0, len = 0;
//	int save[100][3] = { 0 };
//	int count = 0;
//	for (i = 0; i < strlen(arr)-1; i++)
//	{
//		for (j = i + 1; j < strlen(arr); j++)
//		{
//			ret = hw(arr + i, arr + j);
//			if (ret == 1)
//			{
//				save[count][0] = my_strlen(arr + i, arr + j);
//				save[count][1] = i;
//				save[count][2] = j;
//				count++;
//			}
//		}
//	}
//	int max = save[0][0], flag = 0;
//	for (i = 0; i < count; i++)
//	{
//		if (save[i][0] > max)
//		{
//			max = save[i][0];
//			flag = i;
//		}
//	}
//	for (i=save[flag][1];i<save[flag][2]+1; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	char ret = 0;
//	while (ch != '\n')
//	{
//		//ret = islower(ch);
//		//ret = isspace(ch);
//		ch = getchar();
//		ret = toupper(ch);
//		printf("%c", ret);
//	}
//	return 0;
//}

//typedef struct card
//{
//	char suit[4][10];
//	char face[13];
//}card;
//
//int main()
//{
//	card c = { .suit[0] = "黑桃",.suit[1] = "红桃",.suit[2] = "草花",.suit[3] = "方块",{'A','2','3','4','5','6','7','8','9','10','J','Q','K'} };
//	int ret1 = 0, ret2 = 0;
//	int i = 0;
//	srand((unsigned int)time(NULL));
//	int input = 1;
//	int n = 0;
//
//	printf("请输入发牌数:>");
//	scanf("%d", &n);
//	while (input)
//	{
//		printf("是否需要发牌(1继续，0结束):>");
//		scanf("%d", &input);
//		if (input == 0)
//			break;
//		else
//		{
//			for (i = 0; i < n; i++)
//			{
//				ret1 = rand() % 4;
//				ret2 = rand() % 13;
//				printf("第%d张牌:\t\t%s\t%c\n", i+1, c.suit[ret1], c.face[ret2]);
//			}
//		}
//	}
//	return 0;
//}

//unsigned my_strlen(const char* str)
//{
//	assert(str);
//	unsigned int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* start = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return start;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0' && *str2 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}

//char *my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* start = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*src)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	return start;
//}
//int main()
//{
//	char arr1[20] = "asd";
//	char arr2[20] = "zxc";
//	char* arr = my_strcat(arr1, arr2);
//	puts(arr);
//	/*int ret = my_strcmp(arr1, arr2);
//	if (ret > 0)
//		printf("arr1 > arr2\n");
//	else if (ret < 0)
//		printf("arr1 < arr2\n");
//	else
//		printf("arr1 = arr2\n");*/
//	/*char* ret = my_strcpy(arr2, arr1);
//	puts(ret);*/
//	//unsigned int len = my_strlen(arr);
//	//printf("len=%u\n", len);
//	return 0;
//}

//char* my_strstr(const char* dest, const char* src)
//{
//	assert(dest && src);
//	const char* cp = dest;
//	int len = strlen(src);
//	while (*cp)
//	{
//		int ret = strncmp(cp, src, len);
//		if (ret == 0)
//		{
//			return cp;
//		}
//		if (strlen(cp) < len)
//		{
//			return NULL;
//		}
//		cp++;
//	}
//}
//
//int main()
//{
//	char arr1[20] = "abbbcdef";
//	char arr2[20] = "bbc";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret != NULL)
//		puts(ret);
//	else
//		printf("NO\n");
//	return 0;
//}

//void *my_memcpy(void* dest, void* src, int num)
//{
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		(char*)dest = (char*)dest + 1;
//		(char*)src = (char*)src + 1;
//	}
//	return dest;
//}

void* my_memmove(void* dest, void* src, int num)
{
	assert(dest && src);
	if (dest > src)
	{
		//从后往前
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	else
	{
		//从前往后
		while (num--)
		{
			*(char*)dest = *(char*)src;
			(char*)dest = (char*)dest + 1;
			(char*)src = (char*)src + 1;
		}
	}
	return dest;
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	/*my_memcpy(arr2, arr1, 20);*/
	my_memmove(arr1 + 2, arr1, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	/*for (i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}*/
	return 0;

}