#include<iostream>
using namespace std;
int max(int a,int b)
{
  if(a>b)
  return a;
  else return b;
}
int lcs(int m,int n,string x,string y)
{
  // we first find the lcs among the 2 strings given and write them also from the first string subtract the len of the lcs and write the rest, do the same second string. which is basically equivalent to adding the lengths of the 2 strings and subtracting the value of the length of lcs.
  int t[m+1][n+1];
  for(int i=0;i<m+1;i++)
  for(int j=0;j<n+1;j++)
  if(i==0 or j==0)
  t[i][j]=0;
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
  int length=t[m][n];
  return m+n-length;
}
int main()
{
  string x,y;
  cout<<"Enter the 2 string\n";
  cin>>x>>y;
  int m=x.length();
  int n=y.length();
  cout<<"The length of shortest super sequence is:\n";
  cout<<lcs(m,n,x,y);
  return 0;
}
