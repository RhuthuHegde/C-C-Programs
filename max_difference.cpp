#include <iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n=rand()%10+2,k=rand()%5+1;
	    cout<<n<<" "<<k<<"\n";
//	    cin>>n>>k;
	    int w[n];
	    for(int i=0;i<n;i++)
	         w[i]=rand()%100;
        for(int i=0;i<n;i++)
            cout<<w[i]<<" ";
//	    cin>>w[i];
        sort(w,w+n);
	    long long sum1=0,sum2=0;
	    int i=0;
	    while(i<k)
	    {
	        sum1=sum1+w[i];
	        ++i;
	    }
	    for(int i=k;i<n;i++)
	    sum2=sum2+w[i];
	    cout<<"sum1"<<sum1<<" "<<"sum2"<<sum2<<"\n";
	    long long t=sum2-sum1;
	    if(t<0)
	    cout<<abs(t)<<"\n";
	    else
	    cout<<t<<"\n";
	}
	return 0;
}

