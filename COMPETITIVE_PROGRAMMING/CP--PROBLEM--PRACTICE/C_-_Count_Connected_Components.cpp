#include<bits/stdc++.h>
using namespace std;
void dfs(int i,vector<vector<int>>&adj, vector<int>&vis)
{
    vis[i]=1;
    for(auto it:adj[i])
    {
        if(vis[it]==0)
        {
            dfs(it,adj,vis);
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n+1);
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);

    }
    int c=0;
    vector<int>vis(n+1,0);
    for(int i=1;i<=n;i++)
    {
         if(vis[i]==0)
         {
            dfs(i,adj,vis);
            c++;
         }
    }
    cout<<c<<"\n";
    return 0;
}