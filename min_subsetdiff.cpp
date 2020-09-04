#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int subsetsum(int n,int arr[],int sum)
{
  vector<int>v;
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
  t[i][j]=true;
}}
  for(int i=1;i<n+1;i++)
  {
    for(int j=1;j<sum+1;j++)
    {
      if(arr[i-1]<=j)
      t[i][j]=(t[i-1][j-arr[i-1]] || t[i-1][j]);
      else
      t[i][j]=t[i-1][j];
    }
  }
for(int j=0;j<=sum;j++)
if(t[n][j]==true)
v.push_back(j);
int min=INT_MAX;
// int h1=v.size();
// for(int i=0;i<h1;i++)
// cout<<v[i]<<" ";
int h=v.size()/2;
for(int i=0;i<h;i++)
{
  int y=sum-2*v[i];
  if(y<min)
  min=y;
}
return min;
}
int main()
{
  vector<int>v;
  int n,sum=0;
  cout<<"enter the n and the array"<<endl;
  cin>>n;
  int arr[n];
  cout<<"array"<<endl;
  for(int i=0;i<n;i++)
  cin>>arr[i];
  for(int i=0;i<n;i++)
  sum=sum+arr[i];
  cout<<"the minimum subset difference\n";
  cout<<subsetsum(n,arr,sum)<<endl;
  return 0;
}
