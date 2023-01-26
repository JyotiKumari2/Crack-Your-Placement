 #include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long int
#define v vector<int>
#define mod 1e9+7

typedef tree<int,null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// function : find_by_order(idx), order_of_key(element)
//find_by_order(idx): find Kth element index access
//order_of_key(X): No. of elements lesser than X

void solve()
{

    ll n,m;
    cin>>n>>m;
    
    v v1(n);
    v v2(m);
    for(ll i=0;i<n;i++)
       cin>>v1[i];
    

    for(ll i=0;i<m;i++)
       cin>>v2[i];

     ll c=0;
    ll i=0,k=0;
    ll j=0,l=0;
    while(k<n && l<m)
    {
        if(v1[i]==v2[j])
        {
            k=i,l=j;
            while(v1[i]==v1[k])
            k++;
            while(v2[j]==v2[l])
            l++;
         c+=(k-i)*(l-j);
         i=k;
         j=l;
        }
        else if(v1[i]<v2[j])
        {
            i++;
        }
        else{
            j++;
        }
    }

    cout<<c<<"\n";
     

     
}

int main()
{

//    int t;
//    cin>>t;
//    while(t--)
//    {
    solve();
//    }
 
}