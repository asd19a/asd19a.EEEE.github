#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <math.h>

//�����ַ���

//void reverse(char* str1, char* str2)
//{
//	while (str1 < str2)
//	{
//		char tmp = *str1;
//		*str1 = *str2;
//		*str2 = tmp;
//		str1++;
//		str2--;
//	}
//}
//
//void str_left_rotate(char* str, int k)
//{
//	int len = strlen(str);
//	reverse(str, str + k - 1);   //��תǰ�벿��
//	reverse(str + k, str + len - 1);  //��ת��벿��
//	reverse(str, str + len - 1);  //��ת����
//}
//
//int main()
//{
//	char arr1[20] = "ABCDEF";
//	int k = 0;
//	printf("��������Ҫ��ת���ַ�����:>");
//	scanf("%d", &k);
//	str_left_rotate(arr1, k);
//	puts(arr1);
//	return 0;
//}

//�ж��Ƿ�����ת�ַ���
int is_string_left_rotate(char arr1[], char arr2[])
{
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)
		return 0;
	else
	{
		strncat(arr1, arr1, len1);
		char* p = strstr(arr1, arr2);
		if (p == NULL)
			return 0;
		else
			return 1;
	}

}
int main()
{
	char arr1[20] = "ABCDEF";
	char arr2[20] = "BCD";
	gets(arr2);
	int ret=is_string_left_rotate(arr1, arr2);
	if (ret == 1)
		printf("��\n");
	else
		printf("����\n");
	return 0;
}