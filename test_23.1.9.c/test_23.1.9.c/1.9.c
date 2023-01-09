#define _CRT_SECURE_NO_WARNINGS


#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


//void save(long long int x, long long int y)
//{
//	int arr[100] = { 0 };
//	int i = 99;
//	int ret1 = 0, ret2 = 0;
//	long long int tmp1 = x, tmp2 = y;
//	int flag1 = 0, flag2 = 0;
//	while (tmp1!=0||tmp2!=0)
//	{
//		ret1 = tmp1 % 10;
//		ret2 = tmp2 % 10;
//		flag1 = (ret1 + ret2) / 10;
//		if (flag1== 1)
//		{
//			arr[i] = (ret1 + ret2) % 10;
//			
//			
//		}
//		else
//		{
//			
//		}
//		i--;
//		tmp1 = tmp1 / 10;
//		tmp2 = tmp2 / 10;
//	}
//	for (i=i+1; i < 100; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//
//int main()
//{
//	long long int a = 0, b = 0;
//	scanf("%lld%lld", &a, &b);
//	save(a, b);
//	return 0;
//	
//}


//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
//    int i = 0, j = 0;
//    
//    int count = 0;
//    for (i = 0; i < nums1Size; i++)
//    {
//        for (j = 0; j < nums2Size; j++)
//        {
//            if (nums1[i] == nums2[j])
//            {
//                returnSize[count] = nums1[i];
//                count++;
//
//            }
//        }
//    }
//    return  returnSize + count-1;
//
//}
//
//int main()
//{
//    int nums1Size = 0, nums2Size = 0;
//    scanf("%d%d", &nums1Size, &nums2Size);
//    getchar();
//    int* nums1 = (int*)calloc(nums1Size, sizeof(int));
//    int* nums2 = (int*)calloc(nums2Size, sizeof(int));
//    if (nums1 == NULL || nums2 == NULL)
//    {
//        perror("main");
//        return 0;
//    }
//    int i = 0;
//    printf("nums1赋值:>");
//    for (i = 0; i < nums1Size; i++)
//    {
//        scanf("%d", &nums1[i]);
//    }
//    printf("nums2赋值:>");
//    for (i = 0; i < nums2Size; i++)
//    {
//        scanf("%d", &nums2[i]);
//    }
//    int returnSize[100] = { 0 };
//    int *ret=intersection(nums1, nums1Size, nums2, nums2Size, returnSize);
//    printf("交集:>");
//    while (returnSize != ret)
//    {
//        printf("%d,", *ret);
//        ret--;
//    }
//    printf("%d\n", returnSize[0]);
//    free(nums1);
//    nums1 = NULL;
//    free(nums2);
//    nums2 = NULL;
//
//    return 0;
//
//}


