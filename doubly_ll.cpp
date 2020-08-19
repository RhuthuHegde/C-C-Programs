#include<iostream>
using namespace std;
struct node{
int data;
node* prev;
node* next;
};
typedef struct node* NODE;
NODE head;
NODE make(int x)
{
    NODE nod=new node();
    nod->data=x;
    nod->prev=NULL;
    nod->next=NULL;
    return nod;
}
void insert_node_tail(int x)
{
    NODE temp=make(x);
    NODE temp1=head;
    if(head==NULL){
        head=temp;
        return;
    }
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;
    temp->prev=temp1;
}
void insert_node_head(int x)
{
    NODE temp=make(x);

    if(head==NULL)
    {
        head=temp;
        return;
    }
   head->prev=temp;
   temp->next=head;
    head=temp;
}
void print()
{
    NODE temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void reverse_print()
{
    NODE temp=head;
        if(temp==NULL)
        return;
    while(temp->next!=NULL)
        temp=temp->next;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
}
int main()
{   NODE head=NULL;
    int x,n;
    cout<<"Enter the number of nodes:"<<"\n";
    cin>>n;
    cout<<"Enter the nodes to head:"<<"\n";
    for(int i=0;i<n;i++)
    {   cin>>x;
//        insert_node_head(x);
        insert_node_tail(x);
    }
    cout<<"Printing......."<<"\n";
    print();
    cout<<"\nReverse printing....."<<"\n";
    reverse_print();
    return 0;
}
