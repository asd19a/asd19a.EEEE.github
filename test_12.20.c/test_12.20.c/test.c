//#define _CRT_SECURE_NO_WARNINGS
//
//
//#include "search.h"
//
//void menu1()
//{
//	printf("********************************************************\n");
//	printf("**********   1.十进制          2.二进制       **********\n");
//	printf("**********   3.八进制          4.十六进制     **********\n");
//	printf("****************   0.exit/return  **********************\n");
//	printf("********************************************************\n");
//}
//void menu2()
//{
//	int input2 = 0;
//	menu1();
//	do
//	{
//		printf("请选择要转换的进制:>");
//		scanf("%d", &input2);
//		switch (input2)
//		{
//		case 1:
//			break;
//		case 2:
//			break;
//		case 3:
//			break;
//		case 4:
//			break;
//		case 0:
//			printf("exit/return\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input2);
//}
//int main()
//{
//	int input1 = 0,input2=0;
//	printf("你好，这是一个进制转换器\n");
//	menu1();
//	do
//	{
//		printf("请选择原进制:>");
//		scanf("%d", &input1);
//		switch (input1)
//		{
//		case 1:
//			menu2();
//			break;
//		case 2:
//			break;
//		case 3:
//			break;
//		case 4:
//			break;
//		case 0:
//			printf("exit/return\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input1);
//	
//	return 0;
//}