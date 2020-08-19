#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        int i,b=1;
        for(i=0;i<n-1;i++)
        {
            if(abs(a[i]-a[i+1])>1)
            {
            cout<<"NO"<<"\n";
            b=0;
            break;
            }
        }
    if(b==1 || n==1)
    cout<<"YES"<<endl;
    }
    return 0;
}
