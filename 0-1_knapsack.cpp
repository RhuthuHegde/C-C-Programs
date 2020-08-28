#include<iostream>
#include<algorithm>
using namespace std;
int max(int a,int b)
{
  if(a>b)
  return a;
  else
  return b;
}
int knapsack(int weights[],int values[],int constraint,int n)
{
  if(n==0 || constraint==0)
  return 0;
  if(weights[n-1]<=constraint)
  return max((values[n-1]+knapsack(weights,values,constraint-weights[n-1],n-1)),knapsack(weights,values,constraint,n-1));
  else
  return knapsack(weights,values,constraint,n-1);
}
int main()
{
  int n,constraint;
  cout<<"enter the number, weights and values"<<endl;
  cin>>n;
  int weights[n],values[n];
  cout<<"weights"<<endl;
  for(int i=0;i<n;i++)
  cin>>weights[i];
  cout<<"values"<<endl;
  for(int i=0;i<n;i++)
  cin>>values[i];
  cout<<"constraint"<<endl;
  cin>>constraint;
  cout<<"max profit made"<<"\n";
  cout<<knapsack(weights,values,constraint,n)<<endl;
return 0;
}
