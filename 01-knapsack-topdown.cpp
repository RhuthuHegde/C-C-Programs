#include<iostream>
using namespace std;
int t[100][100];
int max(int a,int b)
{
  if(a>b)
  return a;
  else
  return b;
}
int knapsack(int n,int w,int weights[],int values[])
{
  for(int i=0;i<n+1;i++)
  for(int j=0;j<w+1;j++)
  if(i==0||j==0)
  t[i][j]=0;
  for(int i=0;i<n+1;i++)
  {
    for(int j=0;j<w+1;j++)
  {
    if(weights[i-1]<=j)
    t[i][j]=max((values[i-1]+t[i-1][j-weights[i-1]]),t[i-1][j]);
    else
    t[i][j]=t[i-1][j];
  }
  }
  return t[n][w];
}

int main()
{
  int n;
  cout<<"Enter the number,weights,values"<<endl;
  cin>>n;
  int weights[n],values[n],w;
  cout<<"weights"<<endl;
  for(int i=0;i<n;i++)
  cin>>weights[i];
  cout<<"values"<<endl;
  for(int i=0;i<n;i++)
  cin>>values[i];
  cout<<"constraint or total weight of the knapsack"<<endl;
  cin>>w;
  cout<<"max profit"<<endl;
 cout<<knapsack(n,w,weights,values)<<endl;
  return 0;
}
