#include<iostream>
#include<cstring>
using namespace std;
int t[100][100];
int max(int a,int b)
{
  if(a>b)
  return a;
  else
  return b;
}
int knapsack(int weights[],int values[],int constraint,int n)
{
  if(n<0 || constraint==0)
  return 0;
  if(t[n][constraint]!=-1)
  return t[n][constraint];
  if(weights[n]<=constraint)
  {
   t[n][constraint]=max((values[n]+knapsack(weights,values,constraint-weights[n],n-1)),knapsack(weights,values,constraint,n-1));
    return t[n][constraint];
}
  else
  {
  t[n][constraint]= knapsack(weights,values,constraint,n-1);
  return t[n][constraint];
}
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
  // for(int i=0;i<n+1;i++)
  // for(int j=0;j<constraint+1;j++)
  // t[i][j]=-1;
  memset(t,-1,sizeof(t));
  cout<<"max profit made"<<"\n";
cout<<knapsack(weights,values,constraint,n-1)<<endl;
return 0;
}
