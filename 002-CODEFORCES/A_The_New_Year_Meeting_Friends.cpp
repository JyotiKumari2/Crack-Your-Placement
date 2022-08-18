#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>v(3);
    for(int i=0;i<3;i++)
       cin>>v[i];
    sort(v.begin(),v.end());
    int diff1= v[1]-v[0];
    int diff2= v[2]-v[1];
    cout<<diff1+diff2<<"\n";

    return 0;

}