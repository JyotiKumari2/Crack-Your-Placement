#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>adj(300005);
vector<int>visited(300005);

int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n-1;i++)
   {
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
   }
   int q;
   cin>>q;
   while(q--)
   {
    int a,b,c;
    cin>>a>>b>>c;
    
   }
   return 0;

}