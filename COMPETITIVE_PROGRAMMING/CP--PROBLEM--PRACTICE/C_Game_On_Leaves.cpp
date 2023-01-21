#include<bits/stdc++.h>
using namespace std;
// vector<vector<int>>adj(1001);
#define ll long long int
const ll N = 2e5 + 5;
 ll n,X;
ll deg[N];
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       
       memset(deg,(ll)0,N);
        cin>>n>>X;
        for(ll i=1;i<=n-1;i++)
        {
          ll x,y;
          cin>>x>>y;
          deg[x]++;
          deg[y]++;
        }
        if(deg[X]<=1)
          cout<<"Ayush";
          else
             {
                if(n%2)
                  cout<<"Ashish";
                  else
                    cout<<"Ayush";
             }
cout<<"\n";
    }
    return 0;
}