#include<iostream>
using namespace std;
int max(int a,int b)
{
  if(a>b)
  return a;
  else return b;
}
int lcs(int n,int m,string a,string b)
{
  // check for the base condition( the lowest possible value)
  if(n==0 || m==0)
    return 0;
// if the last char of both the strings are equal then remove the last char and pass the rest but also add 1 everytime it happens
  if(a[n-1]==b[m-1])
  return(1+lcs(n-1,m-1,a,b));
    else
    // it checks by removing the last char from one string if both strings are not matching,it selects the max value out of both as we are focused on that
    return max(lcs(n-1,m,a,b),lcs(n,m-1,a,b));

}
int main()
{
  string a,b;
  cout<<"enter the two strings\n";
  cin>>a>>b;
  int n=a.length();
  int m=b.length();
  cout<<"length of the longest common subsequence\n";
  cout<<lcs(n,m,a,b);
return 0;
}
