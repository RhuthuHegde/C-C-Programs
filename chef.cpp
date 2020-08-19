#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int a[n];
    for(int i=0;i<n;i++)
    {
    if(s[i]=='+')
    continue;
    else
    a[i]=s[i]-'0';
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<"+";
    return 0;
}
