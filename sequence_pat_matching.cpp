#include<iostream>
using namespace std;
int max(int a,int b)
{
  if(a>b)
  return a;
  else
  return b;
}
bool lcs(string a,string b,int m,int n)
{
int t[m+1][n+1];
for(int i=0;i<m+1;i++)
for(int j=0;j<n+1;j++)
if(i==0||j==0)
t[i][j]=0;
for(int i=1;i<m+1;i++)
{
  for(int j=1;j<n+1;j++)
  {
    if(a[i-1]==b[j-1])
t[i][j]=1+t[i-1][j-1];
else
t[i][j]=max(t[i-1][j],t[i][j-1]);
  }
}
int length=t[m][n];
if(length==m)
return true;
else
return false;
}
int main()
{
  string a,b;
cout<<"Enter the 2 strings:\n";
cin>>a>>b;
int m=a.length();
int n=b.length();
cout<<"Does the sequence pattern match:\n";
if(lcs(a,b,m,n)==1)
cout<<"True";
else
cout<<"False";
  return 0;
}
