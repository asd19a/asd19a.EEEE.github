#include <stdio.h>
#include <math.h>
#include <string.h>



//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int arr[n][n];
//	//int arr[n][n] = { 0 };
//	return 0;
//}


//int main()
//{
//	char arr[80] = { 0 };
//	scanf_s("%s", arr);
//	printf("%s\n", arr);
//	return 0;
//}

//void Order(int* str, int sz)
//{
//	//int left = 0;
//	//int right = sz - 1;
//	int i = 0,tmp=sz,j=0;
//	int* ptmp = str;
//	while (i < sz)
//	{
//		if (*(str + i) % 2 != 0)
//		{
//			*(ptmp + j) = *(str + i);
//			
//			j++;
//		}
//		else
//		{
//			*(ptmp + tmp-1) = *(str + i);
//			
//			tmp--;
//		}
//		i++;
//	}
//}

//void Order(int arr[], int sz)
//{
//	int i = 0, tmp = sz,j=0;
//	int str[5] = {arr};
//	while (i < sz)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			str[j] = arr[i];
//			j++;
//		}
//		else
//		{
//			str[tmp - 1] = arr[i];
//			tmp--;
//		}
//		i++;
//	}
//
//
//}
//
//int main()
//{
//	int arr[5] = { 0 };
//	int i = 0, x = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf_s("%d", &x);
//		arr[i] = x;
//	}
//	Order(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	/*char arr[5];
//	scanf_s("%5s", arr,5);
//	printf("%s\n", arr);*/
//    int n = 0, m = 0, i = 0, x = 0, j = 0,tmp=0,p=1;
//   // scanf("%d %d", &n, &m);
//    int arr1[2]={1,4};
//    int arr2[2]={2,9};
//    int arr[4]={0};
//    /*for (i = 0; i < 2; i++)
//    {
//        scanf_s("%d", &x);
//        arr1[i] = x;
//    }
//    for (i = 0; i < 2; i++)
//    {
//        scanf_s("%d", &x);
//        arr2[i] = x;
//    }*/
//    int min1 = 0, min2 =0;
//    while (p < 4)
//    {
//        for (i = tmp; i < 2; i++)
//        {
//            for (j = i + 1; j < 2; j++)
//            {
//                if (arr1[j] < arr1[i])
//                    min1 = j;
//            }
//        }
//        for (i = tmp; i < 2; i++)
//        {
//            for (j = i + 1; j < 2; j++)
//            {
//                if (arr2[j] < arr2[i])
//                    min2 = j;
//            }
//        }
//        if (arr1[min1]<arr2[min2])
//        {
//            arr[j-1] = arr1[min1];
//            arr[j] = arr2[min2];
//        }
//        else
//        {
//            arr[j-1] =arr2[min2];
//            arr[j] = arr1[min1];
//        }
//        p = p + 2;
//        tmp++;
//        
//    }
//    for (i = 0; i < 4; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//	return 0;
//}


//int main()
//{
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int n = 0, m = 0, i = 0, j = 0;
//	scanf_s("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf_s("%d", &arr2[i]);
//	}
//	i = 0; j = 0;
//	while (j <(n+m)/2)
//	{
//		if (arr1[i] < arr2[i])
//		{
//			printf("%d ", arr1[i]);
//			printf("%d ", arr2[i]);
//		}
//		else
//		{
//			printf("%d ", arr2[i]);
//			printf("%d ", arr1[i]);
//		}
//		i++;
//		j++;
//	}
//	return 0;
//}


//int main()
//{
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int n = 0, m = 0, i = 0, j = 0;
//	scanf_s("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf_s("%d", &arr2[i]);
//	}
//	int arr[1000] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = arr1[i];
//	}
//	for (i = 0; i < m; i++)
//	{
//		arr[n + i] = arr2[i];
//	}
//	for (i = 0; i < n + m - 1; i++)
//	{
//		for (j = i + 1; j < n + m; j++)
//		{
//			if (arr[j] < arr[i])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < n + m; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



int main()
{
	int n = 0, i = 0, j = 0,m=0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int count1 = 0, count2 = 0;
	for (i = 0,j=0,m=0; i < 10; i++)
	{
		if (arr[i] % 2 != 0)
		{
			arr1[j] = arr[i];
			j++;
		}
		else
		{
			arr2[m] = arr[i];
			m++;
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr1[i]);
	}
	for (i = 0; i < m; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}