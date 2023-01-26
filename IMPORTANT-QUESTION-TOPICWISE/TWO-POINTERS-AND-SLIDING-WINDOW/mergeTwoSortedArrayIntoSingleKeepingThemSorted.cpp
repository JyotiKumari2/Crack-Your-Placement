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
// --------------------------------------------------------------------------------------------------------------------------

int main()
{
    vector<int>v1={1,2,3,4};
    vector<int>v2={5,6,7,8,9};
    vector<int>ans(9);
    int l=0,r=0;
    int k=0;
    while(l<4 && r<5)
    {
        if(v1[l]<=v2[r])
        { 
            ans[k]=v1[l];
            k++;
            l++;

        }
        else{
            ans[k]=v2[r];
            k++;
            r++;
        }
    }
    while(l<4)
    {
        ans[k]=v1[l];
        k++;
        l++;
    }
    while(r<5)
    {
        ans[k]=v2[r];
        k++;
        r++;
    }

    for(auto i:ans)
    {
        cout<<i<<" ";
    }

 
}