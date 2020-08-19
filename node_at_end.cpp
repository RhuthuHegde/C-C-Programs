#include<iostream>
using namespace std;
struct node{
int data;
node* link;
};
typedef struct node* NODE;
NODE head;
void insert(int x)
{
    NODE temp1=head;
    NODE temp=new node();
        temp->data=x;
        temp->link=NULL;
        if(head==NULL)
        {
            head=temp;
        }
        else{
        while(temp1->link!=NULL)
        {
            temp1=temp1->link;
        }
        temp1->link=temp;
        }
}
int main()
{   head=NULL;
    int n,x;
    cout<<"enter the no. of nodes"<<"\n";
    cin>>n;
    cout<<"Enter the nodes:"<<"\n";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insert(x);
    }
    cout<<"Printing"<<"\n";
    NODE temp1=head;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1=temp1->link;
    }
return 0;
}
