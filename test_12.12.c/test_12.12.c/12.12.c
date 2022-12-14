//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>


//int main()
//{
//	char arr[150][10];
//	char tmp[10];
//	int i = 0, j = 0, n = 0;
//	scanf_s("%d", &n);
//	getchar();
//	for (i = 0; i < n; i++)
//	{
//		//gets(arr[i]);
//		//getchar();
//		scanf_s("%s", arr[i],10);
//		//getchar();
//
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (strcmp(arr[i], arr[j]) > 0)
//			{
//				strcpy_s(tmp, 10,arr[i]);
//				strcpy_s(arr[i],10,arr[j]);
//				strcpy_s(arr[j],10,tmp);
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		puts(arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char arr[10][5];
//	int i = 0, j = 0, n = 0;
//	scanf_s("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%s", arr[i], 5);
//	}
//	for (i = 0; i < n; i++)
//	{
//		puts(arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	char arr1[6] = "asdfg";
//	char arr2[6] = "zxcvb";
//	strcpy_s(arr1,6,arr2);
//	puts(arr1);
//	return 0;
//}

char* my_strcpy(char* str1, char* str2)
{
	char* ptmp = str1;
	int i = 0;
	while (*(str2 + i) != '\0')
	{
		*(str1 + i) = *(str2 + i);
		i++;
	}
	*(str1 + i + 1) = '\0';
	return ptmp;
}

//int main()
//{
	/*char arr1[20] = "asdfg";
	char arr2[20] = "zxcvb";
	char*ptmp=my_strcpy(arr1, arr2);*/
	/*int i = 0;
	for (i = 0; i < 6; i++)
	{
		printf("%c", *(ptmp + i));
	}*/
	//puts(arr1);
//	return 0;
//}

//void mystrcpy(char* str1, char* str2)
//{
//	/*while ((*str1++ = *str2++) != '\0')
//	{
//		;
//	}*/
//	int i = 0;
//	while (*(str2 + i) != '\0')
//	{
//		*(str1 + i) = *(str2 + i);
//		i++;
//	}
//}
//
//int main()
//{
//	char arr1[20] = "asdfg";
//	char arr2[20] = "zxcvb";
//	mystrcpy(arr1, arr2);
//	puts(arr1);
//	return 0;
//}

//main() { char* a = "main(){char*a=%c%s%c;printf(a,34,a,34);}"; printf(a, 34, a, 34); }

//unsigned int mystrlen(char* p)
//{
//	unsigned int len = 0;
//	for (; *p != '\0'; p++)
//	{
//		len++;
//	}
//	return len;
//}

//unsigned mystrlen(char a[])
//{
//	char* p = a;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - a;
//}


//int mystrcmp(char* p1, char* p2)
//{
//	for (; *p1 == *p2; p1++, p2++)
//	{
//		if (*p1 == '\0')
//			return -1;
//		
//	}
//	return 1;
//}
//int main()
//{
//	char arr1[20] = "asdfg";
//	char arr2[20] = "asdf";
//	//unsigned int len = mystrlen(arr);
//	//printf("len=%u\n", len);
//	int ret = mystrcmp(arr1, arr2);
//	if (ret > 0)
//		printf("arr1>arr2");
//	else if (ret < 0)
//		printf("arr1<arr2");
//	else
//		printf("arr1=arr2");
//	return 0;
//}


//int main()
//{
//	char arr[20];
//	printf("ÇëÊäÈëÃÜÂë:>");
//	gets_s(arr, 20);
//	char  str[20] = "qwertyu";
//	if (strcmp(arr, str) > 0)
//		printf("ÃÜÂë´íÎó,user input>password\n");
//	else if (strcmp(arr, str) < 0)
//		printf("ÃÜÂë´íÎó,user input<password\n");
//	else
//		printf("ÃÜÂëÕýÈ·\n");
//	return 0;
//}

//int main()
//{
//	char arr[20];
//	int count = 0, i = 0;
//	gets_s(arr, 20);
//	char* p = arr;
//	while (i < strlen(arr))
//	{
//		while (*(p + i) == ' ')
//		{
//			i++;
//			if (i == strlen(arr))
//				goto end;
//		}
//		count++;
//		while (*(p + i) != ' ')
//		{
//			i++;
//			if (i == strlen(arr))
//				goto end;
//		}
//		//count++;
//		while (*(p + i) == ' ')
//		{
//			i++;
//			if (i == strlen(arr))
//				goto end;
//		}
//		count++;
//		while (*(p + i) != ' ')
//		{
//			i++;
//			if (i == strlen(arr))
//				goto end;
//		}
//		//count++;
//
//	}
//	end:
//	printf("count=%d\n", count);
//	return 0;
//	
//}

//void delet(char* str,int len)
//{
//	int i = 0,j=0;
//	while (*(str + i) != '\0')
//	{
//		for (j = i+1; j < len; j++)
//		{
//			if (*(str + j) == *(str + i))
//			{
//				*(str + j) = '1';
//			}
//		}
//		i++;
//	}
//}
//
//int main()
//{
//	char arr[20] = "ABCABDFAHBD";
//	int len = strlen(arr);
//	delet(arr,len);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] != '1')
//			printf("%c", arr[i]);
//	}
//	return 0;
//}
int main()
{

}




