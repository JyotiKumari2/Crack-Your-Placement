#include<bits/stdc++.h>
using namespace std;
vector<int>bfsOfGraph(int V, vector<int>adj[])
{
    vector<int>bfs;
    vector<int>visited(V+1,0);
    for(int i=1;i<=V;i++)
    {
        if(!visited[i])
        {
            queue<int>q;
            q.push(i);
            visited[i]=1;
            while(!q.empty())
            {
                int node=q.front();
                q.pop();
                bfs.push_back(node);
                for(auto it:adj[node])
                {
                    if(!visited[it])
                    {
                        q.push(it);
                        visited[it]=1;
                    }
                }
            }
        }
    }
    return bfs;
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

    vector<int>bfsTraversal=bfsOfGraph(n,adj);
    cout<<"BFS traversal of graph: \n";
    for(int i=0;i<bfsTraversal.size();i++)
        cout<<bfsTraversal[i]<<" ";
        

    return 0;
}