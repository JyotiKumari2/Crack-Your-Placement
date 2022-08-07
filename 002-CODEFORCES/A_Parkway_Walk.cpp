#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>dist(n);
        for(int i=0;i<n;i++)
            cin>>dist[i];
        int energySum = 0;
        for(int i=0;i<n;i++)
        {
            energySum+=dist[i];

        }
        if(m>=energySum)
            cout<<0<<"\n";
            else
            {
                cout<<abs(m-energySum)<<"\n";
            }
    }
    return 0;
}