//int my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	char* cp = str1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1++ == *s2++)
//		{
//			if (*s2 == '\0')
//			{
//				return 1;
//			}
//		}
//		
//		cp++;
//	}
//	return 0;
//
//}
//
//int main()
//{
//	char arr1[] = "abbcdef";
//	char arr2[] = "bbc";
//	int ret = my_strstr(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("arr2 属于 arr1\n");
//	}
//	else
//		printf("arr2 不属于 arr1\n");
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("1.9A.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 128; i++)
//	{
//		fputc(i, pf);
//	}
//	fclose(pf);
//	pf = NULL;
//	pf = fopen("1.9A.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("pf");
//		return 0;
//	}
//	FILE* pfcopy = fopen("1.9B.txt", "wb");
//	if (pfcopy == NULL)
//	{
//		fclose(pf);
//		pf = NULL;
//		perror("pfcopy");
//	}
//	char ch = 0;
//	while ((ch = fgetc(pf))!= EOF)
//	{
//		fputc(ch, pfcopy);
//		//ch = fgetc(pf);
//	}
//	fclose(pf);
//	pf = NULL;
//	fclose(pfcopy);
//	pfcopy = NULL;
//	return 0;
//}


//#define MAX 1000
//
//int a[MAX], b[MAX], c[MAX];
//char s1[MAX], s2[MAX];

//enum suuji
//{
//	EXIT,
//	ADD,
//	SUB,
//	MAJ,
//	DIV
//};
//void menu()
//{
//	printf("**************************************************************************\n");
//	printf("****************        1.ADD         2.SUB             ******************\n");
//	printf("****************        3.MAJ         4.DIV             ******************\n");
//	printf("****************              0.EXIT                    ******************\n");
//	printf("**************************************************************************\n");
//}
//int setmax(int x, int y)
//{
//	return x > y ? x : y;
//}
//void Initarr(char* s1, char* s2)
//{
//	int i = 0;
//	for (i = 0; i < MAX; i++)
//	{
//		*(s1 + i) = 0;
//		*(s2 + i) = 0;
//		
//	}
//}

//void add(char* str1, char* str2)
//{
//	int i = 0,carry=0;
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	int len = max(len1, len2);
//	for (i = 0; i < len1; i++)
//	{
//		a[i] = str1[len1 - i - 1] - '0';
//	}
//	for (i = 0; i < len2; i++)
//	{
//		b[i] = str2[len2 - i - 1] - '0';
//	}
//	for (i = 0; i < len; i++)
//	{
//		c[i] = (a[i] + b[i] + carry) % 10;
//		carry = (a[i] + b[i] + carry) / 10;
//	}
//	printf("%s + %s =", str1, str2);
//	if (carry != 0)
//	{
//		c[len++] = 1;
//	}
//	for (i = len - 1; i >= 0; i--)
//	{
//		printf("%d", c[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int input = 0;
//	printf("这是一个大数计算器\n");
//	
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		getchar();
//		Initarr(s1, s2);
//		printf("请输入两个操作数:>\n");
//		printf("第一个操作数:>");
//		gets(s1);
//		printf("第二个操作数:>");
//		gets(s2);
//		switch (input)
//		{
//		case ADD:
//			add(a, b);
//			break;
//		case SUB:
//			break;
//		case MAJ:
//			break;
//		case DIV:
//			break;
//		case EXIT:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

#define max 1000
char* bigarr(char* arr1, int len1, char* arr2, int len2)
{
	int i = 0, j = 0, k = 0, tmp = 0;
	int maxlen = 0;
	maxlen = len1 > len2 ? len1 : len2;
	maxlen++;
	for (i = 0; i < len1; i++)
	{
		arr1[i] = arr1[i] - '0';
	}
	for (i = 0; i < len2; i++)
	{
		arr2[i] = arr2[i] - '0';
	}
	char* result = NULL;
	char final[max] = { 0 };
	result = (char*)calloc(maxlen, sizeof(char));
	if (result == NULL)
	{
		perror("bigarr");
		return NULL;
	}
	for (i = 0, j = 0; i < len1 && j < len2; i++, j++)
	{
		result[i] = arr1[len1 - i - 1] + arr2[len2 - i - 1];
	}
	if (len1 > len2)
	{
		for (i = len2; i < len1; i++)
		{
			result[i] = arr1[len1-i-1];
		}
	}
	if (len2 > len1)
	{
		for (i = len1; i < len2; i++)
		{
			result[i] = arr2[len2 - i - 1];
		}
	}
	for (k = 0; k < maxlen; k++)
	{
		if (result[k] > 9)
		{
			tmp = result[k] / 10;
			result[k] = result[k] % 10;
			result[k + 1] += tmp;
		}
	}
	j = 0;
	if (result[maxlen - 1] != 0)
	{
		final[j] = result[maxlen - 1] + '0';
		j++;
	}
	for (i = maxlen - 2; i >= 0; i--)
	{
		final[j++] = result[i] + '0';
	}
	result = final;
	free(result);
	return result;
}

int main()
{
	char* result = NULL;
	char arr1[max] = { 0 };
	char arr2[max] = { 0 };
	scanf("%s", arr1);
	//getchar();
	scanf("%s", arr2);
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	result = bigarr(arr1, len1, arr2, len2);
	puts(result);
	return 0;
}