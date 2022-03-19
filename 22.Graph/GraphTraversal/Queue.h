#ifndef Queue_h
#define Queue_h
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*fron=NULL,*rear=NULL;

void enqueue(int x)
{
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));
    if(t==NULL)
        printf("Queue is FULL\n");
    else
    {
        t->data=x;
        t->next=NULL;
        if(fron==NULL)
            fron=rear=t;
        else
        {
            rear->next=t;
            rear=t;
        }

    }
}

int dequeue()
{
    int x=-1;
    struct Node* t;

    if(fron==NULL)
        printf("Queue is Empty\n");
    else
    {
        x=fron->data;
        t=fron;
        fron=fron->next;
        free(t);
    }
    return x;
}

int isEmpty()
{
    return fron==NULL;
}

#endif // Queue_h
