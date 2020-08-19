#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n,pos=0,neg=0,zero=0,x;
    vector <int> arr;
    cin>>n;
    for(double i=0;i<n;i++)
    {
    cin>>x;
    arr.push_back(x);
    }
    for(double i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
           ++neg;
           cout<<neg<<" ";
        }

        else if(arr[i]>0)
        ++pos;
        else
        ++zero;
    }
    cout<<setprecision(6)<<pos/n<<"\n";
    cout<<setprecision(6)<<neg/n<<"\n";
    cout<<setprecision(6)<<zero/n<<"\n";

    return 0;
}
