#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <string.h>




//int main()
//{
//	FILE* pf = fopen("test.txt", "w");   //��ֻд�ķ�ʽ���ļ�
//	if (pf == NULL)   //�ж��ļ��Ƿ�򿪳ɹ�
//	{
//		perror("fopen");  //����ʧ�ܣ�����ʾ������Ϣ
//		return 0;
//	}
//	//д�ļ�
//	//.......
//	//�ر��ļ�
//	fclose(pf);   
//	pf = NULL;  //���ļ�ָ���ÿգ���ֹҰָ���ʹ��
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	char ch = 0;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//	fclose(pf);
//	pf = NULL;
//	FILE *pfread = fopen("test.txt", "r");
//	if (pfread == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	while (ch!= EOF)
//	{
//		ch = fgetc(pfread);
//		printf("%c", ch);
//	}
//	fclose(pfread);
//	pfread = NULL;
//	return 0;
//}


//int main()
//{
//	char str[] = "abcdefg";
//	FILE* pf = fopen("test.txt", "w");   //��ֻд�ķ�ʽ���ļ�
//	if (pf == NULL)  //�ж��Ƿ�򿪳ɹ�
//	{
//		perror("fopen");
//		return 0;
//	}
//	fputs(str, pf);  //���ļ���д�� str
//	fclose(pf);
//	pf = NULL;
//	FILE* pfread = fopen("test.txt", "r");  //��ֻ���ķ�ʽ���ļ�
//	if (pfread == NULL)  //�ж�ʱ��򿪳ɹ�
//	{
//		perror("fopen");
//		return 0;
//	}
//	char tmp[20] = { 0 };
//	printf("%s\n", fgets(tmp, 20, pfread));   //����ȡ�����ַ������� tmp �У�����ӡ
//	fclose(pfread);  //�ر��ļ�
//	pfread = NULL;
//	return 0;
//
//}


int main()
{
	int a = 10000;
	FILE* pfwrite = fopen("test.bin", "wb");  //�Զ�����д�ķ�ʽ���ļ�
	if (pfwrite == NULL)
	{
		perror("fopen");
		return 0;
	}
	fwrite(&a, sizeof(int), 1, pfwrite);  //д���ļ�
	fclose(pfwrite);
	pfwrite = NULL;
	FILE* pfread = fopen("test.bin", "rb");   //�Զ����ƶ��ķ�ʽ���ļ�
	if (pfread == NULL)
	{
		perror("fopen");
		return 0;
	}
	int b = 0;
	fread(&b, sizeof(int), 1, pfread);  //��ȡ�ļ�
	printf("%d\n", b);
	fclose(pfread);
	pfread = NULL;
	return 0;
}

