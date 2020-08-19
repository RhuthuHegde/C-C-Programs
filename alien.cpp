#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
	// your code goes here
	while(true)
    {   int n=rand()%100+1;
    cout<<n<<"\n";
        double p=rand()%1000000+1,q=rand()%1000000+1;
 long long int sum=0;
       cout<<p<<" "<<q<<"\n";
       double t=p/q;
       cout<<t<<"\n";
	    long long int y=t*pow(10,18);
	    cout<<y<<"\n";
	    for(int i=0;i<n;i++)
	    {
	        long long int temp=y%10;
	        cout<<temp<<" ";
	        sum=sum+temp;
	        y=y/10;
	       // cout<<t<<"\n";
	    }
	    cout<<sum<<"\n";
//        long long a[n];
//       for(long long int i=0;i<n;i++)
//       {
//           a[i]=rand()%1000;
//
//       }
//       for(long long int i=0;i<n;i++)
//       {
//           cout<<a[i]<<" ";
////       }
  }
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    double p,q,t;
	    long long int sum=0;
	    cin>>n;
	    cin>>p>>q;
	    t=p/q;
	    cout<<t<<"\n";
	    long long int y=t*pow(10,n);
	    for(int i=0;i<n;i++)
	    {
	        int temp=y%10;
	        cout<<temp<<" ";
	        sum=sum+temp;
	        y=y/10;
	       // cout<<t<<"\n";
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}

