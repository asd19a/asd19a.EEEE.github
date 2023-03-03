#define _CRT_SECURE_NO_WARNINGS




#include <stdio.h>
#include <stdlib.h>



 //Definition for singly-linked list.
 struct ListNode 
 {
      int val;
      struct ListNode *next;
 };
 

struct ListNode* removeElements(struct ListNode* head, int val)
{
    struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummyhead->next = head;
    struct ListNode* tmp = dummyhead;
    while (tmp->next != NULL)
    {
        if (tmp->next->val == val)
        {
            tmp->next = tmp->next->next;
        }
        else
        {
            tmp = tmp->next;
        }
    }
    return dummyhead->next;
}


int main()
{
    struct ListNode* n1= (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n6 = (struct ListNode*)malloc(sizeof(struct ListNode));
    n1->val = 1;
    n2->val = 2;
    n3->val = 6;
    n4->val = 4;
    n5->val = 5;
    n6->val = 6;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = NULL;

    removeElements(n1, 6);
    return 0;
}