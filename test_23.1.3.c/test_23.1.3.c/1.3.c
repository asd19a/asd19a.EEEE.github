#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include <math.h>
#include <assert.h>


void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		//*((char*)dest)++ = *((char*)src)++;
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}

void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	if (dest > src)
	{
		//�Ӻ���ǰ
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	else if (dest < src)
	{
		//��ǰ����
		while (num--)
		{
			//*((char*)dest)++ = *((char*)src)++;
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	return ret;
}

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	int i = 0;
//	//my_memcpy(arr1, arr1+2, 20);
//	/*my_memmove(arr1+2, arr1, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}*/
//	int ret=memcmp(arr1, arr2, 4);
//	if (ret > 0)
//		printf("arr1>arr2\n");
//	else if (ret < 0)
//		printf("arr1<arr2\n");
//	else
//		printf("arr1=arr2\n");
//	return 0;
//}



//int main()
//{
//	char buffer1[] = "DWgaOtP12df0";
//	char buffer2[] = "DWGAOTP12DF0";
//
//	int n;
//
//	n = memcmp(buffer1, buffer2, sizeof(buffer1));
//
//	if (n > 0) printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
//	else if (n < 0) printf("'%s' is less than '%s'.\n", buffer1, buffer2);
//	else printf("'%s' is the same as '%s'.\n", buffer1, buffer2);
//
//	return 0;
//}

//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//
//
//
//Aѡ��˵��B�ڶ����ҵ�����
//
//Bѡ��˵���ҵڶ���E���ģ�
//
//Cѡ��˵���ҵ�һ��D�ڶ���
//
//Dѡ��˵��C����ҵ�����
//
//Eѡ��˵���ҵ��ģ�A��һ��
//
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�

//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3)) == 1 &&
//							((b == 2) + (e == 4)) == 1 &&
//							((c == 1) + (d == 2)) == 1 &&
//							((c == 5) + (d == 3)) == 1 &&
//							((e == 4) + (a == 1)) == 1)
//							if (a * b * c * d * e == 120)
//								printf("A=%d  B=%d  C=%d  D=%d  E=%d\n", a, b, c, d, e);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//

//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

//int main()
//{
//	char a, b, c, d;
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if (((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')) == 3)
//			printf("������%c\n", killer);
//	}
//	return 0;
//}

//int combination_number(int m, int n)
//{
//	int ret1 = 1, ret2 = 1;
//	int i = 0, j = 0;
//	for (i = m, j = 0; j < n; j++, i--)
//	{
//		ret1 = ret1 * i;
//	}
//	for (i = 1, j = 0; j < n; j++, i++)
//	{
//		ret2 = ret2 * i;
//	}
//	return ret1 / ret2;
//}
//
//int main()
//{
//	int i = 0, j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i <= n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			int ret = combination_number(i, j);
//			printf("%d  ", ret);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}

int main()
{
    int n = 0;
    scanf("%d", &n);
    char password[20][100];
    int i = 0, j = 0;
    for (i = 0; i < n; i++)
    {
        gets(password[i]);

    }
    int count1 = 0, count2 = 0, count3 = 0;
    int flag = 0;
    for (i = 0; i < n; i++)
    {
        if (strlen(password[i]) < 8)
        {
            printf("NO\n");
            flag = 1;
            goto  end;
        }
        count1 = 0;
        count2 = 0;
        count3 = 0;
        flag = 0;
        for (j = 0; j < strlen(password[i]); j++)
        {
            if ((password[i][j] < 'A' && password[i][j]>'Z') ||( password[i][j] < 'a' && password[i][j]>'z' )|| (password[i][j] < '0' && password[i][j]>'9'))
            {
                printf("NO\n");
                flag = 1;
                break;
            }
            if (password[i][0] >= '0' && password[i][0] <= '9')
            {
                printf("No\n");
                flag = 1;
                break;
            }
            if (password[i][j] >= 'a' && password[i][j] <= 'z')
                count1 = 1;
            else if (password[i][j] >= 'A' && password[i][j] <= 'Z')
                count2 = 1;
            else if (password[i][j] >= '0' && password[i][j] <= '9')
                count3 = 1;
            if ((count1 + count2 + count3) < 2)
            {
                printf("NO\n");
                flag = 1;
                break;
            }


        }
    end:
        ;
    }
    if (flag == 0)
    {
        printf("YES\n");
    }
    return 0;
}