 #include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long int

typedef tree<int,null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// function : find_by_order(idx), order_of_key(element)
//find_by_order(idx): find Kth element index access
//order_of_key(X): No. of elements lesser than X

void solve()
{

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int l=0, r=n-1;
    while(l<r)
    {
        cout<<v[l]<<" "<<v[r]<<" ";
        l++; 
        r--;

    }
    if(n%2!=0)
      cout<<v[r];
    cout<<"\n";
}

int main()
{

  int t;
  cin>>t;
  while(t--)
  {
    solve();
  }
    return 0;
}