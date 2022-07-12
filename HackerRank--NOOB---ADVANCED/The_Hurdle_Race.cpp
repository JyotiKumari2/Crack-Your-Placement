#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int *height=new int[n];
    for(int i=0;i<n;i++)
       cin>>height[i];
    int maxHeight=*max_element(height,height+n);
    if(k<maxHeight)
         cout<<maxHeight-k<<"\n";
         else
            cout<<0<<"\n";
    delete []height;
    return 0;
}