#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
       cin>>a[i];
    vector<ll>dp1(n+1,0);
    vector<ll>dp2(n+1,0);
    // fill dp1
    for(ll i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
           dp1[i+2]=a[i]-a[i+1];
    }

    // Print dp1;
    // for(int i=0;i<n+1;i++)
    //    cout<<dp1[i]<<" ";

    // fill dp2;
    for(ll i=n-1;i>=1;i--)
    {
        if(a[i]>a[i-1])
           dp2[i]=a[i]-a[i-1];
    }

    //Print dp2;
    // for(int i=0;i<n+1;i++)
    //    cout<<dp2[i]<<" ";


    vector<ll>prefixSum1(n+1,0);
    prefixSum1[0]=dp1[0];
    for(ll i=1;i<n+1;i++)
       prefixSum1[i]=dp1[i]+prefixSum1[i-1];


    vector<ll>prefixSum2(n+1,0);
    prefixSum2[n]=dp2[n];
    for(ll i=n-1;i>=0;i--)
    {
        prefixSum2[i]=dp2[i]+prefixSum2[i+1];
    }




    



    while(m--)
    {
        int x,y;
        cin>>x>>y;
        if(x<y)
          cout<<abs(prefixSum1[y]-prefixSum1[x])<<"\n";
          else
          cout<<abs(prefixSum2[y]-prefixSum2[x])<<"\n";
        
    }


    
    return 0;
}