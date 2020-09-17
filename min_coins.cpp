#include<bits/stdc++.h>
using namespace std;
// function to compute minimum value of coins
int min(int a,int b)
{
  if(a<b)
  return a;
  else
  return b;
}
// the subcategory in dp is unbounded knapsack
int unbounded(int n,int coin[],int sum)
{
  // initialising the table
  int t[n+1][sum+1];
  // initialisation of 1st and 2nd row
  // if value of n=0 and sum is greater than 0 than the minimum no. of coins to acieve that sum would be infinity, thats why we initilase the first row with 'INT_MAX-1'(-1 because later we add +1 which otherwise would give us an error as INT_MAX+1 will become negative).
  // if the sum=0 then then we need not consider any no. of coins i.e 0. so the first column is initilaised with 0.
  for(int i=1;i<n+1;i++)
  t[i][0]=0;
  for(int j=0;j<sum+1;j++)
  t[0][j]=INT_MAX-1;
  // considering the coin array as [3,5,2] at t[4][1] in the table we should get the value or min no. of coins to achieve the value or sum of 4 with the coin being 3, as 4 is not divisible by 3 we might need infinite number of coins to achieve the sum. But if the sum was 3 and then 3 is divisible by 3 and the min no. of coins would be 1.This function computes that
  for(int j=1;j<sum+1;j++)
  {
    if(j%coin[0]==0)
    t[1][j]=j/coin[0];
    else
    t[1][j]=INT_MAX-1;
  }
  // main code
  // this code fills the rest of the empty table with values.if the value of the coin in the coin array is less than or equal to the sum then we check which gives the minimum value at the t[i][j] whether including the coin or not. If the value of coin is greater than the sum we completely eliminate it.
  for(int i=2;i<n+1;i++)
  {
    for(int j=1;j<sum+1;j++)
    {
      if(coin[i-1]<=j)
      t[i][j]=min(1+t[i][j-coin[i-1]],t[i-1][j]);
      else
      t[i][j]=t[i-1][j];
    }
  }
  // we return the value at t[n][sum] which gives the final value or the answer
  return t[n][sum];
}
int main()
{
  int n,sum;
    cout<<"Enter the number of coins\n";
    cin>>n;
    int coin[n];
    cout<<"coin array\n";
    for(int i=0;i<n;i++)
    cin>>coin[i];
    cout<<"sum to be achieved\n";
    cin>>sum;
    cout<<"The min number of coins needed to achive the sum\n";
    cout<<unbounded(n,coin,sum);
    return 0;
}
