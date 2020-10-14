#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int max(int a,int b)
{
  if(a>b)
  return a;
  else
  return b;
}
int lcs(int m,int n,string x,string y)
{
  int t[m+1][n+1];
  for(int i=0;i<m+1;i++)
{
  for(int j=0;j<n+1;j++)
  {
    if(i==0||j==0)
    t[i][j]=0;
  }
}
for(int i=1;i<m+1;i++)
{
  for(int j=1;j<n+1;j++)
  {
    if(x[i-1]==y[j-1])
    t[i][j]=1+t[i-1][j-1];
    else
    t[i][j]=max(t[i-1][j],t[i][j-1]);
  }
}
return t[m][n];
}
int main()
{
  string x,y;
  cout<<"Enter the string x:"<<"\n";
  cin>>x;
  string temp=x;
  int m=x.length();
   reverse(x.begin(),x.end());
   y=x;
   x=temp;
  int n=m;
  int length=lcs(m,n,x,y);
cout<<"The minimum number of deletions to get the largest palindromic sequence is :"<<m-length<<"\n";
  return 0;
}
