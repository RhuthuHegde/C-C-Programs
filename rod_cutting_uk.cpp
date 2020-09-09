#include<iostream>
using namespace std;
int max(int a,int b)
{
  if(a>b)
  return a;
  else
  return b;
}
int unbounded(int n,int a[],int price[],int length)
{
  int t[n+1][length+1];
  for(int i=0;i<n+1;i++)
  t[i][0]=1;
  for(int j=1;j<length+1;j++)
  t[0][j]=0;
  for(int i=1;i<n+1;i++)
  {
    for(int j=1;j<length+1;j++)
    {
      if(a[i-1]<=j)
      t[i][j]=max(price[i-1]+t[i][j-a[i-1]],t[i-1][j]);
      else
      t[i][j]=t[i-1][j];
    }
  }
  return t[n][length];
}
int main()
{int length,n;
  cout<<"Enter the total length of the rod available\n";
  cin>>length;
  cout<<"Enter n and the lengths they can be cut into\n";
  cin>>n;
  int a[n],price[n];
  cout<<"the array\n";
  for(int i=0;i<n;i++)
  cin>>a[i];
  cout<<"price array\n";
  for(int i=0;i<n;i++)
  cin>>price[i];
  cout<<"The max price they can get by getting rods is\n";
  cout<<unbounded(n,a,price,length);
  return 0;
}
