#include<iostream>
using namespace std;
int numberset(int n,int arr[],int sum)
{
  int t[n+1][sum+1];
  for(int i=0;i<n+1;i++)
  {
    for(int j=0;j<sum+1;j++)
    {
      if(i==0)
      t[i][j]=0;
      if(j==0)
      {
        t[i][j]=1;
        int c=1;
        for(int i=0;i<n;i++)
        if(arr[i]==0)
        ++c;
        t[i][j]=c;
      }
      if(i==0 && j==0)
      t[i][j]=1;
    }
  }

  for(int i=1;i<n+1;i++)
  {
    for(int j=1;j<sum+1;j++)
    {
      if(arr[i-1]<=j)
      t[i][j]=t[i-1][j-arr[i-1]]+t[i-1][j];
      else
      t[i][j]=t[i-1][j];
    }
  }
  return t[n][sum];
}
int main()
{
  int n,sum,c=0;
  cout<<"Enter the value of n and the array"<<endl;
  cin>>n;
  int arr[n];
  cout<<"array\n";
  for(int i=0;i<n;i++)
  cin>>arr[i];
  cout<<"the total sum\n";
  cin>>sum;
  for(int i=0;i<n;i++)
  c=c+arr[i];
  cout<<"the number of subsets possible\n";
  if(sum>c)
  {
  cout<<0<<endl;
  return 0;
}
  cout<<numberset(n,arr,sum)<<endl;
  return 0;
}
