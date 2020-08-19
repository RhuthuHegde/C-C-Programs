#include <iostream>
#include<algorithm>
using namespace std;

int main() {

int t;
cin>>t;
while(t--)
{
    long long int n,m;
    cin>>n>>m;
    long long int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    long long int dp[n+1][m+1];

    for(int i=0;i<n+1;i++)
    dp[i][0]=1;
    for(int j=1;j<m+1;j++)
    dp[0][j]=0;

    for(int i=1;i<=n;i++)
    {
    for(int j=1;j<=m;j++)
    {
    if(j<a[i-1])
    dp[i][j]=dp[i-1][j];
    // cout<<dp[i][j]<<" "<<a[i]<<j<<"\n";}
    else
    dp[i][j]=(dp[i-1][j-a[i-1]] || dp[i-1][j]);
    }}

    if(dp[n][m]==1)
    cout<<"Yes"<<"\n";
    else
    cout<<"No"<<"\n";
}
return 0;
}
