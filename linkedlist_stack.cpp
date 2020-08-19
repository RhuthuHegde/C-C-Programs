#include<iostream>
using namespace std;
struct node{
  int data;
  node* link;
};
typedef struct node* NODE;
NODE head;
// inserting the node at the beginnning of the list-O(n)
void push(int x)
{
  NODE temp=new node();
  temp->data=x;
  temp->link=head;
  head=temp;
}
// popping the element from the beginning of the list-O(n)
void pop()
{
  if(head==NULL)
  {
    cout<<"stacj is empty"<<endl;
    return;
  }
NODE temp=head;
head=head->link;
delete temp;
}
// printing the leftover elements after the operations
void print()
{
  NODE temp=head;
  while(temp!=NULL)
{
  cout<<temp->data<<" ";
  temp=temp->link;
}
cout<<"\n";
}
int main()
{
  head=NULL;
  int n,x;
  cout<<"Enter the number of elements to be inserted:"<<endl;
  cin>>n;
  cout<<"enter the n numbers:"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    push(x);
  }
  print();
  cout<<"Popping the elements"<<endl;
  pop();
  print();
  cout<<"pop again"<<endl;
  pop();
  print();
  return 0;
}
