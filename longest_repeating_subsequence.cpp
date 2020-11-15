#include<iostream>
using namespace std;
int max(int a,int b)
{
  if(a>b)
  return a;
  else
  return b;
}
int lcs(string a,string b,int n)
{
  int t[n+1][n+1];
  for(int i=0;i<n+1;i++)
  for(int j=0;j<n+1;j++)
  if(i==0 || j==0)
  t[i][j]=0;
  for(int i=1;i<n+1;i++)
  {
    for(int j=1;j<n+1;j++)
    {
      if(a[i-1]==b[j-1] && i!=j)
        t[i][j]=1+t[i-1][j-1];
        else
        t[i][j]=max(t[i-1][j],t[i][j-1]);
    }
  }
  return t[n][n];
}
int main()
{
  string a;
    cout<<"enter the string:\n";
    cin>>a;
    string b=a;
    int n=a.length();
    cout<<"The length of the longest repeating subsequence is "<<lcs(a,b,n);
    return 0;
}
