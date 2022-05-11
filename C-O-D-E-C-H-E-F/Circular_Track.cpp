#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
           ll i,f,m;
           cin>>i>>f>>m;
           ll minDist=min(abs(i-f),(m-abs(i-f)));
           cout<<minDist<<"\n";
    }
    return 0;
}