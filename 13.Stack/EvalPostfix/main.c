#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

struct Node
{
    int data;
    struct Node *next;
}*top=NULL;

void Display()
{
    struct Node *p;
    p=top;

    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

void push(int x)
{
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));

    if(t==NULL)
        printf("Stack Overflow\n");
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}

int pop()
{
    struct Node *t;

    int x=-1;

    if(top==NULL)
        printf("Stack Underflow\n");
    else
    {
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}

int pre(char x)
{
    if(x=='+' || x=='-')
        return 1;
    else if(x=='*' || x=='/')
        return 2;
    return 0;
}

int isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return 0;
    else
        return 1;
}

int Eval(char *postfix)
{
    int i=0;
    int x1,x2,r=0;

    for(i=0;postfix[i]!='\0';i++)
    {
        if(isOperand(postfix[i]))
            push(postfix[i]-'0');
        else
        {
            x2=pop();
            x1=pop();
            switch(postfix[i])
            {
                case '+' : r=x1+x2;
                           break;
                case '-' : r=x1-x2;
                           break;
                case '*' : r=x1*x2;
                           break;
                case '/' : r=x1/x2;
                           break;
            }
            push(r);
        }
    }
    return top->data;
}

int main()
{
    char *postfix="234*+82/-";

    printf("Result is %d\n",Eval(postfix));

    return 0;
}
