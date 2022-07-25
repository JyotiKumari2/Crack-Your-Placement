#include<bits/stdc++.h>
using namespace std;
void combinationSum(vector<vector<int>>&ans, vector<int>&ds, int *arr, int n, int i, int target)
{
   if(i==n)
   {
      if(target==0)
        {
            ans.push_back(ds);
            return;
        }
   }

   if(arr[i]<=target)
   {
        ds.push_back(arr[i]);
        combinationSum(ans,ds,arr,n,i,target-arr[i]);
        ds.pop_back();
   }
   combinationSum(ans,ds,arr,n,i+1,target);
}
int main()
{
    cout<<"Enter number of array elements:\n";
    int n;
    cin>>n;
   
    cout<<"Enter the target sum:\n";
    int sum ;
    cin>>sum;
     cout<<"Enter array elements:\n";
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<vector<int>>ans;
    vector<int>ds;

    combinationSum(ans,ds,arr,n,0,sum);
    cout<<ans.size();
    for(int i=0;i<ans.size();i++)
    {
        int m=ans[i].size();
        for(int j=0;j<m;j++)
        cout<<ans[i][j]<<" ";

        cout<<"\n";

    }
    delete []arr;
    return 0;
}