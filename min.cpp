#include <iostream>
#include<algorithm>
using namespace std;

int main(){
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    long long int k,i;
	    cin>>n>>k;
	    long long int p[n],c=0,mini=k;
	    for(i=0;i<n;i++)
	    {
	    cin>>p[i];
	    }
	    int b=0;
	    for(i=0;i<n;i++)
	    {
	        if(k%p[i]==0)
	        {
	        c=k/p[i];
	        b=1;
	        }

	        if(c>0 && c<mini)
	        mini=c;

	    }
	    if(b==0)
	    cout<<-1<<"\n";
	    else
	    {
	    cout<<k/mini<<"\n";
	    }
	}
	return 0;
}
