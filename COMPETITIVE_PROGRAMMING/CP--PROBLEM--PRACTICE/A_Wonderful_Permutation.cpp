#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>p(n);
        for(int i=0;i<n;i++)
            cin>>p[i];
        unordered_map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            mp[i]=0;
        }
        for(int i=0;i<k;i++)
        {
            mp[p[i]]=-1;
        }
        int count=k;
        for(int i=1;i<=k;i++)
        {
            if(mp[i]==-1)
                count--;
        }
        cout<<count<<"\n";

    }
    return 0;
}