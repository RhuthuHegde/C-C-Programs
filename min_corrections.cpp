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
//  the table or the array
{
  int t[m+1][n+1];
  // initialising the first row and the first column with values as 0 coz even if a single string is empty then the common subsequence doesn't exist and ans becomes 0
  for(int i=0;i<m+1;i++)
  for(int j=0;j<n+1;j++)
  if(i==0 or j==0)
  t[i][j]=0;
// checks the char of 1 string with 2 string, if equal then add 1 to the value or length, else find out the max after removing the last char from string 1 and keeping string 2 intact and similar with string 2.
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
  // return or print the last matrix which has length of the lcs
 return t[m][n];
}
int main()
{
  string x,y;
  cout<<"Enter the 2 strings\n";
  cin>>x>>y;
  int m=x.length();
  int n=y.length();
int length=lcs(m,n,x,y);
cout<<"The number of insertions\n"<<n-length<<"\n";
cout<<"The number of deletions\n"<<m-length<<"\n";
  return 0;
}
