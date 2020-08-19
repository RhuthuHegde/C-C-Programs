#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--)
	{long long int k;
	   cin>>n>>k;
	   long long d[n];
	   for(int i=0;i<n;i++)
	   {
	       cin>>d[i];
	   }
	   for(int i=0;i<n;i++)
	   {
	       if(d[i]%k==0)
	       cout<<"1";
	       else
	       cout<<"0";
	   }
	}
	return 0;
}
