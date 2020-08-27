#include<iostream>
#include<stack>
using namespace std;
void reverse(char c[],int n)
{
  stack<char> s;
  for(int i=0;i<n;i++)
  s.push(c[i]);
  for(int i=0;i<n;i++)
  {
    c[i]=s.top();
    s.pop();
  }
}
void print(char c[],int n)
{
  for(int i=0;i<n;i++)
  cout<<c[i];
}
int main()
{
  char c[20];
  cout<<"Enter the string"<<endl;
  gets(c);
  reverse(c,strlen(c));
  print(c,strlen(c));
  return 0;
}
