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
     ll n,k,m;
     cin>>n>>k>>m;
     v a(n);
     for(int i=0;i<n;i++)
       cin>>a[i];
    v ans(n-1);
    bool flag=true;
    // if(k>m)
    //   {
    //     cout<<"No\n";
    //     return;
    //   }
    for(int i=0;i<n-1;i++)
    {
        ans[i]=a[i+1]-a[i];
    } 
    ll s=0;
    ll ele=0;

    //debug
    // for(auto i:ans)
    //   cout<<i<<" ";
    for(int i=n-2;i>=0;i--)
    {
        // ele=0;
        if(ans[i]<=0)
        {
            if(ans[i]<0)
              ele+=(abs(ans[i])+1);
            else
              ele++;
            s+=(ele);
            if(ele>=k || s>m )
            {
                flag=false;
                break;
            } 

        }
    }
    if(flag==true)
      cout<<"Yes\n";
      else
        cout<<"No\n";

     
}

int main()
{

   int t;
   cin>>t;
   while(t--)
   {
    solve();
   }
 
}