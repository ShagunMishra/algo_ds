#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void RDisplay1(struct Node *p)
{
    if(p!=NULL)
    {
        printf("%d ",p->data);
        RDisplay1(p->next);
    }
}

void RDisplay2(struct Node *p)
{
    if(p!=NULL)
    {
        RDisplay2(p->next);
        printf("%d ",p->data);
    }
}

int main()
{
    int A[]={3,5,7,10,25,8,32,2};
    create(A,8);


    RDisplay1(first);
    printf("\n");
    RDisplay2(first);

    return 0;
}
