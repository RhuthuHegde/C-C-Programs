#include<iostream>
#include<string>
using namespace std;
int max(int a,int b)
{
  if(a>b)
  return a;
  else return b;
}
int lcs(int m,int n,string x,string y)
{
  int t[m+1][n+1];
  memset(t,-1,sizeof(t));
  if(n==0 || m==0)
  return 0;
  if(t[m][n]!=-1)
  return t[m][n];
  if(x[m-1]==y[n-1])
  return t[m][n]=1+lcs(m-1,n-1,x,y);
  else
  return t[m][n]=max(lcs(m,n-1,x,y),lcs(m-1,n,x,y));
}
int main()
{
  string x,y;
  cout<<"Enter the 2 string\n";
  cin>>x>>y;
  int m=x.length();
  int n=y.length();
  cout<<"The longest common subsequence length\n";
  cout<<lcs(m,n,x,y);
  return 0;
}
