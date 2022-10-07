#include<bits/stdc++.h>
using namespace std;
void dfs(int node, vector<int>adj[], vector<int>&storeDfs, vector<int>&visited)
{
    storeDfs.push_back(node);
    visited[node]=1;
    for(auto it:adj[node])
    {
        if(!visited[it])
        {
            dfs(it,adj,storeDfs,visited);
        }
    }

}
int main()
{
    int n,m;
    cin>>n>>m;

    //undirected graph
    vector<int>adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    vector<int>storeDfs;
    vector<int>visited(n+1,0);
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            dfs(i,adj,storeDfs,visited);
        }
    }

    cout<<"DFS traversal of Graph:\n";
    for(int i=0;i<storeDfs.size();i++)
        cout<<storeDfs[i]<<" ";

    return 0;
}