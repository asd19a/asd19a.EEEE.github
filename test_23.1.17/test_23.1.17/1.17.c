#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <String.h>
#include <stdlib.h>


//int arrayStringsAreEqual(char *word1[10],char *word2[10])
//{
//	
//	int i = 0, j = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (*(*(word1+i)+j)!=*(*(word2+i)+j))
//				return 0;
//		}
//	}
//	return 1;
//}
//
//
//int main()
//{
//	char word1[2][10] = { "ab","c" };
//	char word2[2][10] = { "a","cd" };
//	int ret = arrayStringsAreEqual(word1, word2);
//	if (ret == 1)
//		printf("true\n");
//	else
//		printf("false\n");
//	return 0;
//
//}


//bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size)
//{
//	int i = 0, j = 0;
//	int p1 = 0, p2 = 0;
//	while (p1 < word1Size && p2 < word2Size)
//	{
//		if (word1[p1][i] != word2[p2][j])
//			return false;
//		if (word1[p1][i] == '\0')
//		{
//			p1++;
//			i = 0;
//		}
//		if (word2[p2][j] == '\0')
//		{
//			p2++;
//			j = 0;
//		}
//		i++;
//		j++;
//	}
//	return p1 == word1Size && p2 == word2Size;
//}


//����
//С��ͬѧ���������һ����վ�����û�ע���˻���ʱ����Ҫ�����˻������룬Ϊ�˼�ǿ�˻��İ�ȫ�ԣ�С��������ǿ����һ��Ҫ��
//
//1. ����ֻ���ɴ�д��ĸ��Сд��ĸ�����ֹ��ɣ�
//
//2. ���벻�������ֿ�ͷ��
//
//3. ���������ٳ��ִ�д��ĸ��Сд��ĸ�������������ַ������е����֣�
//
//4. ���볤������Ϊ8
//
//����С���ܵ���n�����룬��������д�����ж���Щ��������Щ�Ǻ��ʵģ���Щ�ǲ��Ϸ��ġ�
//
//����������
//����һ����n����������n(n��100)�У�ÿ��һ���ַ�������ʾһ�����룬���뱣֤�ַ�����ֻ���ִ�д��ĸ��Сд��ĸ�����֣��ַ������Ȳ�����100��
//���������
//����n�У��������Ϸ������YES�����Ϸ����NO



//int main()
//{
//	char arr[100];
//	int n = 0, i = 0;
//	int count1 = 0, count2 = 0, count3 = 0;
//	int other = 0;
//	int flag = 1;
//	scanf("%d", &n);
//	while (n)
//	{
//		scanf("%s", arr);
//		getchar();
//		other = 0; count1 = 0; count2 = 0; count3 = 0;
//		flag = 1;
//		if (arr[0] >= '0' && arr[0] <= '9')
//		{
//			printf("NO\n");
//			continue;
//		}
//		if (strlen(arr) < 8)
//		{
//			printf("NO\n");
//			continue;
//		}
//		for (i = 0; i < strlen(arr); i++)
//		{
//			if (arr[i] >= '0' && arr[i] <= '9')
//				count1 = 1;
//			else if (arr[i] >= 'a' && arr[i] <= 'z')
//				count2 = 1;
//			else if (arr[i] >= 'A' && arr[i] <= 'Z')
//				count3 = 1;
//			else
//				other = 1;
//			if (other != 0)
//			{
//				flag = 0;
//				printf("NO\n");
//				break;
//			}
//		}
//		if ((count1 + count2 + count3) < 2)
//		{
//			flag = 0;
//			printf("NO\n");
//		}
//		if (flag == 1)
//			printf("YES\n");
//		n--;
//	}
//	return 0;
//}

//����һ������Ϊ n �ķǽ��������һ���Ǹ������� k ��Ҫ��ͳ�� k �������г��ֵĴ���



//int main()
//{
//	int arr[1000];
//	int k = 0;
//
//}

//int GetNumberOfK(int* data, int dataLen, int k)
//{
//	/*int left = 0;
//	int right = dataLen - 1;
//	int mid = (left + right) / 2;*/
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < dataLen; i++)
//	{
//		if (data[i] == k)
//			count++;
//	}
//	return count;
//
//}


//int convertInteger(int A, int B)
//{
//	int ret1 = 0, ret2 = 0;
//	int i = 0;
//	int a = (unsigned int)A;
//	int b = (unsigned int)B;
//	int count = 0;
//	for (i = 1; i <= 32; i++)
//	{
//		ret1 = a & 1;
//		ret2 = b & 1;
//		if (ret1 != ret2)
//		{
//			count++;
//		}
//		a = a >> 1;
//		b = b >> 1;
//	}
//	return count;
//}

//����һ���������� nums ���������Ǵ��� Ψһ�� һ��������� ��

//�����ҳ������е����Ԫ�ز�������Ƿ� ������������ÿ���������ֵ����� ������ǣ��򷵻� ���Ԫ�ص��±� �����򷵻� - 1

//int dominantIndex(int* nums, int numsSize)
//{
//	int i = 0, j = 0;
//	int max = nums[0];
//	int pos = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		if (nums[i] > max)
//		{
//			max = nums[i];
//			pos = i;
//		}
//	}
//	for (i = 0; i < numsSize; i++)
//	{
//		if (nums[i] != 0 && (max / nums[i]) < 2)
//			return -1;
//	}
//	return pos;
//}


//������������ nums1 �� nums2 ������ ���ǵĽ��� ���������е�ÿ��Ԫ��һ���� Ψһ �ġ����ǿ��� ��������������˳�� ��

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
	int i = 0, j = 0;
	int k = 0, m = 0;
	int* arr = (int*)malloc(nums1Size * sizeof(int));
	*returnSize = 0;
	int tmp[100];
	for (i = 0; i < nums1Size; i++)
	{
		for (j = 0; j < nums2Size; j++)
		{
			if (*returnSize != 0)
			{
				for (m = 0; m < k; m++)
				{
					if (nums1[i] == tmp[m])
					    goto end;
				}
			}
			if (nums1[i] == nums2[j])
			{
				arr[*returnSize] = nums1[i];
				tmp[k] = nums1[i];
				k++;
				*returnSize = *returnSize + 1;
				break;
			}
		}
	end:;
	}
	return arr;

}

int main()
{
	int arr1[100];
	int arr2[100];
	int n1 = 0, n2 = 0, returnSize = 0;
	printf("n1 n2:");
	scanf("%d%d", &n1, &n2);
	int i = 0;
	printf("arr1:>");
	for (i = 0; i < n1; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("arr2:>");
	for (i = 0; i < n2; i++)
	{
		scanf("%d", &arr2[i]);
	}
	int* arr = intersection(arr1, n1, arr2, n2, &returnSize);
	for (i = 0; i < returnSize; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}