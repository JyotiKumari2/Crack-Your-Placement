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
        int *a=new int[n];
        int *b=new int[n];
        for(int i=0;i<n;i++)
        {
             cin>>a[i];
        }
        for(int i=0;i<n;i++)
          {
            cin>>b[i];
          }

          unordered_map<int,int>m;
          for(int i=0;i<n;i++)
          {
            m[a[i]]=b[i];
          }
         vector<pair<int,int>>v;
         for(int i=0;i<n;i++)
         {
            v.push_back({a[i],b[i]});
         }
         sort(v.begin(),v.end());
         for(int i=0;i<n;i++)
         {
            if(k>=v[i].first)
                 k+=(v[i].second);
         }

         cout<<k<<"\n";
          delete[]a;
          delete[]b;

    }
    return 0;
}