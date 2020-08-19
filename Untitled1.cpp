#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long l,r,sum=0;
	    cin>>l>>r;
	    long long dp[r+1];
	    dp[1]=1;
	   // for(long long i=2;i<=r;i++)
	   // {
	   //     dp[i]=1+dp[i-dp[dp[i-1]]];

	   // }
	    for(long long i=l;i<=r;i++)
	    {dp[i]=1+dp[i-dp[dp[i-1]]];
	        sum=sum+pow(dp[i],2);
	        sum=sum % (1000000000+7);
	    }

	    cout<<sum<<"\n";
	}
	return 0;
}
