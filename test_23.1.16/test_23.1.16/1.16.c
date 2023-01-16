#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <string.h>




//int main()
//{
//	FILE* pf = fopen("test.txt", "w");   //以只写的方式打开文件
//	if (pf == NULL)   //判断文件是否打开成功
//	{
//		perror("fopen");  //若打开失败，则显示错误信息
//		return 0;
//	}
//	//写文件
//	//.......
//	//关闭文件
//	fclose(pf);   
//	pf = NULL;  //将文件指针置空，防止野指针的使用
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
//	FILE* pf = fopen("test.txt", "w");   //以只写的方式打开文件
//	if (pf == NULL)  //判断是否打开成功
//	{
//		perror("fopen");
//		return 0;
//	}
//	fputs(str, pf);  //向文件中写入 str
//	fclose(pf);
//	pf = NULL;
//	FILE* pfread = fopen("test.txt", "r");  //以只读的方式打开文件
//	if (pfread == NULL)  //判断时候打开成功
//	{
//		perror("fopen");
//		return 0;
//	}
//	char tmp[20] = { 0 };
//	printf("%s\n", fgets(tmp, 20, pfread));   //将读取到的字符串存入 tmp 中，并打印
//	fclose(pfread);  //关闭文件
//	pfread = NULL;
//	return 0;
//
//}


int main()
{
	int a = 10000;
	FILE* pfwrite = fopen("test.bin", "wb");  //以二进制写的方式打开文件
	if (pfwrite == NULL)
	{
		perror("fopen");
		return 0;
	}
	fwrite(&a, sizeof(int), 1, pfwrite);  //写入文件
	fclose(pfwrite);
	pfwrite = NULL;
	FILE* pfread = fopen("test.bin", "rb");   //以二进制读的方式打开文件
	if (pfread == NULL)
	{
		perror("fopen");
		return 0;
	}
	int b = 0;
	fread(&b, sizeof(int), 1, pfread);  //读取文件
	printf("%d\n", b);
	fclose(pfread);
	pfread = NULL;
	return 0;
}

