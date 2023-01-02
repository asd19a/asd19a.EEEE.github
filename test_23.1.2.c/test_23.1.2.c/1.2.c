#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <math.h>
#include <string.h>
#include <assert.h>

//unsigned my_strlen(const char* str)
//{
//	assert(str);
//	unsigned count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//
//char* my_strcpy(char *dest,char *sour)
//{
//	char* p = dest;
//	while (*dest++ = *sour++)
//	{
//		;
//	}
//	return p;
//}

//char* my_strcat(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	char* p = str1;
//	while (*str1++)
//	{
//		;
//	}
//	while (*str2)
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	return p;
//}

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while ( * str1++ == *str2++)
	{
		if (*str1 == '\0' && *str2 == '\0')
		return 0;
		if (*str1 == '\0' || *str2 == '\0')
			break;
	}
	
	return *str1 - *str2;
	
}

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* cp = str1;
	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && ( * s1++ == *s2++ ))  //·ÀÖ¹¿Õ×Ö·û´®
		{
			;
		}
		if (*s2 == '\0')
		{
			return cp;
		}
		
		cp++;
	}
	return NULL;

}

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	int len2 = strlen(str2);
	const char* cp = str1;
	while (*cp)
	{
		int ret = strncmp(cp, str2, len2);
		if (ret == 0)
			return cp;
		cp++;
		if (strlen(cp) < len2)
			return NULL;
	}
//
//}
//int main()
//{
//	char arr[30] = "asdfghjkl";
//	char arr1[20];
//	char arr2[7] = "zxcvbn";
//	//unsigned len = my_strlen(arr);
//	//printf("%u\n", len);
//	//char* p = my_strcpy(arr1, arr);
//	//puts(arr1);
//	//char* p = my_strcat(arr, arr2);
//	//puts(arr);
//	/*strcat(arr, arr2);
//	puts(arr);*/
//	/*int ret = my_strcmp("abcd", "abcde");
//	if (ret > 0)
//		printf(">\n");
//	else if (ret < 0)
//		printf("<\n");
//	else
//		printf("=\n");*/
//	char* p = my_strstr(arr, "");
//	if (p == NULL)
//		printf("NULL\n");
//	else
//		printf("%s\n", p);
//	return 0;
//}



//int main()
//{
//	printf("%s\n", strerror(5));
//	printf("%s\n", strerror(6));
//	printf("%s\n", strerror(7));
//	printf("%s\n", strerror(8));
//	printf("%s\n", strerror(9));
//	printf("%s\n", strerror(0));
//	return 0;
//}

char* my_strcat(char* str1, char* str2)
{
	assert(str1 && str2);
	char* p = str1;
	while (*str1!='\0')
	{
		str1++;
	}
	strcpy(str1, str2);
	return p;
}

int main()
{
	char arr[20] = "abc";
	char *ret=my_strcat(arr, "def");
	puts(arr);
	printf("%s\n", ret);
	return 0;
}

