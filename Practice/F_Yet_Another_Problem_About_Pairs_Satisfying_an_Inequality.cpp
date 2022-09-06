#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll n, m;
       cin >> n;

    vector<ll> a1, b1;
    ll v;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        if (v < (i + 1))
        {
            a1.push_back(i + 1);
            b1.push_back(v);
        }
    }
    sort(a1.begin(), a1.end());
    sort(b1.begin(), b1.end());

    ll res = 0;
    for (int i = 0; i < b1.size(); i++)
    {
        int tmp = (lower_bound(a1.begin(), a1.end(), b1[i]) - a1.begin());
        res += tmp;
    }

    cout <<res<<"\n";
    }
}