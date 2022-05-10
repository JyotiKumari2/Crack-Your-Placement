#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll cnt=0,flag=1;
        cin>>n;
        ll a[n];
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        for(ll i=1;i<=n;i++)
        {
            if(a[i]>i)
            {
                cout<<"Second \n";
                flag=0;
                break;
            }
            else
            {
                cnt+=(i-a[i]);
            }
        }
        if(flag)
        {
            if(cnt==0 || (cnt%2)==0)
            {
                cout<<"Second \n";
            }
            else
            {
                cout<<"First \n";
            }
        }
    }

    return 0;
}