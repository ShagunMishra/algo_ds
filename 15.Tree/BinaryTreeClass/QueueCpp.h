#ifndef QUEUECPP_H_INCLUDED
#define QUEUECPP_H_INCLUDED

#include<iostream>
#include<stdio.h>
using namespace std;

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

class Queue
{
private:
    int fron;
    int rear;
    int siz;
    Node **Q;
public:
    Queue()
    {
        fron=rear=-1;
        siz=10;
        Q=new Node*[siz];
    }
    Queue(int siz)
    {
        fron=rear=-1;
        this->siz=siz;
        Q=new Node*[this->siz];
    }
    void enqueue(Node *x);
    Node* dequeue();
    int isEmpty()
    {
        return fron==rear;
    }
};

void Queue::enqueue(Node *x)
{
    if(rear==siz-1)
        cout<<"Queue is Full\n";
    else
    {
        rear++;
        Q[rear]=x;
    }
}

Node* Queue::dequeue()
{
    Node *x=NULL;
    if(fron==rear)
        cout<<"Queue is Empty\n";
    else
    {
        x=Q[fron+1];
        fron++;
    }
    return x;
}

#endif // QUEUECPP_H_INCLUDED
