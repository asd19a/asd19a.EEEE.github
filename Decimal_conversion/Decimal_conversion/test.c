#define _CRT_SECURE_NO_WARNINGS



#include "Decimal_conversion.h"


int main()
{
	printf("��ã�����һ������ת����\n");
	int input1=menu1();
	if (input1 == 0)
	{
		goto end;
	}
	int input2=menu2();
	while (input2 == 0)
	{
		input1=menu1();
	}
	char ret[100];
	char*p=change(ret, input1, input2);
	for (int i = 0; i < 32; i++)
	{
		printf("%c", *(p + i));
	}
end:
	printf("лл���ʹ��\n");
	return 0;
}