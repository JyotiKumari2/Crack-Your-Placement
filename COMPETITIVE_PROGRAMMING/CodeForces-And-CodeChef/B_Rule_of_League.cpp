#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        if(x>y) swap(x,y); // let stores value 0
        if(x|| !y || (n-1)%y)
        {
            cout<<-1<<"\n";
            continue;
        }
        for(int k=2;k<=n;k+=y)
        {
            for(int i=1;i<=y;i++)
                cout<<k<<" ";
        
        }
        cout<<"\n";


    }
    return 0;
}