// Question :

// Given a list of N integers , print sums of all the subsets in it, in increasing order.



// Code:  Using Recursion

#include<bits/stdc++.h>
using namespace std;

void solve(int i, vector<int>&ans, vector<int>arr, int n , int sum )
{

        //base condition
        if(i==n)
        {
            ans.push_back(sum);
              return;
        }
        // Pick
        solve(i+1,ans,arr,n,sum+arr[i]);
        //Not pick
        solve(i+1,ans,arr,n,sum);
}
int main()
{
    cout<<"Enter array size:\n";
    int n;
    cin>>n;

    cout<<"Enter array elements:\n";
    vector<int>arr(n);
    for(int i=0;i<n;i++)
       cin>>arr[i];

    
    vector<int>ans;
    solve(0,ans,arr,n, 0);
    
    sort(ans.begin(),ans.end());
    cout<<"Sum of all subsets:\n";
    for(int i=0;i<ans.size();i++)
       cout<<ans[i]<<" ";
    return 0;
}