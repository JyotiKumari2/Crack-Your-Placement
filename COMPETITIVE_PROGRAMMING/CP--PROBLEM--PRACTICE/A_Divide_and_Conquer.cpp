#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int s=0;
        int ans=N;
        int op=0;
        s=accumulate(v.begin(),v.end(),s);
        if(s%2==0)
        {
            cout<<0<<"\n";
        }
        else
        {

         for(int i=0;i<n;i++)
         {
            op=0;
            int j=v[i];
            while((j%2)==v[i]%2)
            {
                op++;
                j=j/2;
            }
            ans=min(ans,op);
         }
         cout<<ans<<"\n";
        }
    }
    return 0;
}