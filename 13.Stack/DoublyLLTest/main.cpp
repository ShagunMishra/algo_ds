#include <iostream>

using namespace std;

class Node
{
public:
    Node *prev;
    int Enrollment;
    string Name;
    int Class;
    char Section;
    Node *next;
};

class DoublyLinkedList
{
private:
    Node *head;
public:
    DoublyLinkedList(){head=NULL;}
    ~DoublyLinkedList();

    // Check if the list is empty or not
    bool IsEmptyList();

    // Insert a new node at the start of the list
    void insert_begin(int Enrollment, string Name, int Class, char Section);

    // Insert a new node at the end of the list
    void insert_end(int Enrollment, string Name, int Class, char Section);

    //insert middle
    void insert_after(int OEnrollment, string OName, int OClass, char OSection,int NEnrollment, string NName, int NClass, char NSection);

    //Deletes the node containing the specified value
    void deleteNode(int value);

    void traverse();

    int Length(); //to find length of the list
    int Position(int value); //to know position of the given value
};

int DoublyLinkedList::Length()
{
    Node *p=head;
    int len=0;

    while(p)
    {
        len++;
        p=p->next;
    }
    return len;
}

int DoublyLinkedList::Position(int value)
{
    Node *p=head;
    int pos=0;

    while(p->Enrollment!=value)
    {
        pos++;
        p=p->next;
    }
    return pos;
}

bool DoublyLinkedList::IsEmptyList()
{
    if(head==NULL)
        return 0;
    else
        return 1;
}

//Note:value must be unique identity so it will be Enrollment

void DoublyLinkedList::insert_begin(int Enrollment, string Name, int Class, char Section)
{
    Node *t=new Node;
    t->Enrollment=Enrollment;
    t->Name=Name;
    t->Class=Class;
    t->Section=Section;
    t->prev=NULL;
    head->prev=t;
    head=t;
}

void DoublyLinkedList::insert_end(int Enrollment, string Name, int Class, char Section)
{
    Node *t=new Node;
    Node *p=head;
    t->Enrollment=Enrollment;
    t->Name=Name;
    t->Class=Class;
    t->Section=Section;
    t->next=NULL;
    for(int i=0;i<Length()-1;i++)
        p=p->next;
    t->prev=p->next;
    p->next=t->prev;
}

//Note:value must be unique identity so it will be Enrollment


void DoublyLinkedList::insert_after(int OEnrollment, string OName, int OClass, char OSection,int NEnrollment, string NName, int NClass, char NSection)
{
    Node *t=new Node;
    Node *p=head;
    t->Enrollment=NEnrollment;
    t->Name=NName;
    t->Class=NClass;
    t->Section=NSection;
    for(int i=0;i<Position(NEnrollment)-1;i++)
        p=p->next;
    t->next=p->next;
    t->prev=p;
    if(p->next)
        p->next->prev=t;
    p->next=t;
}

void DoublyLinkedList::deleteNode(int value)
{
    Node *p=head;
    for(int i=0;i<Position(value)-1;i++)
        p=p->next;
    p->prev->next=p->next;
    if(p->next)
        p->next->prev=p->prev;
    delete p;
}

void DoublyLinkedList::traverse()
{
    Node *p=head;

    while(p)
    {
        cout<<p->Enrollment<<" ";
        cout<<p->Name<<" ";
        cout<<p->Class<<" ";
        cout<<p->Section<<" ";
        p=p->next;
    }
    cout<<"\n";
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
