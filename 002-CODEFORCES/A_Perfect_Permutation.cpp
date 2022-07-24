#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *ans = new int[n];
        ans[0]=n;
        for(int i=1;i<n;i++)
        {
            ans[i]=i;
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }

        delete []ans;
    }
    return 0;
}