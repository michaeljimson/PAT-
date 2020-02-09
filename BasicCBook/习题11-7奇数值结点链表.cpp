#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd( struct ListNode **L );
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
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */

struct ListNode *readlist()
{
	int data;
	struct ListNode *p, *head;
	head= NULL;
	while(scanf("%d",&data)&&data!=-1){
		struct ListNode *q = (struct ListNode*) malloc(sizeof(struct ListNode));
		if(q!=NULL){
			q->data=data;
			q->next=NULL;
		}
		else exit(1);
		if(head!=NULL)
		{
			p->next=q;
		}
		else 
			head = q;
			p = q;
	}
	return head;

}

struct ListNode *getodd( struct ListNode **L )
{
	struct ListNode *head0=NULL, *head1=NULL, *p0, *p1;
	while((*L)!=NULL){
		int data=(*L)->data;
		struct ListNode *q = (struct ListNode *) malloc (sizeof(struct ListNode));
		if(data%2){
			if(q!=NULL){
				q->data=data;
				q->next=NULL;
			}
			else exit(1);
			if(head1!=NULL){
				p1->next=q;
			}
			else
			head1 = q;
			p1=q;
		}
		else{
			if(q!=NULL){
				q->data=data;
				q->next=NULL;
			}
			else exit(1);
			if(head0!=NULL){
				p0->next=q;
			}
			else	head0=q;
			p0=q;
		}
		*L=(*L)->next;
	}
	 *L=head0;
  return head1;
}

