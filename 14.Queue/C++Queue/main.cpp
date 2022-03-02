#include <iostream>
using namespace std;

class Queue
{
private:
    int fron;
    int rear;
    int siz;
    int *Q;
public:
    Queue()
    {
        fron=rear=-1;
        siz=10;
        Q=new int[siz];
    }
    Queue(int siz)
    {
        fron=rear=-1;
        this->siz=siz;
        Q=new int[this->siz];
    }
    void enqueue(int x);
    int dequeue();
    void Display();
};

void Queue::enqueue(int x)
{
    if(rear==siz-1)
        cout<<"Queue is Full\n";
    else
    {
        rear++;
        Q[rear]=x;
    }
}

int Queue::dequeue()
{
    int x=-1;
    if(fron==rear)
        cout<<"Queue is Empty\n";
    else
    {
        x=Q[fron+1];
        fron++;
    }
    return x;
}

void Queue::Display()
{
    for(int i=fron+1;i<=rear;i++)
        cout<<Q[i]<<" ";
    cout<<"\n";
}

int main()
{
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.Display();

    return 0;
}
