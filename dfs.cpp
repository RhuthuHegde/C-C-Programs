//to compute the level and subtree of the nodes in the tree along with printing all the elements in the tree
// using depth first search.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>adj;
vector<int>level,subtree;
//vctor of vector for adjACENT MATRICES
void dfs(int cur=1,int par=0)
{
  cout<<cur<<"\n";
  subtree[cur]=1;
  // we know that the level of the cur node is 1 more than the parent node always.
  level[cur]=level[par]+1;
  //iterating over all the nodes in the node excluding the parent node, as iterating that wud mean never ending
    for(int neighbours:adj[cur])
  {
    if(neighbours==par)
    continue;
    //the neighbour becomes the current node and the current node which is a parent to the neighbour or current node.
    dfs(neighbours,cur);
    subtree[cur]+=subtree[neighbours];
    // as the subtree value for the the parent depends on the value of the child it shud come after the recursion call.
  }
}
int main()
{
  int n;
  cout<<"Enter the number of nodes\n";
  cin>>n;
  adj.resize(n+1);
  level.resize(n+1);
  subtree.resize(n+1);
  for(int i=0;i<n-1;i++)
  {
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  // the level of the 0th node is -1 which implies taht the level of the 1st node is 0.
  level[0]=-1;
  cout<<"The nodes in dfs are\n";
  dfs();
  cout<<"The levels of the nodes are\n";
  for(int i=1;i<=n;i++)
  {
    cout<<i<<" "<<level[i]<<"\n";
  }
  cout<<"The subtree sizes of the nodes are\n";
  for(int i=1;i<=n;i++)
  {
    cout<<i<<" "<<subtree[i]<<"\n";
  }
return 0;
}
