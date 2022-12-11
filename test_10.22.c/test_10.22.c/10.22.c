#include <stdio.h>
#include <string.h>


//void init(int arr[10],int sz)
//{
//	int i = 0;
//	for (i = 0; i <sz; i++)
//	{
//		arr[i] ='0';
//	}
//}
//
//
//void print(int arr[10],int sz)
//{
//	int i = 0;
//	for (i = 0; i <sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	//printf("%d  ", arr);
//}
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	//printf("%s ", reverse(arr, sz));
//	//init(arr,sz);
//	print(arr,sz);
//
//	return 0;
//}



//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "###########";
//	int left = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int right = sz - 1;
//	while (left < right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//	}
//
//	printf("arr2[]=%s", arr2);
//	return 0;
//}


//冒泡排序

//void Bubble(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 0;
//				/*int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;*/
//			}
//		}
//		if (1 == flag)
//		{
//			printf("已经有序,无需排列\n");
//			break;
//		}
//	}
//	
//	//printf("%d", arr);
//}
//int main()
//{
//
//	int arr[] ={5,4,3,2,6};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//int b = 0;
//	Bubble(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	//b = Bubble(arr, sz);
//	return 0;
//}


//void Exchange(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}

void Exchange(int x, int y)
{
	int tmp = x;
	x = y;
	y = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	/*Exchange(&a, &b);
	printf("a=%d,b=%d", a, b);*/
	Exchange(a, b);
	printf("a=%d,b=%d",a,b);

	return 0;
}