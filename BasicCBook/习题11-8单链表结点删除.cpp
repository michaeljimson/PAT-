#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem( struct ListNode *L, int m );
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在此处 */

struct ListNode *readlist()
{
    struct ListNode *head, *p, *tail;
    head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next = NULL;
    p = head;
    while (1)
    {
        tail = (struct ListNode*)malloc(sizeof(struct ListNode));
        scanf("%d", &tail->data);
        if (tail->data == -1) break;
        p->next = tail;
        p = tail;
    }
    p->next = NULL;
    return head;
}
struct ListNode *deletem(struct ListNode *L, int m)
{
    struct ListNode *head=L, *tail=L->next, *p=L;
    while (tail)
    {
        if (tail->data == m)
        {
            head->next = tail->next;
            free(tail);
            tail = head->next;
            continue;
        }
        head = head->next;
        tail = tail->next;
    }
    return p->next;

}

