#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    vector<int>a(n);
    for(int i=0;i<n;i++)
      cin>>a[i];
    rotate(a.begin(),a.begin()+a.size()-k,a.end());
    while(q--)
    {
        int ind;
        cin>>ind;
        cout<<a[ind]<<"\n";
    }
    

    return 0;
}