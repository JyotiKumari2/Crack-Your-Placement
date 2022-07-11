#include<bits/stdc++.h>
using namespace std;

int countPages(int n, int p)
{
    return min(p/2,(n/2-p/2));
}
int main()
{
    int n,p;
    cin>>n>>p;
    int ans=countPages(n,p);
    cout<<ans<<"\n";
    return 0;
}