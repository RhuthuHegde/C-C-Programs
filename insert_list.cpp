#include<iostream>
using namespace std;
//inserting node at the beginning of the linked list
struct node{
int data;
node* link;
};
typedef struct node* Node;
Node head=NULL;
void insert(int x)
{
    Node temp=new node();
    temp->data=x;
    temp->link=head;
    head=temp;
}
int main()
{
    int n,x;
    cout<<"enter the number of nodes:"<<"\n";
    cin>>n;
    cout<<"the data:"<<"\n";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insert(x);
    }
    cout<<"The output is:"<<endl;
        Node temp1=head;
        while(temp1!=NULL)
        {
            cout<<temp1->data<<" ";
            temp1=temp1->link;
        }
return 0;
}
