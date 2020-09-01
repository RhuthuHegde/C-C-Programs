#include<iostream>
using namespace std;
int subsetsum(int n,int arr[],int halfsum)
{
  int t[n+1][halfsum+1];
  for(int i=0;i<n+1;i++)
  {
  for(int j=0;j<halfsum+1;j++)
  {
  if(i==0)
  t[i][j]=false;
  if(j==0)
  t[i][j]=true;
  if(i==0 && j==0)
  return true;
}}
  for(int i=0;i<n+1;i++)
  {
    for(int j=0;j<halfsum+1;j++)
    {
      if(arr[i-1]<=j)
      t[i][j]=(t[i-1][j-arr[i-1]] || t[i-1][j]);
      else
      t[i][j]=t[i-1][j];
    }
  }
return t[n][halfsum];
}
int main()
{
  int n;
  cout<<"enter the n and the array"<<endl;
  cin>>n;
  int arr[n],sum=0;
  cout<<"array"<<endl;
  for(int i=0;i<n;i++)
  cin>>arr[i];
  for(int i=0;i<n;i++)
  sum=sum+arr[i];
  if(sum%2!=0)
  {
  cout<<"false"<<endl;
  return 0;
}
  int y=subsetsum(n,arr,sum/2);
  if(y==true)
  cout<<"true"<<endl;
  else
  cout<<"false"<<endl;
  return 0;
}
