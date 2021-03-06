#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int max(int a,int b)
{
  if(a>b)
  return a;
  else return b;
}
string lcs(int m,int n,string x,string y)
{string final="";
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
  int i=m,j=n;
  while(i>0 or j>0)
  {
  if(x[i-1]==y[j-1])
  {
    final.push_back(x[i-1]);
    i--;
    j--;
  }
  else
  if(t[i-1][j]>t[i][j-1])
    i--;
    else
    j--;
}
reverse(final.begin(),final.end());
return final;
}
int main()
{
  string x,y;
  cout<<"Enter the 2 string\n";
  cin>>x>>y;
  int m=x.length();
  int n=y.length();
  cout<<"The longest common subsequence string is\n";
  cout<<lcs(m,n,x,y);
  return 0;
}
