 #include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long int
#define v vector<int>
#define vl vector<ll>

typedef tree<int,null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// function : find_by_order(idx), order_of_key(element)
//find_by_order(idx): find Kth element index access
//order_of_key(X): No. of elements lesser than X

void solve()
{

   ll n,m,a;
   cin>>n>>m>>a;
   cout<<((n+a-1)/a) * ((m+a-1)/a);

     
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