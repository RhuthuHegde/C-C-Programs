#include<iostream>
#include<string>
using namespace std;
int sub_string(int m,int n,string x,string y)
{
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
    t[i][j]=0;
  }
}
int max=0;
for(int i=0;i<m+1;i++)
{
  for(int j=0;j<n+1;j++)
  {
    if(t[i][j]>max)
    max=t[i][j];
  }
}
return max;
}

int main()
{
  string x,y;
  cout<<"Enter the 2 string\n";
  cin>>x>>y;
  int m=x.length();
  int n=y.length();
  cout<<"The longest common substring length\n";
  cout<<sub_string(m,n,x,y);
  return 0;
}
