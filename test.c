#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>


//struct ListNode* gGuard = (struct ListNode*)malloc(sizeof(struct ListNode));
//struct ListNode* lGuard = (struct ListNode*)malloc(sizeof(struct ListNode));
//struct ListNode* gtail = NULL;
//struct ListNode* ltail = NULL;
//
//gGurad = gtail = NULL;
//lGurad = ltail = NULL;
//
//struct ListNode* cur = pHead;
//
//while (cur)
//{
//	if (cur->val < x)
//	{
//		ltail->next = cur;
//		ltail =ltail->next;
//	}
//	else
//	{
//		gtail->next = cur;
//		gtail = gtail->next;
//	}
//	cur = cur->next;
//}
//
//ltail->next = lGuard->next;
//gtail->next = NULL;
//free(gGuard);
////free(lGuard);
//return lGuard->next;
//

struct ListNode
{
    int val;
    struct ListNode* next;
    
};


struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* newhead = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* cur = head;
    while (cur)
    {
        struct ListNode* next = cur->next;
        cur->next = newhead;
        newhead = cur;
        cur = next;
    }
    return newhead;
}


int main()
{
    struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));

    n1->val = 1;
    n2->val = 2;
    n3->val = 3;
    n4->val = 4;
    n5->val = 5;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;

    reverseList(n1);

    return 0;

}

