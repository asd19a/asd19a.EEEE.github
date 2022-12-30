#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <math.h>


//int main()
//{
//        int a[5] = { 1, 2, 3, 4, 5 };
//        int* ptr = (int*)(&a + 1);
//        printf("%d,%d", *(a + 1), *(ptr - 1));
//          
//    //程序的结果是什么？
//	return 0;
//}

//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//    printf("%d ", ptr1[-1]);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}



int main()
{
    int a[5][5];
    int(*p)[4];
    p = a;
    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
    return 0;
}