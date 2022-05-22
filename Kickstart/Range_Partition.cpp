#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll t;
    cin>>t;
    int cs=1;
    while(t--)
    {
        ll N,X,Y;
        cin>>N>>X>>Y;
        ll sum = N*(N+1)/2;
        ll rem = sum%(X+Y);
        ll rX= sum/(X+Y);
        ll alan = rX*X;
         
        vector<ll>ans;
        if(alan<N)
         ans.push_back(alan);
         else{
        while(alan>=N)
        {
            ans.push_back(N);
            alan-=N;
            N-=1;
            if(alan<N && alan!=0)
            {
                ans.push_back(alan);
                break;
            }
        }
         }
        if(rem)
      cout<<"Case #"<<cs++<<": "<<"IMPOSSIBLE\n";
      else
        {
            cout<<"Case #"<<cs++<<": "<<"POSSIBLE\n";
            cout<<ans.size()<<"\n";
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<"\n";
        }

    }
    return 0;
}


 