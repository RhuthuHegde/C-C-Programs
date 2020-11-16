// *question*
// Mussadi lal wants to climb a series of stairs. There are n stairs in total,
// Mussadi can either climb 1, 2 or 3 stairs in a single move.
// In how many ways can Mussadi lal reach the last stair i.e. the nth stair.
// INPUT
// The first line of the input contains an integer t, the number of test cases. Then t test descriptions follow. Each test consists of a single number n denoting the number of stairs Mussadi lal wants to climb.
//
// OUTPUT
// For each test case print the number of ways Mussadi lal can climb the stairs modulo 1000000007.
//
// CONSTRAINTS
// 1 <= t <= 100
// 1 <= n <= 100000
// EXAMPLE
// Input:
// Input:
// 3
// 5
// 8
// 3
//
// Output:
// 13
// 81
// 4


// #explanation#
// for 1 step   for 2 steps    for 3 steps     for 4 steps
// 1                1  1        1  1  1         1  1  1  1
//                  2           1  2             1  2  1
//                              2  1              2  1  1
// 														 3                 3  1
// 														                   1  1  2
// 																							 2  2
// 																							 1  3
// we can go to 1st step in 1 way
// we can go to 2nd step in 2 ways
// we can go to 3rd step in 4 ways
// adding 1 to each step in 3rd step one would allow us to go to 4th step, likewise for all other steps too
// so for 4th step we just add the number of ways to go to 1st step,2nd step and 3rd step
// 4th step no. of ways=1+2+4=7 ways to get to 4th step


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	long long int s=1000000007;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int t[n];
	    t[1]=1;
	    t[2]=2;
	    t[3]=4;
	    for(long long int i=4;i<=n;i++)
	    {
	        t[i]=(t[i-1]+t[i-2]+t[i-3])%s;
	    }
	    cout<<t[n]<<"\n";
	}
	return 0;
}
