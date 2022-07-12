#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=floor(5/2);
    for(int i=2;i<=n;i++)
    {
            ans+=floor((ans*3)/2);
    }
    return 0;
}