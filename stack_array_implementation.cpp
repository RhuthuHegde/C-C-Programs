// object oriented method representation of stack using arrays
#include<iostream>
using namespace std;
# define max_size 10
class stack
{
private:
  int a[max_size];
  int top=-1;
public:
  void push(int x)
  {
    if(top==max_size-1)
    {
    cout<<"stack overflow"<<endl;
    return;
    }
    a[++top]=x;
  }
  void pop()
  {
    if(top==-1)
    {
      cout<<"Stack is already empty"<<endl;
      return;
    }
    top--;
  }
  int ptop()
  {
    return a[top];
  }
  void print()
  {
    for(int i=0;i<=top;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
  }
};
int main()
{
  stack s;
  int x,n;
  cout<<"enter the numbers to be inserted to stack"<<endl;
  cin>>n;
  cout<<"the numbers are:"<<endl;
  for(int i=0;i<n;i++)
  {
  cin>>x;
  s.push(x);
}
cout<<"printing"<<endl;
  s.print();
  cout<<"popping twice"<<"\n";
  s.pop();
  s.pop();
  cout<<"printing"<<endl;
  s.print();
  cout<<"top"<<endl;
  cout<<s.ptop()<<"\n";
  cout<<"pop again"<<"\n";
  s.pop();
  cout<<"Top"<<"\n";
  cout<<s.ptop()<<"\n";
  return 0;
}
