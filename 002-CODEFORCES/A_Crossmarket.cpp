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
        if(n==1 && m==1)
           {
            cout<<0<<"\n";
             

           }
           else
           cout<<(n-1)+(m-1)+1+min(n,m)-1<<"\n";
    }
    return 0;
}