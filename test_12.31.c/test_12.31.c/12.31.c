#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <string.h>

////int main()
////{
////    int a[5][5];
////    int(*p)[4];
////    p = a;
////    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
////    return 0;
////}
//?
////main()
////{
////    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
////    int* ptr1 = (int*)(&aa + 1);
////    int* ptr2 = (int*)(*(aa + 1));
////    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
////    return 0;
////}
////





//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}
//

//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	return 0;
}









