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
   ll n,s;
   cin>>n>>s;
   vl a(n);
   for(ll i=0;i<n;i++)
      cin>>a[i];
    int len=0;
    int i=0;
    int j=0;
    int sum=0;
    while(j<n)
    {
        sum+=a[j];
        while(i<=j && sum>s)
        {
            sum-=a[i];
            i++;
        }
        if(sum<=s)
          len=max(len,j-i+1);
        j++;
    }
    while(i<=j)
    {
        len+=(j-i+1);
        j--;
    }
    cout<<len<<"\n";
     
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