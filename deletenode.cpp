#include<iostream>
using namespace std;
struct node{
int data;
node* link;
};
typedef struct node* NODE;
NODE head;
void deletel(int pos)
{
    NODE temp=head;
    NODE prev=head;
    int count=1;
    // if head is null then print that there are no elements present
    if(head==NULL)
    {
      cout<<"No elements in the list"<<endl;
    return;
  }
  // if the position to deleted is the first positon or the first node
    if(pos==1)
    {
        head=head->link;
        delete temp;
    }
    // when the position specified is somewhere in the middle of the list
    else{
        while(temp!=NULL && count<=pos-1)
        {
            prev=temp;
            temp=temp->link;
            count++;
        }
        if(temp==NULL)
        cout<<"Invalid position"<<endl;
// establishing the link and then deleting the node specified
        prev->link=temp->link;
        delete temp;
    }

}
// printing the nodes
void print()
{
    NODE temp1=head;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1=temp1->link;
    }
}
// inserting node at the end
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
    int n,x,pos;
    cout<<"enter the no. of nodes"<<"\n";
    cin>>n;
    cout<<"Enter the nodes:"<<"\n";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insert(x);
    }
    cout<<"Printing"<<"\n";
    print();
    cout<<"\nDelete the node at pos:"<<"\n";
    cin>>pos;
    deletel(pos);
    print();
    cout<<"\n";
    cin>>pos;
    deletel(pos);
    print();
    cout<<"\n";
    cin>>pos;
    deletel(pos);
    print();
    cout<<":\n";
    cin>>pos;
    deletel(pos);
    print();

return 0;
}
