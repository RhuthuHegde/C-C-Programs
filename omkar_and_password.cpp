#include<iostream>
using namespace std;

int main()
{
    int t,n;
  cin>>t;
  while(t--)
  {
    long long sum=0;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=n;i++)
    sum=sum+a[i];
    cout<<sum/n<<" ";
    // cout<<sum/n<<"\n";
  }
  return 0;
}
