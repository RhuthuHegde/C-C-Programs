#include<iostream>
using namespace std;
int unbounded(int n,int coin[],int sum)
{
  int t[n+1][sum+1];
  for(int i=0;i<n+1;i++)
  t[i][0]=1;
  for(int j=1;j<sum+1;j++)
  t[0][j]=0;
  for(int i=1;i<n+1;i++)
  {
    for(int j=1;j<sum+1;j++)
    {
      if(coin[i-1]<=j)
      t[i][j]=t[i][j-coin[i-1]]+t[i-1][j];
      else
      t[i][j]=t[i-1][j];
    }
  }
  return t[n][sum];
}
int main()
{ int n,sum;
  cout<<"Enter the number of coins\n";
  cin>>n;
  int coin[n];
  cout<<"coin array\n";
  for(int i=0;i<n;i++)
  cin>>coin[i];
  cout<<"sum to be achieved\n";
  cin>>sum;
  cout<<"the number of ways to achieve the sum\n";
  cout<<unbounded(n,coin,sum);
  return 0;
}
