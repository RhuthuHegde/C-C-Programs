#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m,n,c=0;
    cin>>n>>m;
    if(n>=m)
    cout<<n-m<<"\n";
    else
    {
        while(m>n)
        {
            ++c;
            if(m%2==0)
                m=m/2;
            else
                m++;
        }
        cout<<c+n-m<<"\n";
    }
    return 0;
}
