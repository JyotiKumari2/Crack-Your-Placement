#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int rem= y%x;
        if(rem!=0)
           cout<<0<<" "<<0<<"\n";
           else{
            cout<<1<<" "<<(y/x)<<"\n";
           }
    }
}