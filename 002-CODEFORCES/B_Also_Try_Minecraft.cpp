#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++)
       cin>>a[i];
    vector<int>dp1(n+1,0);
    vector<int>dp2(n+1,0);
    // fill dp1
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
           dp1[i+2]=a[i]-a[i+1];
    }

    // Print dp1;
    // for(int i=0;i<n+1;i++)
    //    cout<<dp1[i]<<" ";

    // fill dp2;
    for(int i=n-1;i>=1;i--)
    {
        if(a[i]>a[i-1])
           dp2[i]=a[i]-a[i-1];
    }

    //Print dp2;
    // for(int i=0;i<n+1;i++)
    //    cout<<dp2[i]<<" ";


    while(m--)
    {
        int x,y;
        cin>>x>>y;

        int s=0;
        if(x<y)
        {
        for(int i=x+1;i<=y;i++)
           s+=dp1[i];
        cout<<s<<"\n";
        }
        else{
            for(int i=x-1;i>=y;i--)
               s+=dp2[i];

            cout<<s<<"\n";
        }
        
    }


    
    return 0;
}