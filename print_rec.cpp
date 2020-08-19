#include<iostream>
using namespace std;
struct node{
int data;
node* link;
};
typedef struct node* NODE;
NODE head;
void print(NODE temp)
{if(temp==NULL)
return;
    cout<<temp->data<<" ";
    print(temp->link);
}
void print_reverse(NODE temp)
{
    if(temp==NULL)
        return;
    print_reverse(temp->link);
    cout<<temp->data<<" ";

}

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
    print(head);
    cout<<"\nReverse print"<<"\n";
    print_reverse(head);
return 0;
}

