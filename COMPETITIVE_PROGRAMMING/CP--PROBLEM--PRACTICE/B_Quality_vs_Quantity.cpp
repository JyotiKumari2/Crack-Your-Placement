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

   ll n;
   cin>>n;
   vector<ll>v(n);
   for(ll i=0;i<n;i++)
      cin>>v[i];
   sort(v.begin(),v.end(),greater<int>());
   ll r=v[0];
   ll b=v[n-1]+v[n-2];
   bool flag=false;
   int low=1;
   int high=n-3;
   while(low<high)
   {
    if(r>b)
    {
        flag=true;
        break;
    }
    r+=v[low];
    b+=v[high];
    low++;
    high--;

   }
   if(flag || r>b)
      cout<<"YES\n";
      else
        cout<<"NO\n";
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