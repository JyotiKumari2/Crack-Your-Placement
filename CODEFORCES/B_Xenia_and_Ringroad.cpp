#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m;
    cin>>n>>m;
    ll *task=new ll[m];
    for(ll i=0;i<m;i++)
       cin>>task[i];
    ll a=1;
    ll ans=0;
    for(ll i=0;i<m;i++)
    {
        if(task[i]>=a)
        {
           ans+=(task[i]-a);
           a=task[i];
        }
           else  
           {
            ans+=(n-a+task[i]);
            a=task[i];
           }
             
             
    }
    cout<<ans<<"\n";
    delete []task;
    return 0;
}