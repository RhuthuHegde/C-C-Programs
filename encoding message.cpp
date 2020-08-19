#include <iostream>
#include<algorithm>
#include<map>
using namespace std;
int main() {
	// your code goes here
	int t,n;
	cin>>t;
	std::map<int,string>hash;
	while(t--)
	{
	    string s;
	    cin>>n;
	    cin>>s;
	    if(n%2!=0)
	    n=n-1;  
	    int j=0;
	    for(int i='a';i<='z';i++)
	    {
	        hash[j]=i;
	        j++;
	    }
	    for(int i=0;i<n;i=i+2)
	    {
	        swap(s[i],s[i+1]);
	        
	    }
	    for(int i=0;i<n+1;i++)
	    {   int y=s[i]-'a';
	        cout<<hash[25-y];
	    }
	    cout<<"\n";
	    
	}
	return 0;
}
