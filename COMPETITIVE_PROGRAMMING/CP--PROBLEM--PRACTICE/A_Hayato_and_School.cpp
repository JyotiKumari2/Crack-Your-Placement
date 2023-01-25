#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// function : find_by_order(idx), order_of_key(element)
//find_by_order(idx): find Kth element index access
//order_of_key(X): No. of elements lesser than X

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    set<int>oI;
    set<int>eI;
    int cnt=0;
    int cE=0;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      if(a[i]%2)
        oI.insert(i+1);
    else
      eI.insert(i+1);
    }
    if(oI.size()==0 || (oI.size()==2 && eI.size()==1))
      {
        cout<<"NO";
      }

    else if(oI.size()>=1 && eI.size()>=2)
    {
        cout<<"YES\n";
        cout<<*(oI.begin())<<" ";
        for(auto i:eI)
        {
            if(cE>=2)
              break;
            cout<<i<<" ";
            cE++;
        }

    }
    else if(oI.size()>=3)
    {
        cout<<"YES\n";
        for(auto i:oI)
        {
            if(cnt>=3)
              break;
            cout<<i<<" ";
            cnt++;
        }
    }
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