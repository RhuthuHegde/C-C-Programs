// Chef has N small boxes arranged on a line from 1 to N. For each valid i, the weight of the i-th box is Wi. Chef wants to bring them to his home, which is at the position 0. He can hold any number of boxes at the same time; however, the total weight of the boxes he's holding must not exceed K at any time, and he can only pick the ith box if all the boxes between Chef's home and the ith box have been either moved or picked up in this trip.
// Therefore, Chef will pick up boxes and carry them home in one or more round trips. Find the smallest number of round trips he needs or determine that he cannot bring all boxes home.
// Input

// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains two space-separated integers N and K.
// The second line contains N space-separated integers W1,W2,…,WN
// Constraints

// 1≤T≤100
// 1≤N,K≤103
// 1≤Wi≤103 for each valid i



#include <iostream>
using namespace std;

int main() {
	// your code goes here
  int t;
  cout<<"test cases"<<endl;
  cin>>t;
  while(t--)
  {
int n,k;
cin>>n>>k;
int w[n];
for(int i=0;i<n;i++)
cin>>w[i];
long long sum=0,c=0;
int i=0,j;
while(i<n)
{
  if(w[i]>k)
  {   j=-1;
      break;
  }
  else{
  while(sum+w[i]<=k && i<n)
  {
    sum=sum+w[i];
    ++i;
  }
++c;
sum=0;
}
}
if(j==-1)
{
cout<<j<<endl;
j=0;
}
else
cout<<c<<endl;
}
	return 0;
}
