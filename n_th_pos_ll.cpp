#include<iostream>
using namespace std;
struct node{
int data;
node* link;
};typedef struct node* NODE;

NODE head;
void insert(int x)
{
NODE temp=new node();
    temp->data=x;
    temp->link=NULL;
if(head==NULL)
{
    head=temp;
}
else{
   NODE temp1=head;
   while(temp1->link!=NULL)
   {
       temp1=temp1->link;
   }
   temp1->link=temp;
}
}
void insert_pos(int pos,int y)
{
    if(pos==1)
    {
        insert(y);
    }
    int count1=1;
    NODE pres=head;
    NODE prev=head;
    while(count1<=pos-1 && pres!=NULL)
    {
        prev=pres;
        pres=pres->link;
        ++count1;
    }
    if(pres==NULL)
    {
        cout<<"Invalid position"<<"\n";
        return;
    }
    NODE temp=new node();
    temp->data=y;
    prev->link=temp;
    temp->link=pres;
}
int main()
{   head=NULL;
    int n,x,pos;
    cout<<"enter the no. of nodes"<<"\n";
    cin>>n;
    cout<<"Enter the nodes:"<<"\n";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insert(x);
    }
    int y;
    cout<<"Enter position and data:"<<"\n";
    cin>>pos>>y;
    insert_pos(pos,y);
    cout<<"Printing"<<"\n";
    NODE temp1=head;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1=temp1->link;
    }
return 0;
}
