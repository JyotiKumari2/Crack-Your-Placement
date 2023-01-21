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
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    int c=0;
    vector<int>vis(n+1);
    for(int i=1;i<=n;i++)
    { 
         if(vis[i]==0)
         {
            dfs(i,adj,vis);
            c++;
         }

    }
    // cout<<c<<" "<<m;

    if(c==1 && m==n-1)
       cout<<"YES\n";
       else
         cout<<"NO\n";
    return 0;
}