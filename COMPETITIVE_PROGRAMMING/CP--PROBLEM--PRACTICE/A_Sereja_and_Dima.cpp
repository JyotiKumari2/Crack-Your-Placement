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
    int l=0,r=n-1;
    int cnt=0;
    int s1=0;
    int s2=0;
    while(l<=r)
    {
        if(cnt==0)
        {
           if(v[l]>=v[r])
           {
             s1+=v[l];
             l++;
           }
             else
             {
              s1+=v[r];
              r--;
             }
            cnt=1;
        }
        else{

             if(v[l]>=v[r])
           {
             s2+=v[l];
             l++;
           }
             else
             {
              s2+=v[r];
              r--;
             }
            cnt=0;


        }
        
    }
    cout<<s1<<" "<<s2;
    cout<<"\n";
  
}

int main()
{

  int t;
  cin>>t;
//   while(t--)
//   {
    solve();
//   }
    return 0;
}