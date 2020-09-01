#include<iostream>
using namespace std;
int subsetsum(int n,int arr[],int sum)
{
  int t[n+1][sum+1];
  for(int i=0;i<n+1;i++)
  {
  for(int j=0;j<sum+1;j++)
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
    for(int j=0;j<sum+1;j++)
    {
      if(arr[i-1]<=j)
      t[i][j]=(t[i-1][j-arr[i-1]] || t[i-1][j]);
      else
      t[i][j]=t[i-1][j];
    }
  }
return t[n][sum];
}
int main()
{
  int n;
  cout<<"enter the n and the array"<<endl;
  cin>>n;
  int arr[n],sum,c=0;
  cout<<"array"<<endl;
  for(int i=0;i<n;i++)
  cin>>arr[i];
  cout<<"sum need to computed if posssible"<<endl;
  cin>>sum;
  for(int i=0;i<n;i++)
  c=c+arr[i];
  if(sum>c)
  {
  cout<<"false"<<endl;
  return 0;
}
  int y=subsetsum(n,arr,sum);
  if(y==true)
  cout<<"true"<<endl;
  else
  cout<<"false"<<endl;
  return 0;
}
