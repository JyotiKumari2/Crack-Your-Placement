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

     string s;
     cin>>s;
     string pi = "3141592653589793238462643383279";
     int c=0;
     for(int i=0;i<s.size();i++)
     {
        if(s[i]!=pi[i])
          break;
          else
           c++;

     }
     cout<<c<<"\n";
     
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