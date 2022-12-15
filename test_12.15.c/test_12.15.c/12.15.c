#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <string.h>


//int main()
//{
//	/*char ch1[4] = { '\0','a','b','c' };
//	char ch2[5] = "abc";
//	int len1 = strlen(ch1);
//	int len2 = strlen(ch2);
//	printf("len1=%d\n", len1);
//	printf("len2=%d\n", len2);*/
//	printf("%d\n", strlen("asd\\018"));
//	return 0;
//}

//struct studens
//{
//	char card[20];
//	char name[20];
//	int grade[3];
//};
//
//int main()
//{
//	struct students s = {};
//}

#define n 2
#define m 3

//double average(int(*p)[])
//{
//	int i = 0;
//	double sum = 0, ave = 0;
//	for (i = 0; i < m; i++)
//	{
//		sum = sum + (*p)[i];
//	}
//	ave = sum / (double)n;
//	return ave;
//}
//


//int main()
//{
//	char card[n][10];
//	char name[n][10];
//	int grade[n][m];
//	double Ave[m];
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("请输入第%d位学生的学号:>", i + 1);
//		scanf("%s", &card[i]);
//		getchar();
//		printf("请输入第%d位学生的姓名:>", i + 1);
//		scanf("%s", &name[i]);
//		getchar();
//		printf("请输入第%d位学生数学,外语,程序设计基础的成绩:>", i + 1);
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &grade[i][j]);
//		}
//		getchar();
//	}

	/*for (j = 0; j < m; j++)
	{
		for (i = 0; i < n; i++)
		{
			Ave[j] = average(&grade[i]);
		}
	}
	printf("数学总平均分:> %.2lf\n", Ave[0]);
	printf("外语总平均分:> %.2lf\n", Ave[1]);
	printf("程序设计基础总平均分:> %.2lf\n", Ave[2]);*/
	/*double sum = 0, ave = 0;
	for (j =0; j < m; j++)
	{
		sum = 0;
		for (i = 0; i < n; i++)
		{
			sum = sum + grade[i][j];
		}
		Ave[j] = sum / (double)n;
	}
	printf("数学总平均分:> %.2lf\n", Ave[0]);
	printf("外语总平均分:> %.2lf\n", Ave[1]);
	printf("程序设计基础总平均分:> %.2lf\n", Ave[2]);*/
	/*int sum = 0, k = 0;
	int sum[n] = { 0 };
	for (i = 0; i < n; i++)
	{
		sum = 0;
		for (j = 0; j < m; j++)
		{
			sum = sum + grade[i][j];
		}
		sum[i] = sum;
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (sum[j] > sum[i])
			{
				k = j;
			}
		}
	}
	printf("最高分:>%d\n", sum[k]);
	printf("学号:>%s\n", card[k]);
	printf("姓名:>%s\n", name[k]);
	printf("数学:>%d\t外语:>%d\t程序设计基础:>%d\n", grade[k][0], grade[k][1], grade[k][2]);
	printf("平均分:>%.2lf\n", (sum[k] / (double)m));
	return 0;
	
}*/




//int main()
//{
//	int arr[3] = { 1,2,3 };
//	int i = 0;
//	printf("%.2lf\n", (arr[1] / (double)n));
//	return 0;
//}




//int main()
//{
//	int a = 1;
//	int b = 2;
//	int ret = a+++ + b;
//	printf("ret=%d\n", ret);
//	return 0;
//}



//int a;
//int main()
//{
//	printf("a=%d\n", a);
//	return 0;;
//}

//int main()
//{
//	{
//		int a = 10;
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//}


//int main()
//{
//	extern int a;
//	printf("a=%d\n", a);
//	return 0;
//}

//#define a 3
//int main()
//{
//	printf("a=%d\n", a);
//	return 0;
//}


enum gender
{
	WOMAN,
	MAN
};
//int main()
//{
//	printf("%d\n", WOMAN);
//	printf("%d\n", MAN);
//	return 0;
//}




void reverse(char* str)
{
	int len = 0;
	char* ptem = str;
	while ((*ptem++) != '\0')
	{
		len++;
	}
	int left = 0;
	int right = len - 1;
	char tmp = 0;
	while (left < right)
	{
		tmp = *(str + left);
		*(str + left) = *(str + right);
		*(str + right) = tmp;
		left++;
		right--;
	}

}

//倒置字符串
int main()
{
	char arr[100];
	gets(arr);
	int len = strlen(arr);
	int i = 0;
	reverse(arr);
	//puts(arr);
	/*char arr1[20];
	char arr2[20];
	char arr3[20];
	int a = 0, b = 0, c = 0;
	for (i = 0; i < len; i++)
	{
		arr1[a] = arr[i];
		if (arr[i] == ' ')
		{
			arr1[a + 1] = '\0';
			break;
		}
		a++;
	}
	for (; i < len; i++)
	{
		arr2[b] = arr[i];
		if (arr[i] == ' ')
		{
			arr2[b + 1] = '\0 ';
			break;
		}
		b++;
	}
	for (; i < len; i++)
	{
		arr3[c] = arr[i];
		if (arr[i] == ' ')
		{
			arr2[b + 1] = '\0 ';
			break;
		}
		c++;
	}*/
	
	while (1)
	{
		while (arr[i] == ' ')
		{
			i++;
			if (i == 15)
				goto end;
		}
		int left = i;
		while (arr[i] != ' ')
		{
			i++;
			if (i == 15)
				goto end;
		}
		int right = i-1;
		while (left < right)
		{
			char tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}
		
		
	}
end:

	puts(arr);
	return 0;

}
