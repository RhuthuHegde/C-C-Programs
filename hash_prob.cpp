// This problem solves the knapsack problem or DP problem of time complexity O(n2) in O(n) using
// unordered_map or hashmap as popularly called
#include<iostream>
#include<unordered_map>
using namespace std;
// function to find the longestsubarray of sum k
int longestsubarray(int *arr,int n,int k)
{
  // initialing an unordered_map
  unordered_map<int,int>mp;
  //prefix_sum is used to find the sum of the array given, and result is used to find the max length of the subarray
int prefix_sum=0,result=0;
// iterating over the elements in the array
  for(int i=0;i<n;i++)
  {
prefix_sum+=arr[i];
// if the prefix_sum is equal to k, store the max length of either i+1 i.e the current position or the older result if
// it exists and is greater than i+1
if(prefix_sum==k)
result=max(result,i+1);
// for k>0 we know that prefix[i]==prefix[j]-k, to find a subarray k
// if the index is stored in the hashmap, it reduces the time complexity to O(1)
// and if it exists then store the max length in the result after comparison
if(mp.count(prefix_sum-k)>0)
result=max(result,i-mp[prefix_sum-k]);
// then store the index with the key in the hash map if it is minimum, otherwise skip it.
mp[prefix_sum]=min(i,mp[prefix_sum]);
}
return result;
}
int main()
{
  int n,k;
cout<<"Enter the length of the array\n";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
cout<<"Enter the value of sum to be calculated\n";
cin>>k;
cout<<"The longest subarray is: "<<longestsubarray(arr,n,k);
  return 0;
}
