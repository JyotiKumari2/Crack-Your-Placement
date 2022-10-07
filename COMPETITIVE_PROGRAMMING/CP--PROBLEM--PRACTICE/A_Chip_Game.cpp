#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        if((n+m)%2==0)
           cout<<"Tonya\n";
           else
             cout<<"Burenka\n";
    }
    return 0;
}